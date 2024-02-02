/***************************************************************
 * Name:      AppMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2024-02-02
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef APPMAIN_H
#define APPMAIN_H

//(*Headers(AppFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class AppFrame: public wxFrame
{
    public:

        AppFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~AppFrame();

    private:

        //(*Handlers(AppFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(AppFrame)
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_STATICTEXT1;
        static const long ID_TEXTCTRL1;
        static const long ID_TEXTCTRL2;
        static const long idMenuQuit;
        static const long idMenuAbout;
        //*)

        //(*Declarations(AppFrame)
        wxButton* Button1;
        wxButton* Button2;
        wxStaticText* StaticText1;
        wxTextCtrl* TextCtrl1;
        wxTextCtrl* TextCtrl2;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // APPMAIN_H
