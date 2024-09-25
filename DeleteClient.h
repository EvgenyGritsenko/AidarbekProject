//---------------------------------------------------------------------------

#ifndef DeleteClientH
#define DeleteClientH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TForm9 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label3;
	TListBox *ListBoxWorkers;
	TButton *ButtonDelete;
	TADOQuery *ADOQuery;
	TADOConnection *ADOConnection1;
    void __fastcall ButtonDeleteClick(TObject *Sender);
private:	// User declarations
    void LoadClients();
public:		// User declarations
	__fastcall TForm9(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm9 *Form9;
//---------------------------------------------------------------------------
#endif
