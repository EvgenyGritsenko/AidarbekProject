//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TTabSheet *TabSheet4;
	TDBGrid *DBGrid1;
	TDBGrid *DBGrid2;
	TDBGrid *DBGrid3;
	TDBGrid *DBGrid4;
	TADOConnection *ADOConnection1;
	TADOQuery *ADOQuery1;
	TADOQuery *ADOQuery2;
	TADOQuery *ADOQuery3;
	TADOQuery *ADOQuery4;
	TDataSource *DataSource1;
	TDataSource *DataSource2;
	TDataSource *DataSource3;
	TDataSource *DataSource4;

private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
