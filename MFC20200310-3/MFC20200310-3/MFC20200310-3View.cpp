
// MFC20200310-3View.cpp : CMFC202003103View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC20200310-3.h"
#endif

#include "MFC20200310-3Doc.h"
#include "MFC20200310-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC202003103View

IMPLEMENT_DYNCREATE(CMFC202003103View, CView)

BEGIN_MESSAGE_MAP(CMFC202003103View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC202003103View 构造/析构

CMFC202003103View::CMFC202003103View()
{
	// TODO: 在此处添加构造代码
	

}

CMFC202003103View::~CMFC202003103View()
{
}

BOOL CMFC202003103View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC202003103View 绘制

void CMFC202003103View::OnDraw(CDC* pDC)
{
	CMFC202003103Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(cr1);
	pDC->Rectangle(cr2);
	pDC->Rectangle(cr3);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC202003103View 诊断

#ifdef _DEBUG
void CMFC202003103View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC202003103View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC202003103Doc* CMFC202003103View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC202003103Doc)));
	return (CMFC202003103Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC202003103View 消息处理程序


void CMFC202003103View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int r = rand() % 20;
	CString s;
	CMFC202003103Doc* pDoc = GetDocument();
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
		pDoc->c= (pDoc->a)+(pDoc->b);
		s.Format(_T("%d"), pDoc->c);
		dc.TextOutW(point.x, point.y, s);
	}
	else {
		s = "点击无效";
		dc.TextOutW(point.x, point.y, s);
	}
	CView::OnLButtonDown(nFlags, point);
}
