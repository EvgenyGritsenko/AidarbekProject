//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AddAutopart.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm13 *Form13;
//---------------------------------------------------------------------------
__fastcall TForm13::TForm13(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm13::ButtonAddClick(TObject *Sender) {
	try {
		if (EditName->Text.IsEmpty() || EditPrice->Text.IsEmpty()) {
            MessageDlg("����������, ��������� ��� ����.", mtWarning, TMsgDlgButtons() << mbOK, 0);
            return;
		}

		ADOQuery->SQL->Text = "INSERT INTO ������������ (��������, ����) VALUES (:Name, :Price)";
		ADOQuery->Parameters->ParamByName("Name")->Value = EditName->Text;
		ADOQuery->Parameters->ParamByName("Price")->Value = EditPrice->Text;


        ADOQuery->Prepared = true;
		ADOQuery->ExecSQL();


        EditName->Clear();
		MessageDlg("������ ������� ���������!", mtInformation, TMsgDlgButtons() << mbOK, 0);
	}
	catch (Exception &E) {
		MessageDlg("������ ��� ���������� ������: " + E.Message, mtError, TMsgDlgButtons() << mbOK, 0);
    }
}
