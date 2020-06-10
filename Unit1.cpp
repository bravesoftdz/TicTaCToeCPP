//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "mmsystem.h"

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

char po1,po2, po3 , po4 ,po5,po6,po7,po8,po9;
char who;
void sound ()
{
if (who=='x')
   sndPlaySound("snd/xsnd.wav", SND_ASYNC) ;
   else
      sndPlaySound("snd/osnd.wav", SND_ASYNC) ;
}
void win ()
{
 if( (po1==po2 && po2==po3 && po1!='n') ||
    (po4==po5 && po5==po6 && po4!='n') ||
    (po7==po8 && po8==po9 && po7!='n') ||
    (po1==po4 && po4==po7 && po1!='n') ||
    (po2==po5 && po5==po8 && po2!='n') ||
    (po3==po6 && po6==po9 && po3!='n') ||
    (po1==po5 && po5==po9 && po1!='n') ||
    (po3==po5 && po5==po7 && po3!='n'))
    {
    char * w;
    if (who=='o') w="X won!";
    else w="O won!";
    sndPlaySound("snd/winsnd.wav", SND_ASYNC) ;
    Application ->  MessageBox (w,"Game over", MB_OK);

Form1->p1->Enabled=false;
    Form1->p2->Enabled=false;
    Form1->p3->Enabled=false;
    Form1->p4->Enabled=false;
    Form1->p5->Enabled=false;
    Form1->p6->Enabled=false;
    Form1->p7->Enabled=false;
    Form1->p8->Enabled=false;
    Form1->p9->Enabled=false;

    }
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
   p1->Picture->LoadFromFile("img/nic.bmp");
   p2->Picture->LoadFromFile("img/nic.bmp");
   p3->Picture->LoadFromFile("img/nic.bmp");
   p4->Picture->LoadFromFile("img/nic.bmp");
   p5->Picture->LoadFromFile("img/nic.bmp");
   p6->Picture->LoadFromFile("img/nic.bmp");
   p7->Picture->LoadFromFile("img/nic.bmp");
   p8->Picture->LoadFromFile("img/nic.bmp");
   p9->Picture->LoadFromFile("img/nic.bmp");
   turn->Picture=x->Picture;

   po1='n';po2='n'; po3 ='n'; po4 ='n';po5='n';po6='n';po7='n';po8='n';po9='n';
   who = 'o';
   p1->Enabled=true;
   p2->Enabled=true;
   p3->Enabled=true;
   p4->Enabled=true;
   p5->Enabled=true;
   p6->Enabled=true;
   p7->Enabled=true;
   p8->Enabled=true;
   p9->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::p1Click(TObject *Sender)
{
    if (po1=='n')
    {
        if (who=='o')
        {
                sound ();
                p1->Picture->LoadFromFile("img/o.bmp")   ;
                po1 = 'o';
                who= 'x';
                turn->Picture->LoadFromFile("img/xsmall.bmp");

        }
        else
        {
                sound ();
                p1->Picture->LoadFromFile("img/x.bmp")   ;
                po1 = 'x';
                who= 'o';
                turn->Picture->LoadFromFile("img/osmall.bmp");
        }
        p1-> Enabled=false;
        win ();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p2Click(TObject *Sender)
{
    if (po2=='n')
    {
        if (who=='o')
        {
                sound ();
                p2->Picture->LoadFromFile("img/o.bmp")   ;
                po2 = 'o';
                who= 'x';
                turn->Picture->LoadFromFile("img/xsmall.bmp");

        }
        else
        {
                sound ();
                p2->Picture->LoadFromFile("img/x.bmp")   ;
                po2 = 'x';
                who= 'o';
                turn->Picture->LoadFromFile("img/osmall.bmp");
        }
        p2-> Enabled=false;
        win ();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p3Click(TObject *Sender)
{
    if (po3=='n')
    {
        if (who=='o')
        {
                sound ();

                p3->Picture->LoadFromFile("img/o.bmp")   ;
                po3 = 'o';
                who= 'x';
                turn->Picture->LoadFromFile("img/xsmall.bmp");

        }
        else
        {
                sound ();
p3->Picture->LoadFromFile("img/x.bmp")   ;
                po3 = 'x';
                who= 'o';
                turn->Picture->LoadFromFile("img/osmall.bmp");
        }
        p3-> Enabled=false;
        win ();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p4Click(TObject *Sender)
{
    if (po4=='n')
    {
        if (who=='o')
        {
                sound ();
p4->Picture->LoadFromFile("img/o.bmp")   ;
                po4 = 'o';
                who= 'x';
                turn->Picture->LoadFromFile("img/xsmall.bmp");

        }
        else
        {
                sound ();
p4->Picture->LoadFromFile("img/x.bmp")   ;
                po4 = 'x';
                who= 'o';
                turn->Picture->LoadFromFile("img/osmall.bmp");
        }
        p4-> Enabled=false;
        win ();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p5Click(TObject *Sender)
{
    if (po5=='n')
    {
        if (who=='o')
        {
                sound ();
p5->Picture->LoadFromFile("img/o.bmp")   ;
                po5 = 'o';
                who= 'x';
                turn->Picture->LoadFromFile("img/xsmall.bmp");

        }
        else
        {
                sound ();
p5->Picture->LoadFromFile("img/x.bmp")   ;
                po5 = 'x';
                who= 'o';
                turn->Picture->LoadFromFile("img/osmall.bmp");
        }
        p5-> Enabled=false;
        win ();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p6Click(TObject *Sender)
{
    if (po6=='n')
    {
        if (who=='o')
        {
                sound ();
p6->Picture->LoadFromFile("img/o.bmp")   ;
                po6 = 'o';
                who= 'x';
                turn->Picture->LoadFromFile("img/xsmall.bmp");

        }
        else
        {
                sound ();
p6->Picture->LoadFromFile("img/x.bmp")   ;
                po6 = 'x';
                who= 'o';
                turn->Picture->LoadFromFile("img/osmall.bmp");
        }
        p6-> Enabled=false;
        win ();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p7Click(TObject *Sender)
{
    if (po7=='n')
    {
        if (who=='o')
        {
                sound ();
p7->Picture->LoadFromFile("img/o.bmp")   ;
                po7 = 'o';
                who= 'x';
                turn->Picture->LoadFromFile("img/xsmall.bmp");

        }
        else
        {
                sound ();
p7->Picture->LoadFromFile("img/x.bmp")   ;
                po7 = 'x';
                who= 'o';
                turn->Picture->LoadFromFile("img/osmall.bmp");
        }
        p7-> Enabled=false;
        win ();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p8Click(TObject *Sender)
{
       if (po8=='n')
    {
        if (who=='o')
        {
                sound ();
p8->Picture->LoadFromFile("img/o.bmp")   ;
                po8 = 'o';
                who= 'x';
                turn->Picture->LoadFromFile("img/xsmall.bmp");

        }
        else
        {
               sound ();
 p8->Picture->LoadFromFile("img/x.bmp")   ;
                po8 = 'x';
                who= 'o';
                turn->Picture->LoadFromFile("img/osmall.bmp");
        }
        p8-> Enabled=false;
        win ();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p9Click(TObject *Sender)
{
    if (po9=='n')
    {
        if (who=='o')
        {
                sound ();
p9->Picture->LoadFromFile("img/o.bmp")   ;
                po9 = 'o';
                who= 'x';
                turn->Picture->LoadFromFile("img/xsmall.bmp");

        }
        else
        {
                sound ();
p9->Picture->LoadFromFile("img/x.bmp")   ;
                po9 = 'x';
                who= 'o';
                turn->Picture->LoadFromFile("img/osmall.bmp");
        }
        p9-> Enabled=false;
        win ();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
    if (Application ->MessageBox("Close?", "Confirmation", MB_YESNOCANCEL |
    MB_ICONQUESTION) == IDNO)
    Action=caNone;
}
//---------------------------------------------------------------------------


