//******************************************************************************
//
// This file is part of the OpenHoldem project
//   Download page:         http://code.google.com/p/openholdembot/
//   Forums:                http://www.maxinmontreal.com/forums/index.php
//   Licensed under GPL v3: http://www.gnu.org/licenses/gpl.html
//
//******************************************************************************
//
// Purpose:
//
//******************************************************************************

// CDlgSAPrefs19.cpp : implementation file
//

#include "stdafx.h"
#include "DialogSAPrefs19.h"

#include "SAPrefsSubDlg.h"
#include "CPreferences.h"


// CDlgSAPrefs19 dialog

IMPLEMENT_DYNAMIC(CDlgSAPrefs19, CDialog)

CDlgSAPrefs19::CDlgSAPrefs19(CWnd* pParent /*=NULL*/)
	: CSAPrefsSubDlg(CDlgSAPrefs19::IDD, pParent)
{

}

CDlgSAPrefs19::~CDlgSAPrefs19()
{
}

void CDlgSAPrefs19::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_HANDHISTORY_GENERATOR_ENABLE, _handhistory_generator_enable_Button);
}


BEGIN_MESSAGE_MAP(CDlgSAPrefs19, CDialog)
END_MESSAGE_MAP()


// CDlgSAPrefs19 message handlers
BOOL CDlgSAPrefs19::OnInitDialog()
{
	CSAPrefsSubDlg::OnInitDialog();

	_handhistory_generator_enable_Button.SetCheck(preferences.handhistory_generator_enable());

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}

void CDlgSAPrefs19::OnOK()
{
	preferences.SetValue(k_prefs_handhistory_generator_enable, _handhistory_generator_enable_Button.GetCheck() == true);

	CSAPrefsSubDlg::OnOK();
}