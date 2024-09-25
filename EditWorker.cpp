//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EditWorker.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
	LoadWorkers();
}
//---------------------------------------------------------------------------


void TForm5::LoadWorkers() {
    ListBoxWorkers->Clear();
	ADOQuery->SQL->Text = "SELECT * FROM ���������";
    ADOQuery->Open();
    while (!ADOQuery->Eof) {
		ListBoxWorkers->Items->Add(ADOQuery->FieldByName("���")->AsString);
        ADOQuery->Next();
    }
    ADOQuery->Close();
}

//

// ���������� ����� ��� ������ ���������
void __fastcall TForm5::ListBoxWorkersClick(TObject *Sender) {
    if (ListBoxWorkers->ItemIndex != -1) {
        ADOQuery->SQL->Text = "SELECT * FROM ��������� WHERE ��� = :Name";
        ADOQuery->Parameters->ParamByName("Name")->Value = ListBoxWorkers->Items->Strings[ListBoxWorkers->ItemIndex];
        ADOQuery->Open();
		EditName->Text = ADOQuery->FieldByName("���")->AsString;
        EditPosition->Text = ADOQuery->FieldByName("���������")->AsString;
        ADOQuery->Close();
    }
}

//
void __fastcall TForm5::ButtonAddClick(TObject *Sender)
{
    if (ListBoxWorkers->ItemIndex != -1) {
		try {
			ADOQuery->SQL->Text = "UPDATE ��������� SET ��� = :Name, ��������� = :Position WHERE ��� = :OldName";
            ADOQuery->Parameters->ParamByName("Name")->Value = EditName->Text;
            ADOQuery->Parameters->ParamByName("Position")->Value = EditPosition->Text;
            ADOQuery->Parameters->ParamByName("OldName")->Value = ListBoxWorkers->Items->Strings[ListBoxWorkers->ItemIndex];


			ADOQuery->ExecSQL();
            LoadWorkers();

            MessageDlg("������ ������� ���������!", mtInformation, TMsgDlgButtons() << mbOK, 0);
        }
		catch (Exception &E) {
            MessageDlg("������ ��� ���������� ������: " + E.Message, mtError, TMsgDlgButtons() << mbOK, 0);
        }
	}
}
//---------------------------------------------------------------------------
