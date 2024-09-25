//---------------------------------------------------------------------------

#ifndef EditClientH
#define EditClientH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TForm8 : public TForm
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
    void LoadClients();
public:		// User declarations
	__fastcall TForm8(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm8 *Form8;
//---------------------------------------------------------------------------
#endif
