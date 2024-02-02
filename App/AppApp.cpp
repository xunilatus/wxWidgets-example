/***************************************************************
 * Name:      AppApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2024-02-02
 * Copyright:  ()
 * License:
 **************************************************************/

#include "AppApp.h"

//(*AppHeaders
#include "AppMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(AppApp);

bool AppApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	AppFrame* Frame = new AppFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
