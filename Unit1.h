//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *p1;
        TImage *p4;
        TImage *p5;
        TImage *p2;
        TImage *p6;
        TImage *p7;
        TImage *p9;
        TImage *p8;
        TImage *p3;
        TLabel *Label1;
        TImage *turn;
        TButton *Restart;
        TImage *Image1;
        TImage *Image2;
        TImage *o;
        TImage *x;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall p1Click(TObject *Sender);
        void __fastcall p2Click(TObject *Sender);
        void __fastcall p3Click(TObject *Sender);
        void __fastcall p4Click(TObject *Sender);
        void __fastcall p5Click(TObject *Sender);
        void __fastcall p6Click(TObject *Sender);
        void __fastcall p7Click(TObject *Sender);
        void __fastcall p8Click(TObject *Sender);
        void __fastcall p9Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);

private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
