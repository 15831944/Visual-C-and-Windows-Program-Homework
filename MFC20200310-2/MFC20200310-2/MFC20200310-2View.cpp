
// MFC20200310-2View.cpp : CMFC202003102View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC20200310-2.h"
#endif

#include "MFC20200310-2Doc.h"
#include "MFC20200310-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC202003102View

IMPLEMENT_DYNCREATE(CMFC202003102View, CView)

BEGIN_MESSAGE_MAP(CMFC202003102View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC202003102View 构造/析构

CMFC202003102View::CMFC202003102View()
{
	// TODO: 在此处添加构造代码

}

CMFC202003102View::~CMFC202003102View()
{
}

BOOL CMFC202003102View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC202003102View 绘制

void CMFC202003102View::OnDraw(CDC* /*pDC*/)
{
	CMFC202003102Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC202003102View 诊断

#ifdef _DEBUG
void CMFC202003102View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC202003102View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC202003102Doc* CMFC202003102View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC202003102Doc)));
	return (CMFC202003102Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC202003102View 消息处理程序


void CMFC202003102View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s = _T("");
	CMFC202003102Doc* pDoc = GetDocument();
	s.Format(s + "%d+%d=%d", pDoc->A, pDoc->B, pDoc->A + pDoc->B);

	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
	CView::OnLButtonDown(nFlags, point);
}
