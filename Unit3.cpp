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
		// Подключение к базе данных
//        ADOConnection1->Connected = true;

        // Запрос для получения количества продаж
        ADOQuery1->SQL->Clear();
		ADOQuery1->SQL->Add("SELECT COUNT(*) AS SaleCount FROM Продажи"); // Замените SalesTable на реальное название таблицы продаж
        ADOQuery1->Open();
        Label1->Caption = "Количество продаж: " + ADOQuery1->FieldByName("SaleCount")->AsString;

        // Запрос для получения количества автозапчастей
        ADOQuery1->SQL->Clear();
		ADOQuery1->SQL->Add("SELECT COUNT(*) AS PartsCount FROM Автозапчасти"); // Замените PartsTable на реальное название таблицы автозапчастей
        ADOQuery1->Open();
        Label2->Caption = "Количество автозапчастей: " + ADOQuery1->FieldByName("PartsCount")->AsString;

        // Запрос для получения общего количества покупок клиентов
        ADOQuery1->SQL->Clear();
		ADOQuery1->SQL->Add("SELECT COUNT(*) AS TotalPurchases FROM Клиенты"); // Замените PurchasesTable на реальное название таблицы покупок
        ADOQuery1->Open();
		Label3->Caption = "Количество клиентов: " + ADOQuery1->FieldByName("TotalPurchases")->AsString;

        // Запрос для получения работника с наибольшим количеством продаж
        ADOQuery1->SQL->Clear();
        ADOQuery1->SQL->Add(
            "SELECT SUM([кол-во покупок]) AS [TotalSales] "
            "FROM [Клиенты]"
        ); // Убедитесь, что поля и таблицы существуют в вашей базе данных
        ADOQuery1->Open();
        Label4->Caption = "Общее количество покупок: " + ADOQuery1->FieldByName("TotalSales")->AsString;

    } catch (Exception &E) {
        ShowMessage("Ошибка при подключении к БД: " + E.Message);
	}
}
//---------------------------------------------------------------------------
