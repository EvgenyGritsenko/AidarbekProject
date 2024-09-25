//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
    try {
		// ����������� � ���� ������
//        ADOConnection1->Connected = true;

        // ������ ��� ��������� ���������� ������
        ADOQuery1->SQL->Clear();
		ADOQuery1->SQL->Add("SELECT COUNT(*) AS SaleCount FROM �������"); // �������� SalesTable �� �������� �������� ������� ������
        ADOQuery1->Open();
        Label1->Caption = "���������� ������: " + ADOQuery1->FieldByName("SaleCount")->AsString;

        // ������ ��� ��������� ���������� �������������
        ADOQuery1->SQL->Clear();
		ADOQuery1->SQL->Add("SELECT COUNT(*) AS PartsCount FROM ������������"); // �������� PartsTable �� �������� �������� ������� �������������
        ADOQuery1->Open();
        Label2->Caption = "���������� �������������: " + ADOQuery1->FieldByName("PartsCount")->AsString;

        // ������ ��� ��������� ������ ���������� ������� ��������
        ADOQuery1->SQL->Clear();
		ADOQuery1->SQL->Add("SELECT COUNT(*) AS TotalPurchases FROM �������"); // �������� PurchasesTable �� �������� �������� ������� �������
        ADOQuery1->Open();
		Label3->Caption = "���������� ��������: " + ADOQuery1->FieldByName("TotalPurchases")->AsString;

        // ������ ��� ��������� ��������� � ���������� ����������� ������
        ADOQuery1->SQL->Clear();
        ADOQuery1->SQL->Add(
            "SELECT SUM([���-�� �������]) AS [TotalSales] "
            "FROM [�������]"
        ); // ���������, ��� ���� � ������� ���������� � ����� ���� ������
        ADOQuery1->Open();
        Label4->Caption = "����� ���������� �������: " + ADOQuery1->FieldByName("TotalSales")->AsString;

    } catch (Exception &E) {
        ShowMessage("������ ��� ����������� � ��: " + E.Message);
	}
}
//---------------------------------------------------------------------------
