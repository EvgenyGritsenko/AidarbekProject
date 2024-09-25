//---------------------------------------------------------------------------

#ifndef AddSaleH
#define AddSaleH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TForm10 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *EditName;
	TButton *ButtonAdd;
	TADOQuery *ADOQuery;
	TADOConnection *ADOConnection1;
    void __fastcall ButtonAddClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm10(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm10 *Form10;
//---------------------------------------------------------------------------
#endif
