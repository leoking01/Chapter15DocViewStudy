// Chapter15View.h : interface of the CChapter15View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CHAPTER15VIEW_H__D19D0F64_65B7_4B3B_8D06_7DBED0C46BE3__INCLUDED_)
#define AFX_CHAPTER15VIEW_H__D19D0F64_65B7_4B3B_8D06_7DBED0C46BE3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CChapter15View : public CView
{
protected: // create from serialization only
	CChapter15View();
	DECLARE_DYNCREATE(CChapter15View)

// Attributes
public:
	CChapter15Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CChapter15View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CChapter15View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CChapter15View)
	afx_msg void OnConfig();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Chapter15View.cpp
inline CChapter15Doc* CChapter15View::GetDocument()
   { return (CChapter15Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHAPTER15VIEW_H__D19D0F64_65B7_4B3B_8D06_7DBED0C46BE3__INCLUDED_)
