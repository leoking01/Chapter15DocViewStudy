// Chapter15View.cpp : implementation of the CChapter15View class
//

#include "stdafx.h"
#include "Chapter15.h"

#include "Chapter15Doc.h"
#include "Chapter15View.h"
#include "Test.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CChapter15View

IMPLEMENT_DYNCREATE(CChapter15View, CView)

BEGIN_MESSAGE_MAP(CChapter15View, CView)
	//{{AFX_MSG_MAP(CChapter15View)
	ON_COMMAND(ID_CONFIG, OnConfig)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CChapter15View construction/destruction

CChapter15View::CChapter15View()
{
	// TODO: add construction code here

}

CChapter15View::~CChapter15View()
{
}

BOOL CChapter15View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CChapter15View drawing

void CChapter15View::OnDraw(CDC* pDC)
{
	CChapter15Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	//创建画笔C++对象
	CPen* pPenBlue = new CPen;	
	//创建画笔
	pPenBlue->CreatePen(PS_SOLID,pDoc->m_thick,pDoc->m_color);
	//选中当前画笔，并保存以前的画笔
	CPen* pOldPen = pDC->SelectObject(pPenBlue);
	POSITION  posi=pDoc->m_PointList.GetHeadPosition();	
	while(posi)
	{
		CPoint point(pDoc->m_PointList.GetNext(posi));
		pDC->Ellipse(point.x,point.y,point.x+\
				pDoc->m_long,point.y+pDoc->m_short);
	}
	//恢复旧画笔
	pDC->SelectObject(pOldPen);			
	//删除新建的画笔对象
	delete pPenBlue;
}

/////////////////////////////////////////////////////////////////////////////
// CChapter15View printing

BOOL CChapter15View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CChapter15View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CChapter15View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CChapter15View diagnostics

#ifdef _DEBUG
void CChapter15View::AssertValid() const
{
	CView::AssertValid();
}

void CChapter15View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CChapter15Doc* CChapter15View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CChapter15Doc)));
	return (CChapter15Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CChapter15View message handlers

void CChapter15View::OnConfig() 
{
	// TODO: Add your command handler code here
	CChapter15Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	CTest dlg;
	if(dlg.DoModal()==IDCANCEL)
		return;
	pDoc->DeleteContents();
	pDoc->m_long=dlg.m_ulong;
	pDoc->m_short=dlg.m_ushort;
	pDoc->m_thick=dlg.m_uthick;
}

void CChapter15View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	CChapter15Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: Add your message handler code here and/or call default
	CDC* pDc=GetDC();
	//创建画笔C++对象
	CPen* pPenBlue = new CPen;	
	//创建画笔
	pPenBlue->CreatePen(PS_SOLID,pDoc->m_thick,pDoc->m_color);
	//选中当前画笔，并保存以前的画笔
	CPen* pOldPen = pDc->SelectObject(pPenBlue);
	//画圆
	pDc->Ellipse(point.x,point.y,point.x+\
		pDoc->m_long,point.y+pDoc->m_short);
	//恢复旧画笔
	pDc->SelectObject(pOldPen);			
	//删除新建的画笔对象
	delete pPenBlue;
	ReleaseDC(pDc);
	pDoc->m_PointList.AddTail(point);
	CView::OnLButtonDown(nFlags, point);
}
