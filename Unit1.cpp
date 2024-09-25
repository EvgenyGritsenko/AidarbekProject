//---------------------------------------------------------------------------

#include <vcl.h>
#include <map>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "AddWorker.h"
#include "EditWorker.h"
#include "DeleteWorker.h"
#include "AddClient.h"
#include "EditClient.h"
#include "DeleteClient.h"

#include "AddSale.h"
#include "EditSale.h"
#include "DeleteSale.h"
#include "AddAutopart.h"
#include "EditAutopart.h"
#include "DeleteAutopart.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//------------------------------------------------------------------------
void __fastcall TForm1::Image2Click(TObject *Sender)
{
	TForm2 *form = new TForm2(this);
	form->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image3Click(TObject *Sender)
{
	TForm3 *form = new TForm3(this);
	form->Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N4Click(TObject *Sender)
{
	TForm4 *form = new TForm4(this);
	form->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N3Click(TObject *Sender)
{
	TForm5 *form = new TForm5(this);
	form->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N11Click(TObject *Sender)
{
	TForm6 *form = new TForm6(this);
	form->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N5Click(TObject *Sender)
{
	TForm7 *form = new TForm7(this);
	form->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N8Click(TObject *Sender)
{
	TForm8 *form = new TForm8(this);
	form->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N12Click(TObject *Sender)
{
	TForm9 *form = new TForm9(this);
	form->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N6Click(TObject *Sender)
{
	TForm10 *form = new TForm10(this);
	form->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N7Click(TObject *Sender)
{
	TForm13 *form = new TForm13(this);
	form->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N9Click(TObject *Sender)
{
	TForm11 *form = new TForm11(this);
	form->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N10Click(TObject *Sender)
{
	TForm14 *form = new TForm14(this);
	form->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N13Click(TObject *Sender)
{
	TForm12 *form = new TForm12(this);
	form->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N14Click(TObject *Sender)
{
	TForm15 *form = new TForm15(this);
	form->Show();
}
//---------------------------------------------------------------------------

