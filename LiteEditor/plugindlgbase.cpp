//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: plugindlgbase.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "plugindlgbase.h"


// Declare the bitmap loading function
extern void wxCEF4InitBitmapResources();

static bool bBitmapLoaded = false;


PluginMgrDlgBase::PluginMgrDlgBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCEF4InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* bSizer1 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(bSizer1);
    
    wxBoxSizer* boxSizer16 = new wxBoxSizer(wxHORIZONTAL);
    
    bSizer1->Add(boxSizer16, 1, wxEXPAND, 5);
    
    m_splitter2 = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxSize(500,300), wxSP_LIVE_UPDATE|wxSP_3DSASH);
    m_splitter2->SetSashGravity(0.5);
    m_splitter2->SetMinimumPaneSize(10);
    
    boxSizer16->Add(m_splitter2, 1, wxALL|wxEXPAND, 5);
    
    m_splitterPage6 = new wxPanel(m_splitter2, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    
    wxBoxSizer* boxSizer12 = new wxBoxSizer(wxVERTICAL);
    m_splitterPage6->SetSizer(boxSizer12);
    
    m_staticText1 = new wxStaticText(m_splitterPage6, wxID_ANY, _("Available Plugins:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    boxSizer12->Add(m_staticText1, 0, wxLEFT|wxRIGHT|wxTOP, 5);
    
    wxArrayString m_checkListPluginsListArr;
    m_checkListPluginsList = new wxCheckListBox(m_splitterPage6, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), m_checkListPluginsListArr, wxLB_SINGLE);
    
    boxSizer12->Add(m_checkListPluginsList, 1, wxALL|wxEXPAND, 5);
    
    m_splitterPage10 = new wxPanel(m_splitter2, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_splitter2->SplitVertically(m_splitterPage6, m_splitterPage10, 0);
    
    wxBoxSizer* boxSizer14 = new wxBoxSizer(wxVERTICAL);
    m_splitterPage10->SetSizer(boxSizer14);
    
    m_staticText2 = new wxStaticText(m_splitterPage10, wxID_ANY, _("Description:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    boxSizer14->Add(m_staticText2, 0, wxLEFT|wxRIGHT|wxTOP, 5);
    
    m_htmlWinDesc = new wxHtmlWindow(m_splitterPage10, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxHW_SCROLLBAR_AUTO|wxBORDER_THEME);
    m_htmlWinDesc->SetPage(wxT("<b>wxHtmlWindow control!</b>"));
    
    boxSizer14->Add(m_htmlWinDesc, 1, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* boxSizer18 = new wxBoxSizer(wxVERTICAL);
    
    boxSizer16->Add(boxSizer18, 0, wxEXPAND, 5);
    
    m_button20 = new wxButton(this, wxID_ANY, _("Check &All"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer18->Add(m_button20, 0, wxALL|wxEXPAND, 5);
    
    m_button22 = new wxButton(this, wxID_ANY, _("Uncheck All"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer18->Add(m_button22, 0, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* bSizer2 = new wxBoxSizer(wxHORIZONTAL);
    
    bSizer1->Add(bSizer2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_buttonOk = new wxButton(this, wxID_OK, _("&OK"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_buttonOk->SetDefault();
    
    bSizer2->Add(m_buttonOk, 0, wxALL, 5);
    
    m_buttonCancel = new wxButton(this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer2->Add(m_buttonCancel, 0, wxALL, 5);
    
    SetName(wxT("PluginMgrDlgBase"));
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    CentreOnParent(wxBOTH);
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_checkListPluginsList->Connect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(PluginMgrDlgBase::OnItemSelected), NULL, this);
    m_button20->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PluginMgrDlgBase::OnCheckAll), NULL, this);
    m_button20->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(PluginMgrDlgBase::OnCheckAllUI), NULL, this);
    m_button22->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PluginMgrDlgBase::OnUncheckAll), NULL, this);
    m_button22->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(PluginMgrDlgBase::OnUncheckAllUI), NULL, this);
    m_buttonOk->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PluginMgrDlgBase::OnButtonOK), NULL, this);
    
}

PluginMgrDlgBase::~PluginMgrDlgBase()
{
    m_checkListPluginsList->Disconnect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(PluginMgrDlgBase::OnItemSelected), NULL, this);
    m_button20->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PluginMgrDlgBase::OnCheckAll), NULL, this);
    m_button20->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(PluginMgrDlgBase::OnCheckAllUI), NULL, this);
    m_button22->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PluginMgrDlgBase::OnUncheckAll), NULL, this);
    m_button22->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(PluginMgrDlgBase::OnUncheckAllUI), NULL, this);
    m_buttonOk->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PluginMgrDlgBase::OnButtonOK), NULL, this);
    
}
