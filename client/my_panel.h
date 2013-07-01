/////////////////////////////////////////////////////////////////////////////
// Name:        text.cpp
// Purpose:     TextCtrl wxWidgets sample
// Author:      Robert Roebling
// Modified by:
// RCS-ID:      $Id: text.cpp 41744 2006-10-08 20:38:14Z VZ $
// Copyright:   (c) Robert Roebling, Julian Smart, Vadim Zeitlin
// Licence:     wxWindows license
/////////////////////////////////////////////////////////////////////////////

#ifndef WXBOOST_MY_PANEL
#define WXBOOST_MY_PANEL

#include <wx/wx.h>

#include "my_text_ctrl.h"
#include <wx/panel.h>

//----------------------------------------------------------------------
// class definitions
//----------------------------------------------------------------------

class MyPanel: public wxPanel
{
public:
    MyPanel(wxFrame *frame, int x, int y, int w, int h);
    virtual ~MyPanel()
    {
#if wxUSE_LOG
        delete wxLog::SetActiveTarget(m_logOld);
#endif // wxUSE_LOG
    }

    MyTextCtrl    *m_enter;
    static MyTextCtrl    *m_textrich;

#if wxUSE_LOG
    wxTextCtrl    *m_log;
    wxLog         *m_logOld;
#endif // wxUSE_LOG

};

#endif//WXBOOST_MY_PANEL
