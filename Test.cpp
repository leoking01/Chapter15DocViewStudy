// Test.cpp : implementation file
//

#include "stdafx.h"
#include "Chapter15.h"
#include "MainFrm.h"
#include "Test.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
#include "Chapter15Doc.h"
/////////////////////////////////////////////////////////////////////////////
// CTest dialog


CTest::CTest(CWnd* pParent /*=NULL*/)
	: CDialog(CTest::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTest)
	m_ulong = 12;
	m_ushort = 9;
	m_uthick = 1;
	//}}AFX_DATA_INIT
}


void CTest::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTest)
	DDX_Text(pDX, IDC_LONG, m_ulong);
	DDX_Text(pDX, IDC_SHORT, m_ushort);
	DDX_Text(pDX, IDC_THICK, m_uthick);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CTest, CDialog)
	//{{AFX_MSG_MAP(CTest)
	ON_BN_CLICKED(IDC_BUTTON_COLOR, OnButtonColor)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTest message handlers

void CTest::OnButtonColor() 
{
	// TODO: Add your control notification handler code here
	CColorDialog color;
	if(color.DoModal()==IDOK)
	{
		CMainFrame* pMainFrm=(CMainFrame*)AfxGetMainWnd();
		//获取选定线条的颜色
		CChapter15Doc* pDoc=(CChapter15Doc*)pMainFrm->GetActiveDocument();
		pDoc->m_color=color.GetColor();
	}
}
