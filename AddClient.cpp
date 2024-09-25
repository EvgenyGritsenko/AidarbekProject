//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AddClient.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm7::ButtonAddClick(TObject *Sender) {
	try {
		if (EditName->Text.IsEmpty()) {
            MessageDlg("����������, ��������� ��� ����.", mtWarning, TMsgDlgButtons() << mbOK, 0);
            return;
		}

		ADOQuery->SQL->Text = "INSERT INTO ������� (���) VALUES (:Name)";
		ADOQuery->Parameters->ParamByName("Name")->Value = EditName->Text;


        ADOQuery->Prepared = true;
		ADOQuery->ExecSQL();


        EditName->Clear();
        MessageDlg("������ ������� ���������!", mtInformation, TMsgDlgButtons() << mbOK, 0);
    }
	catch (Exception &E) {
        MessageDlg("������ ��� ���������� ������: " + E.Message, mtError, TMsgDlgButtons() << mbOK, 0);
    }
}