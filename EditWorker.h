//---------------------------------------------------------------------------

#ifndef EditWorkerH
#define EditWorkerH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
//    void __fastcall ButtonAddClick(TObject *Sender);
	TLabel *Label1;
	TEdit *EditName;
	TLabel *Label2;
	TEdit *EditPosition;
	TButton *ButtonAdd;
	TADOQuery *ADOQuery;
	TADOConnection *ADOConnection1;
	TLabel *Label3;
	TListBox *ListBoxWorkers;
    void __fastcall ListBoxWorkersClick(TObject *Sender);
	void __fastcall ButtonAddClick(TObject *Sender);
private:	// User declarations
    void LoadWorkers();
public:		// User declarations
	__fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
