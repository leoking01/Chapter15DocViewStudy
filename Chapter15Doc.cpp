// Chapter15Doc.cpp : implementation of the CChapter15Doc class
//

#include "stdafx.h"
#include "Chapter15.h"

#include "Chapter15Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CChapter15Doc

IMPLEMENT_DYNCREATE(CChapter15Doc, CDocument)

BEGIN_MESSAGE_MAP(CChapter15Doc, CDocument)
	//{{AFX_MSG_MAP(CChapter15Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CChapter15Doc construction/destruction

CChapter15Doc::CChapter15Doc()
{
	// TODO: add one-time construction code here
}

CChapter15Doc::~CChapter15Doc()
{
}

BOOL CChapter15Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)
	m_long = 20;
	m_short = 20;
	m_thick = 2;
	m_color=RGB(0,150,0);
	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CChapter15Doc serialization

void CChapter15Doc::Serialize(CArchive& ar)
{

	if (ar.IsStoring())
	{
		// TODO: add storing code here
		ar<<m_long<<m_short<<m_thick<<m_color;
	}
	else
	{
		// TODO: add loading code here
		ar>>m_long>>m_short>>m_thick>>m_color;
	}
	m_PointList.Serialize(ar);
}

/////////////////////////////////////////////////////////////////////////////
// CChapter15Doc diagnostics

#ifdef _DEBUG
void CChapter15Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CChapter15Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CChapter15Doc commands

void CChapter15Doc::DeleteContents() 
{
	// TODO: Add your specialized code here and/or call the base class
	m_PointList.RemoveAll();
	CDocument::DeleteContents();
}
