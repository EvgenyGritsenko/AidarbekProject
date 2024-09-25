//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DeleteWorker.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
void TForm6::LoadWorkers() {
    ListBoxWorkers->Clear();
    ADOQuery->SQL->Text = "SELECT * FROM Работники";
    ADOQuery->Open();
    while (!ADOQuery->Eof) {
		ListBoxWorkers->Items->Add(ADOQuery->FieldByName("ФИО")->AsString);
        ADOQuery->Next();
    }
    ADOQuery->Close();
}



__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
	LoadWorkers();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ButtonDeleteClick(TObject *Sender) {
    if (ListBoxWorkers->ItemIndex != -1) {
		try {
			ADOQuery->SQL->Text = "DELETE FROM Работники WHERE ФИО = :Name";
			ADOQuery->Parameters->ParamByName("Name")->Value = ListBoxWorkers->Items->Strings[ListBoxWorkers->ItemIndex];
			ADOQuery->ExecSQL();
            LoadWorkers();

			MessageDlg("Запись успешно удалена!", mtInformation, TMsgDlgButtons() << mbOK, 0);
        }
		catch (Exception &E) {
            MessageDlg("Ошибка при удалении записи: " + E.Message, mtError, TMsgDlgButtons() << mbOK, 0);
        }
	}
}
