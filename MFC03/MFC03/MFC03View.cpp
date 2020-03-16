
// MFC03View.cpp : CMFC03View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC03.h"
#endif

#include "MFC03Doc.h"
#include "MFC03View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC03View

IMPLEMENT_DYNCREATE(CMFC03View, CView)

BEGIN_MESSAGE_MAP(CMFC03View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC03View 构造/析构

CMFC03View::CMFC03View()
{
	// TODO: 在此处添加构造代码

}

CMFC03View::~CMFC03View()
{
}

BOOL CMFC03View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC03View 绘制

void CMFC03View::OnDraw(CDC* /*pDC*/)
{
	CMFC03Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC03View 诊断

#ifdef _DEBUG
void CMFC03View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC03View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC03Doc* CMFC03View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC03Doc)));
	return (CMFC03Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC03View 消息处理程序


void CMFC03View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFC03Doc* pDoc = GetDocument();
	pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC03View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFC03Doc* pDoc = GetDocument();
	CString s= _T("");
	s.Format(s+"%d", pDoc->count);
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
	CView::OnRButtonDown(nFlags, point);
}
