
// 20200310-课后作业View.cpp : CMy20200310课后作业View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "20200310-课后作业.h"
#endif

#include "20200310-课后作业Doc.h"
#include "20200310-课后作业View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200310课后作业View

IMPLEMENT_DYNCREATE(CMy20200310课后作业View, CView)

BEGIN_MESSAGE_MAP(CMy20200310课后作业View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMy20200310课后作业View 构造/析构

CMy20200310课后作业View::CMy20200310课后作业View()
{
	// TODO: 在此处添加构造代码

}

CMy20200310课后作业View::~CMy20200310课后作业View()
{
}

BOOL CMy20200310课后作业View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy20200310课后作业View 绘制

void CMy20200310课后作业View::OnDraw(CDC* pDC)
{
	CMy20200310课后作业Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(cr1);
	pDC->Rectangle(cr2);
	pDC->Rectangle(cr3);
	pDC->Rectangle(cr4);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMy20200310课后作业View 诊断

#ifdef _DEBUG
void CMy20200310课后作业View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200310课后作业View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200310课后作业Doc* CMy20200310课后作业View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200310课后作业Doc)));
	return (CMy20200310课后作业Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200310课后作业View 消息处理程序


void CMy20200310课后作业View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int r = rand() % 20;
	CString s;
	CMy20200310课后作业Doc* pDoc = GetDocument();
	CClientDC dc(this);
	if (point.x > 100 && point.x < 300 && point.y>70 && point.y < 200)
	{
		pDoc->a = r;
		s.Format(_T("%d"), pDoc->a);
		dc.TextOutW(point.x, point.y, s);
	}

	else if (point.x > 500 && point.x < 700 && point.y>50 && point.y < 200)
	{
		pDoc->b = r;
		s.Format(_T("%d"), pDoc->b);
		dc.TextOutW(point.x, point.y, s);
	}
	else if (point.x > 800 && point.x < 1000 && point.y>90 && point.y < 300)
	{
		pDoc->c = (pDoc->a) + (pDoc->b);
		s.Format(_T("%d"), pDoc->c);
		dc.TextOutW(point.x, point.y, s);
	}
	else if (point.x > 1100 && point.x < 1300 && point.y>90 && point.y < 300)
	{
		pDoc->d++;
		switch (pDoc->d%4)
		{
		case 1: 
			s.Format(_T("+"));
			break;
		case 2: 
			s.Format(_T("-"));
			break;
		case 3: 
			s.Format(_T("*"));
			break;
		case 0: 
			s.Format(_T("/"));
			break;
		}
		/*
		if(pDoc->d %4==1)
		    s.Format(_T("+"));
		if (pDoc->d % 4 == 2)
			s.Format(_T("-"));
		if (pDoc->d % 4 == 3)
			s.Format(_T("*"));
		if (pDoc->d % 4 == 0)
			s.Format(_T("/"));
		*/
		dc.TextOutW(point.x, point.y, s);
	}
	else {
		s = "点击无效";
		dc.TextOutW(point.x, point.y, s);
	}
	CView::OnLButtonDown(nFlags, point);
}


void CMy20200310课后作业View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s;
	CMy20200310课后作业Doc* pDoc = GetDocument();
	CClientDC dc(this);
	if (point.x > 800 && point.x < 1000 && point.y>90 && point.y < 300)
	{
		if (pDoc->d % 4 == 1)
		    pDoc->c = (pDoc->a) + (pDoc->b);
		if (pDoc->d % 4 == 2)
			pDoc->c = (pDoc->a) - (pDoc->b);
		if (pDoc->d % 4 == 3)
			pDoc->c = (pDoc->a) * (pDoc->b);
		if (pDoc->d % 4 == 0)
			pDoc->c = (pDoc->a) / (pDoc->b);
		s.Format(_T("%d"), pDoc->c);
		dc.TextOutW(point.x, point.y, s);
	}
	CView::OnRButtonDown(nFlags, point);
}
