//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EditAutopart.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm14 *Form14;
//---------------------------------------------------------------------------
__fastcall TForm14::TForm14(TComponent* Owner)
	: TForm(Owner)
{
	LoadAutoparts();
}
//---------------------------------------------------------------------------
void TForm14::LoadAutoparts() {
    ListBoxWorkers->Clear();
	ADOQuery->SQL->Text = "SELECT * FROM ������������";
	ADOQuery->Open();
    while (!ADOQuery->Eof) {
		ListBoxWorkers->Items->Add(ADOQuery->FieldByName("��������")->AsString);
        ADOQuery->Next();
    }
    ADOQuery->Close();
}


void __fastcall TForm14::ListBoxWorkersClick(TObject *Sender) {
    if (ListBoxWorkers->ItemIndex != -1) {
		ADOQuery->SQL->Text = "SELECT * FROM ������������ WHERE �������� = :Name";
        ADOQuery->Parameters->ParamByName("Name")->Value = ListBoxWorkers->Items->Strings[ListBoxWorkers->ItemIndex];
        ADOQuery->Open();
		EditName->Text = ADOQuery->FieldByName("�����")->AsString;
        ADOQuery->Close();
    }
}

//
void __fastcall TForm14::ButtonAddClick(TObject *Sender)
{
    if (ListBoxWorkers->ItemIndex != -1) {
		try {
			ADOQuery->SQL->Text = "UPDATE ������������ SET �������� = :Name, ���� = :Price, ���������� = :Count WHERE �������� = :OldName";
			ADOQuery->Parameters->ParamByName("Name")->Value = EditName->Text;
			try
			{
				ADOQuery->Parameters->ParamByName("Price")->Value = StrToInt(EditPrice->Text);
				ADOQuery->Parameters->ParamByName("Count")->Value = StrToInt(EditCount->Text);
			}
			catch (const Exception &e)
			{
				MessageDlg("������! � ���� � ���������� ������� �����", mtError, TMsgDlgButtons() << mbOK, 0);
			}
            ADOQuery->Parameters->ParamByName("OldName")->Value = ListBoxWorkers->Items->Strings[ListBoxWorkers->ItemIndex];


			ADOQuery->ExecSQL();
            LoadAutoparts();

			MessageDlg("������ ������� ���������!", mtInformation, TMsgDlgButtons() << mbOK, 0);
        }
		catch (Exception &E) {
			MessageDlg("������ ��� ���������� ������: " + E.Message, mtError, TMsgDlgButtons() << mbOK, 0);
        }
	}
}
