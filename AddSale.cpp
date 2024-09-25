//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AddSale.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm10 *Form10;
//---------------------------------------------------------------------------
__fastcall TForm10::TForm10(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm10::ButtonAddClick(TObject *Sender) {
	try {
		if (EditName->Text.IsEmpty()) {
            MessageDlg("����������, ��������� ��� ����.", mtWarning, TMsgDlgButtons() << mbOK, 0);
            return;
		}

		ADOQuery->SQL->Text = "INSERT INTO ������� (�����) VALUES (:Name)";
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