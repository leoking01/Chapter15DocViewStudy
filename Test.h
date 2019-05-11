#if !defined(AFX_TEST_H__5F40CB3B_A18E_4960_B8B8_57E4C3794D02__INCLUDED_)
#define AFX_TEST_H__5F40CB3B_A18E_4960_B8B8_57E4C3794D02__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Test.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTest dialog

class CTest : public CDialog
{
// Construction
public:
	CTest(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CTest)
	enum { IDD = IDD_MODAL };
	UINT	m_ulong;
	UINT	m_ushort;
	UINT	m_uthick;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CTest)
	afx_msg void OnButtonColor();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_H__5F40CB3B_A18E_4960_B8B8_57E4C3794D02__INCLUDED_)
