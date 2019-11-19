//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "_DasHard.h"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// Composants gérés par l'EDI
	TButton *Button1;
	TLabel *Label1;
	TTimer *Timer1;
	TTrackBar *TrackBar1;
	TTrackBar *TrackBar2;
	TTrackBar *TrackBar3;
	TTrackBar *TrackBar4;
	TTrackBar *TrackBar5;
	TTrackBar *TrackBar6;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall TrackBar1Change(TObject *Sender);
	void __fastcall TrackBar2Change(TObject *Sender);
	void __fastcall TrackBar3Change(TObject *Sender);
	void __fastcall TrackBar4Change(TObject *Sender);
	void __fastcall TrackBar5Change(TObject *Sender);
	void __fastcall TrackBar6Change(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall TForm3(TComponent* Owner);
	void __fastcall SendTrame();

	HINSTANCE g_dasusbdll;
	typedef int (*DASHARDCOMMAND)(int, int, unsigned char*);
	DASHARDCOMMAND DasUsbCommand;
	int interface_open;
	unsigned char dmxBlock[512];
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
