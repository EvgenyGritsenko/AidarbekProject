//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Unit1.cpp", Form1);
USEFORM("Unit2.cpp", Form2);
USEFORM("Unit3.cpp", Form3);
USEFORM("EditWorker.cpp", Form5);
USEFORM("AddClient.cpp", Form7);
USEFORM("AddWorker.cpp", Form4);
USEFORM("DeleteClient.cpp", Form9);
USEFORM("DeleteWorker.cpp", Form6);
USEFORM("EditClient.cpp", Form8);
USEFORM("AddSale.cpp", Form10);
USEFORM("EditSale.cpp", Form11);
USEFORM("DeleteSale.cpp", Form12);
USEFORM("AddAutopart.cpp", Form13);
USEFORM("EditAutopart.cpp", Form14);
USEFORM("DeleteAutopart.cpp", Form15);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TForm2), &Form2);
		Application->CreateForm(__classid(TForm3), &Form3);
		Application->CreateForm(__classid(TForm4), &Form4);
		Application->CreateForm(__classid(TForm5), &Form5);
		Application->CreateForm(__classid(TForm6), &Form6);
		Application->CreateForm(__classid(TForm7), &Form7);
		Application->CreateForm(__classid(TForm8), &Form8);
		Application->CreateForm(__classid(TForm9), &Form9);
		Application->CreateForm(__classid(TForm10), &Form10);
		Application->CreateForm(__classid(TForm11), &Form11);
		Application->CreateForm(__classid(TForm12), &Form12);
		Application->CreateForm(__classid(TForm13), &Form13);
		Application->CreateForm(__classid(TForm14), &Form14);
		Application->CreateForm(__classid(TForm15), &Form15);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
