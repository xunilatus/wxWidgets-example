/***************************************************************
 * Name:      AppMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2024-02-02
 * Copyright:  ()
 * License:
 **************************************************************/

#include "AppMain.h"
#include <wx/msgdlg.h>
#include <wx/string.h>
#include <math.h>
//(*InternalHeaders(AppFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(AppFrame)
const long AppFrame::ID_BUTTON1 = wxNewId();
const long AppFrame::ID_BUTTON2 = wxNewId();
const long AppFrame::ID_STATICTEXT1 = wxNewId();
const long AppFrame::ID_TEXTCTRL1 = wxNewId();
const long AppFrame::ID_TEXTCTRL2 = wxNewId();
const long AppFrame::idMenuQuit = wxNewId();
const long AppFrame::idMenuAbout = wxNewId();
//*)

BEGIN_EVENT_TABLE(AppFrame,wxFrame)
    //(*EventTable(AppFrame)
    //*)
END_EVENT_TABLE()

AppFrame::AppFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(AppFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(400,146));
    Button1 = new wxButton(this, ID_BUTTON1, _("Add"), wxPoint(312,40), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button2 = new wxButton(this, ID_BUTTON2, _("Clear"), wxPoint(312,72), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Enter a word:"), wxPoint(24,8), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Text"), wxPoint(24,40), wxSize(276,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, _("Text"), wxPoint(24,72), wxSize(276,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppFrame::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppFrame::OnButton2Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&AppFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&AppFrame::OnAbout);
    //*)
}

AppFrame::~AppFrame()
{
    //(*Destroy(AppFrame)
    //*)
}

void AppFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void AppFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void AppFrame::OnButton2Click(wxCommandEvent& event)
{
    TextCtrl1->Clear();
    TextCtrl2->Clear();
}

void AppFrame::OnButton1Click(wxCommandEvent& event)
{
     wxString input = TextCtrl1->GetValue();

    int numOfChars = input.length();
	int val = 0;
    for (unsigned int i = 0; i < input.length(); i++) {
		if (input.at(i) == ' ') {
			numOfChars--;
		}
			if (input.at(i) == 'a'){
				val = val + 1;}
			if (input.at(i) == 'b'){
				val = val + 2;}
			if (input.at(i) == 'c'){
				val = val + 3;}
			if (input.at(i) == 'd'){
				val = val + 4;}
			if (input.at(i) == 'e'){
				val = val + 5;}
			if (input.at(i) == 'f'){
				val = val + 6;}
			if (input.at(i) == 'g'){
				val = val + 7;}
			if (input.at(i) == 'h'){
				val = val + 8;}
			if (input.at(i) == 'i'){
				val = val + 9;}
			if (input.at(i) == 'j'){
				val = val + 10;}
			if (input.at(i) == 'k'){
				val = val + 11;}
			if (input.at(i) == 'l'){
				val = val + 12;}
			if (input.at(i) == 'm'){
				val = val + 13;}
			if (input.at(i) == 'n'){
				val = val + 14;}
			if (input.at(i) == 'o'){
				val = val + 15;}
			if (input.at(i) == 'p'){
				val = val + 16;}
			if (input.at(i) == 'q'){
				val = val + 17;}
			if (input.at(i) == 'r'){
				val = val + 18;}
			if (input.at(i) == 's'){
				val = val + 19;}
			if (input.at(i) == 't'){
				val = val + 20;}
			if (input.at(i) == 'u'){
				val = val + 21;}
			if (input.at(i) == 'v'){
				val = val + 22;}
			if (input.at(i) == 'w'){
				val = val + 23;}
			if (input.at(i) == 'x'){
				val = val + 24;}
			if (input.at(i) == 'y'){
				val = val + 25;}
			if (input.at(i) == 'z'){
				val = val + 26;}
	}
//PAY ATTENTION ON REDEFINING VARIABLES WITH WX
    wxString strVal = wxT("");
    strVal << val;
    TextCtrl2->SetValue(strVal);
}
