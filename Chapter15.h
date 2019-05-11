// Chapter15.h : main header file for the CHAPTER15 application
//

#if !defined(AFX_CHAPTER15_H__09FA86AD_84D1_4BBD_9AFB_2916EDE7B2A5__INCLUDED_)
#define AFX_CHAPTER15_H__09FA86AD_84D1_4BBD_9AFB_2916EDE7B2A5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CChapter15App:
// See Chapter15.cpp for the implementation of this class
//

class CChapter15App : public CWinApp
{
public:
	CChapter15App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CChapter15App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CChapter15App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHAPTER15_H__09FA86AD_84D1_4BBD_9AFB_2916EDE7B2A5__INCLUDED_)
