
// MFC20200310-1View.cpp : CMFC202003101View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC20200310-1.h"
#endif

#include "MFC20200310-1Doc.h"
#include "MFC20200310-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC202003101View

IMPLEMENT_DYNCREATE(CMFC202003101View, CView)

BEGIN_MESSAGE_MAP(CMFC202003101View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFC202003101View 构造/析构

CMFC202003101View::CMFC202003101View()
{
	// TODO: 在此处添加构造代码

}

CMFC202003101View::~CMFC202003101View()
{
}

BOOL CMFC202003101View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC202003101View 绘制

void CMFC202003101View::OnDraw(CDC* /*pDC*/)
{
	CMFC202003101Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC202003101View 诊断

#ifdef _DEBUG
void CMFC202003101View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC202003101View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC202003101Doc* CMFC202003101View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC202003101Doc)));
	return (CMFC202003101Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC202003101View 消息处理程序


void CMFC202003101View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString S= _T("左键正被按下");
	CClientDC dc(this);
	dc.TextOutW(200, 200, S);
	CView::OnLButtonDown(nFlags, point);
}


void CMFC202003101View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString S = _T("左键正在抬起");
	CClientDC dc(this);
	dc.TextOutW(200, 200, S);
	CView::OnLButtonUp(nFlags, point);
}
