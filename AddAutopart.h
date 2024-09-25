//---------------------------------------------------------------------------

#ifndef AddAutopartH
#define AddAutopartH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TForm13 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *EditName;
	TButton *ButtonAdd;
	TADOQuery *ADOQuery;
	TADOConnection *ADOConnection1;
	TLabel *Label2;
	TEdit *EditPrice;
    void __fastcall ButtonAddClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm13(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm13 *Form13;
//---------------------------------------------------------------------------
#endif
