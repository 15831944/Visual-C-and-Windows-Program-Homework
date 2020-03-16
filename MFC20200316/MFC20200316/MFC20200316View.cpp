
// MFC20200316View.cpp : CMFC20200316View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC20200316.h"
#endif

#include "MFC20200316Doc.h"
#include "MFC20200316View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC20200316View

IMPLEMENT_DYNCREATE(CMFC20200316View, CView)

BEGIN_MESSAGE_MAP(CMFC20200316View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMFC20200316View 构造/析构

CMFC20200316View::CMFC20200316View()
{
	// TODO: 在此处添加构造代码

}

CMFC20200316View::~CMFC20200316View()
{
}

BOOL CMFC20200316View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC20200316View 绘制

void CMFC20200316View::OnDraw(CDC* pDC)
{
	CMFC20200316Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->m_crlRect);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC20200316View 诊断

#ifdef _DEBUG
void CMFC20200316View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC20200316View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC20200316Doc* CMFC20200316View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC20200316Doc)));
	return (CMFC20200316Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC20200316View 消息处理程序


void CMFC20200316View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFC20200316Doc* pDoc = GetDocument();
	pDoc->m_crlRect.left = point.x;
	pDoc->m_crlRect.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC20200316View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFC20200316Doc* pDoc = GetDocument();
	pDoc->m_crlRect.right = point.x;
	pDoc->m_crlRect.bottom = point.y;
	InvalidateRect(NULL, FALSE);
	CView::OnLButtonUp(nFlags, point);
}


void CMFC20200316View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString s = _T("");
	s.Format(s + "鼠标位置（X: %d    Y: %d）", point.x, point.y);
	dc.TextOut(30, 30, s);
	CView::OnMouseMove(nFlags, point);
}
