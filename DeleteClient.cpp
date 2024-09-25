//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DeleteClient.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;


void TForm9::LoadClients() {
    ListBoxWorkers->Clear();
    ADOQuery->SQL->Text = "SELECT * FROM �������";
    ADOQuery->Open();
    while (!ADOQuery->Eof) {
		ListBoxWorkers->Items->Add(ADOQuery->FieldByName("���")->AsString);
        ADOQuery->Next();
    }
    ADOQuery->Close();
}


//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{
    LoadClients();
}
//---------------------------------------------------------------------------

void __fastcall TForm9::ButtonDeleteClick(TObject *Sender) {
    if (ListBoxWorkers->ItemIndex != -1) {
		try {
			ADOQuery->SQL->Text = "DELETE FROM ������� WHERE ��� = :Name";
			ADOQuery->Parameters->ParamByName("Name")->Value = ListBoxWorkers->Items->Strings[ListBoxWorkers->ItemIndex];
			ADOQuery->ExecSQL();
			LoadClients();

			MessageDlg("������ ������� �������!", mtInformation, TMsgDlgButtons() << mbOK, 0);
        }
		catch (Exception &E) {
            MessageDlg("������ ��� �������� ������: " + E.Message, mtError, TMsgDlgButtons() << mbOK, 0);
        }
	}
}
