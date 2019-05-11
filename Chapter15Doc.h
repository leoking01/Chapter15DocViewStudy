// Chapter15Doc.h : interface of the CChapter15Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CHAPTER15DOC_H__A0E18CE3_9A2F_4839_A04A_D5A86F03FB3D__INCLUDED_)
#define AFX_CHAPTER15DOC_H__A0E18CE3_9A2F_4839_A04A_D5A86F03FB3D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <afxtempl.h>
class CChapter15Doc : public CDocument
{
protected: // create from serialization only
	CChapter15Doc();
	DECLARE_DYNCREATE(CChapter15Doc)

// Attributes
public:
	UINT m_long;//长轴
	UINT m_short;//短轴
	UINT m_thick;//粗细
	COLORREF m_color;//线条颜色
	CList<CPoint,CPoint> m_PointList;//点链表

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CChapter15Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	virtual void DeleteContents();
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CChapter15Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CChapter15Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHAPTER15DOC_H__A0E18CE3_9A2F_4839_A04A_D5A86F03FB3D__INCLUDED_)
