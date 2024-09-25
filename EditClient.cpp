//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EditClient.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{
    LoadClients();
}
//---------------------------------------------------------------------------

void TForm8::LoadClients() {
    ListBoxWorkers->Clear();
	ADOQuery->SQL->Text = "SELECT * FROM �������";
    ADOQuery->Open();
    while (!ADOQuery->Eof) {
		ListBoxWorkers->Items->Add(ADOQuery->FieldByName("���")->AsString);
        ADOQuery->Next();
    }
    ADOQuery->Close();
}



void __fastcall TForm8::ListBoxWorkersClick(TObject *Sender) {
    if (ListBoxWorkers->ItemIndex != -1) {
		ADOQuery->SQL->Text = "SELECT * FROM ������� WHERE ��� = :Name";
		ADOQuery->Parameters->ParamByName("Name")->Value = ListBoxWorkers->Items->Strings[ListBoxWorkers->ItemIndex];
		ADOQuery->Open();
		EditName->Text = ADOQuery->FieldByName("���")->AsString;
        ADOQuery->Close();
    }
}

//
void __fastcall TForm8::ButtonAddClick(TObject *Sender)
{
    if (ListBoxWorkers->ItemIndex != -1) {
		try {
			ADOQuery->SQL->Text = "UPDATE ������� SET ��� = :Name WHERE ��� = :OldName";
			ADOQuery->Parameters->ParamByName("Name")->Value = EditName->Text;
            ADOQuery->Parameters->ParamByName("OldName")->Value = ListBoxWorkers->Items->Strings[ListBoxWorkers->ItemIndex];


			ADOQuery->ExecSQL();
			LoadClients();

            MessageDlg("������ ������� ���������!", mtInformation, TMsgDlgButtons() << mbOK, 0);
        }
		catch (Exception &E) {
            MessageDlg("������ ��� ���������� ������: " + E.Message, mtError, TMsgDlgButtons() << mbOK, 0);
        }
	}
}
