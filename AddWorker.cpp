//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AddWorker.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::ButtonAddClick(TObject *Sender) {
	try {
        if (EditName->Text.IsEmpty() || EditPosition->Text.IsEmpty()) {
            MessageDlg("Пожалуйста, заполните все поля.", mtWarning, TMsgDlgButtons() << mbOK, 0);
            return;
        }

		ADOQuery->SQL->Text = "INSERT INTO Работники (ФИО, Должность) VALUES (:Name, :Position)";
		ADOQuery->Parameters->ParamByName("Name")->Value = EditName->Text;
		ADOQuery->Parameters->ParamByName("Position")->Value = EditPosition->Text;


        ADOQuery->Prepared = true;
		ADOQuery->ExecSQL();


        EditName->Clear();
        EditPosition->Clear();
        MessageDlg("Запись успешно добавлена!", mtInformation, TMsgDlgButtons() << mbOK, 0);
    }
	catch (Exception &E) {
        MessageDlg("Ошибка при добавлении записи: " + E.Message, mtError, TMsgDlgButtons() << mbOK, 0);
    }
}