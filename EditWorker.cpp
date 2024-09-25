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
	ADOQuery->SQL->Text = "SELECT * FROM Работники";
    ADOQuery->Open();
    while (!ADOQuery->Eof) {
		ListBoxWorkers->Items->Add(ADOQuery->FieldByName("ФИО")->AsString);
        ADOQuery->Next();
    }
    ADOQuery->Close();
}

//


void __fastcall TForm5::ListBoxWorkersClick(TObject *Sender) {
    if (ListBoxWorkers->ItemIndex != -1) {
        ADOQuery->SQL->Text = "SELECT * FROM Работники WHERE ФИО = :Name";
        ADOQuery->Parameters->ParamByName("Name")->Value = ListBoxWorkers->Items->Strings[ListBoxWorkers->ItemIndex];
        ADOQuery->Open();
		EditName->Text = ADOQuery->FieldByName("ФИО")->AsString;
        EditPosition->Text = ADOQuery->FieldByName("Должность")->AsString;
        ADOQuery->Close();
    }
}

//
void __fastcall TForm5::ButtonAddClick(TObject *Sender)
{
    if (ListBoxWorkers->ItemIndex != -1) {
		try {
			ADOQuery->SQL->Text = "UPDATE Работники SET ФИО = :Name, Должность = :Position WHERE ФИО = :OldName";
            ADOQuery->Parameters->ParamByName("Name")->Value = EditName->Text;
            ADOQuery->Parameters->ParamByName("Position")->Value = EditPosition->Text;
            ADOQuery->Parameters->ParamByName("OldName")->Value = ListBoxWorkers->Items->Strings[ListBoxWorkers->ItemIndex];


			ADOQuery->ExecSQL();
            LoadWorkers();

            MessageDlg("Запись успешно обновлена!", mtInformation, TMsgDlgButtons() << mbOK, 0);
        }
		catch (Exception &E) {
            MessageDlg("Ошибка при обновлении записи: " + E.Message, mtError, TMsgDlgButtons() << mbOK, 0);
        }
	}
}
//---------------------------------------------------------------------------
