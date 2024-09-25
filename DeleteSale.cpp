//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DeleteSale.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm12 *Form12;
//---------------------------------------------------------------------------
__fastcall TForm12::TForm12(TComponent* Owner)
	: TForm(Owner)
{
    LoadClients();
}
//---------------------------------------------------------------------------

void TForm12::LoadClients() {
    ListBoxWorkers->Clear();
	ADOQuery->SQL->Text = "SELECT * FROM �������";
    ADOQuery->Open();
    while (!ADOQuery->Eof) {
		ListBoxWorkers->Items->Add(ADOQuery->FieldByName("�����")->AsString);
        ADOQuery->Next();
    }
    ADOQuery->Close();
}

void __fastcall TForm12::ButtonDeleteClick(TObject *Sender) {
    if (ListBoxWorkers->ItemIndex != -1) {
		try {
			ADOQuery->SQL->Text = "DELETE FROM ������� WHERE ����� = :Name";
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
