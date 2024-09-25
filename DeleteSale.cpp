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
	ADOQuery->SQL->Text = "SELECT * FROM Продажи";
    ADOQuery->Open();
    while (!ADOQuery->Eof) {
		ListBoxWorkers->Items->Add(ADOQuery->FieldByName("Товар")->AsString);
        ADOQuery->Next();
    }
    ADOQuery->Close();
}

void __fastcall TForm12::ButtonDeleteClick(TObject *Sender) {
    if (ListBoxWorkers->ItemIndex != -1) {
		try {
			ADOQuery->SQL->Text = "DELETE FROM Продажи WHERE Товар = :Name";
			ADOQuery->Parameters->ParamByName("Name")->Value = ListBoxWorkers->Items->Strings[ListBoxWorkers->ItemIndex];
			ADOQuery->ExecSQL();
			LoadClients();

			MessageDlg("Запись успешно удалена!", mtInformation, TMsgDlgButtons() << mbOK, 0);
        }
		catch (Exception &E) {
            MessageDlg("Ошибка при удалении записи: " + E.Message, mtError, TMsgDlgButtons() << mbOK, 0);
        }
	}
}
