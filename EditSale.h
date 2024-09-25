//---------------------------------------------------------------------------

#ifndef EditSaleH
#define EditSaleH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TForm11 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label3;
	TListBox *ListBoxWorkers;
	TLabel *Label1;
	TEdit *EditName;
	TButton *ButtonAdd;
	TADOQuery *ADOQuery;
	TADOConnection *ADOConnection1;
    void __fastcall ListBoxWorkersClick(TObject *Sender);
	void __fastcall ButtonAddClick(TObject *Sender);
private:	// User declarations
	void LoadSales();
public:		// User declarations
	__fastcall TForm11(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm11 *Form11;
//---------------------------------------------------------------------------
#endif
