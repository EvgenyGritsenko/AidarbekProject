//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//--------------------------------------------------------------------------
void __fastcall TForm1::Image2MouseLeave(TObject *Sender)
{
    // Ваш код
}

void __fastcall TForm1::Image2MouseEnter(TObject *Sender)
{
    // Ваш код
}
void __fastcall TForm1::Image2Click(TObject *Sender)
{
    TForm2 *form = new TForm2(this);
	form->Show();
}
//---------------------------------------------------------------------------

