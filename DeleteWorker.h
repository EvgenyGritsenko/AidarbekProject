//---------------------------------------------------------------------------

#ifndef DeleteWorkerH
#define DeleteWorkerH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TForm6 : public TForm
{
__published:	// IDE-managed Components
	TListBox *ListBoxWorkers;
	TADOConnection *ADOConnection1;
	TADOQuery *ADOQuery;
	TButton *ButtonDelete;
	TLabel *Label3;
	void __fastcall ButtonDeleteClick(TObject *Sender);
private:	// User declarations
    void LoadWorkers();
public:		// User declarations
	__fastcall TForm6(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm6 *Form6;
//---------------------------------------------------------------------------
#endif
