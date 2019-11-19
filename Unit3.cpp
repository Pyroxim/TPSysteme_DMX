//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
	g_dasusbdll = LoadLibrary(L"DasHard2006.dll");
    DasUsbCommand = (DASHARDCOMMAND)::GetProcAddress((HMODULE)g_dasusbdll, "DasUsbCommand");

	interface_open = DasUsbCommand(DHC_INIT, 0, NULL);
	interface_open = DasUsbCommand(DHC_OPEN, 0, 0);

	Label1->Caption = interface_open;

	if(interface_open>0)
	{
		int i;

		for(i=0 ; i<513 ; i++)
		{
            dmxBlock[i] = 0;
		}

		DasUsbCommand(DHC_DMXOUT, 512, dmxBlock);

		TrackBar1->Visible = true;
		TrackBar2->Visible = true;
		TrackBar3->Visible = true;
		TrackBar4->Visible = true;
		TrackBar5->Visible = true;
		TrackBar6->Visible = true;

	}

    Timer1->Enabled = True;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Timer1Timer(TObject *Sender)
{
	SendTrame();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::SendTrame()
{
	if(interface_open>0) {
		try {
			DasUsbCommand(DHC_DMXOUT, 512, dmxBlock);
		}catch(int x) {

		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm3::TrackBar1Change(TObject *Sender)
{
	dmxBlock[1] = TrackBar1->Position;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::TrackBar2Change(TObject *Sender)
{
	dmxBlock[2] = TrackBar2->Position;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::TrackBar3Change(TObject *Sender)
{
	dmxBlock[3] = TrackBar3->Position;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::TrackBar4Change(TObject *Sender)
{
	dmxBlock[4] = TrackBar4->Position;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::TrackBar5Change(TObject *Sender)
{
	dmxBlock[5] = TrackBar5->Position;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::TrackBar6Change(TObject *Sender)
{
	dmxBlock[6] = TrackBar6->Position;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormClose(TObject *Sender, TCloseAction &Action)
{
	if(interface_open>0)
	{
		DasUsbCommand(DHC_CLOSE, 0, 0);
		DasUsbCommand(DHC_EXIT, 0, NULL);
	}

	if(g_dasusbdll != NULL)
	{
        FreeLibrary(g_dasusbdll);
	}
}
//---------------------------------------------------------------------------

