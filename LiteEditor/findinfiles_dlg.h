//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: findinfiles_dlg.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CODELITE_FORMBUILDER_FINDINFILES_DLG_BASE_CLASSES_H
#define CODELITE_FORMBUILDER_FINDINFILES_DLG_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/combobox.h>
#include <wx/arrstr.h>
#include <wx/listbox.h>
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/checkbox.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

class FindInFilesDialogBase : public wxDialog
{
protected:
    wxPanel* m_panelMainPanel;
    wxStaticText* m_staticText1;
    wxComboBox* m_findString;
    wxStaticText* m_staticText102;
    wxComboBox* m_replaceString;
    wxStaticText* m_staticText2;
    wxListBox* m_listPaths;
    wxButton* m_btnAddPath;
    wxButton* m_btnClearSelectedPath;
    wxStaticText* m_staticText3;
    wxComboBox* m_fileTypes;
    wxStaticText* m_staticText5;
    wxChoice* m_choiceEncoding;
    wxStaticText* m_staticText97;
    wxCheckBox* m_matchCase;
    wxCheckBox* m_matchWholeWord;
    wxCheckBox* m_checkBoxPipeForGrep;
    wxCheckBox* m_regualrExpression;
    wxCheckBox* m_checkBoxSaveFilesBeforeSearching;
    wxButton* m_find;
    wxButton* m_replaceAll;
    wxButton* m_stop;
    wxButton* m_cancel;

protected:
    virtual void OnAddPath(wxCommandEvent& event) { event.Skip(); }
    virtual void OnClearSelectedPath(wxCommandEvent& event) { event.Skip(); }
    virtual void OnClearSelectedPathUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnFind(wxCommandEvent& event) { event.Skip(); }
    virtual void OnFindWhatUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnReplace(wxCommandEvent& event) { event.Skip(); }
    virtual void OnReplaceUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnStop(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonClose(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText1() { return m_staticText1; }
    wxComboBox* GetFindString() { return m_findString; }
    wxStaticText* GetStaticText102() { return m_staticText102; }
    wxComboBox* GetReplaceString() { return m_replaceString; }
    wxStaticText* GetStaticText2() { return m_staticText2; }
    wxListBox* GetListPaths() { return m_listPaths; }
    wxButton* GetBtnAddPath() { return m_btnAddPath; }
    wxButton* GetBtnClearSelectedPath() { return m_btnClearSelectedPath; }
    wxStaticText* GetStaticText3() { return m_staticText3; }
    wxComboBox* GetFileTypes() { return m_fileTypes; }
    wxStaticText* GetStaticText5() { return m_staticText5; }
    wxChoice* GetChoiceEncoding() { return m_choiceEncoding; }
    wxStaticText* GetStaticText97() { return m_staticText97; }
    wxCheckBox* GetMatchCase() { return m_matchCase; }
    wxCheckBox* GetMatchWholeWord() { return m_matchWholeWord; }
    wxCheckBox* GetCheckBoxPipeForGrep() { return m_checkBoxPipeForGrep; }
    wxCheckBox* GetRegualrExpression() { return m_regualrExpression; }
    wxCheckBox* GetCheckBoxSaveFilesBeforeSearching() { return m_checkBoxSaveFilesBeforeSearching; }
    wxButton* GetFind() { return m_find; }
    wxButton* GetReplaceAll() { return m_replaceAll; }
    wxButton* GetStop() { return m_stop; }
    wxButton* GetCancel() { return m_cancel; }
    wxPanel* GetPanelMainPanel() { return m_panelMainPanel; }
    FindInFilesDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Find In Files"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~FindInFilesDialogBase();
};

#endif
