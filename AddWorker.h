//---------------------------------------------------------------------------

#ifndef AddWorkerH
#define AddWorkerH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TEdit *EditName;
	TEdit *EditPosition;
	TLabel *Label1;
	TLabel *Label2;
	TButton *ButtonAdd;
	TADOConnection *ADOConnection1;
	TADOQuery *ADOQuery;
    void __fastcall ButtonAddClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
