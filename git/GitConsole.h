#ifndef GITCONSOLE_H
#define GITCONSOLE_H
#include "gitui.h"

class GitPlugin;
class GitConsole : public GitConsoleBase
{
    GitPlugin* m_git;

public:
    GitConsole(wxWindow* parent, GitPlugin* git);
    virtual ~GitConsole();
    void AddText(const wxString &text);
    void AddRawText(const wxString &text);
    void EnsureVisible();
    
protected:
    virtual void OnStopGitProcessUI(wxUpdateUIEvent& event);
    virtual void OnClearGitLogUI(wxUpdateUIEvent& event);
    virtual void OnClearGitLog(wxCommandEvent& event);
    virtual void OnStopGitProcess(wxCommandEvent& event);
    
};
#endif // GITCONSOLE_H