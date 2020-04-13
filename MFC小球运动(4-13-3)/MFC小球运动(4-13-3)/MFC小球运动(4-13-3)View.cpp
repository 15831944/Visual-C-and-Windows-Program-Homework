
// MFC小球运动(4-13-3)View.cpp : CMFC小球运动4133View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC小球运动(4-13-3).h"
#endif

#include "MFC小球运动(4-13-3)Doc.h"
#include "MFC小球运动(4-13-3)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC小球运动4133View

IMPLEMENT_DYNCREATE(CMFC小球运动4133View, CView)

BEGIN_MESSAGE_MAP(CMFC小球运动4133View, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMFC小球运动4133View 构造/析构

CMFC小球运动4133View::CMFC小球运动4133View()
{
	// TODO: 在此处添加构造代码
	cr.top = 0;
	cr.bottom = 120;
	cr.left = 0;
	cr.right = 0 + 120;
	i = 1;
	st = 0;
}

CMFC小球运动4133View::~CMFC小球运动4133View()
{
}

BOOL CMFC小球运动4133View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC小球运动4133View 绘制

void CMFC小球运动4133View::OnDraw(CDC* pDC)
{
	CMFC小球运动4133Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	this->GetClientRect(&rc);
	cr.top = (rc.bottom + rc.top) / 2-60;
	cr.bottom=cr.top+ 120;
	CPen pen(PS_SOLID, 5, RGB(rand() % 300, rand() % 300, rand() % 300));
	CPen *color;
	color = dc.SelectObject(&pen);
	dc.Ellipse(cr);
	//pDC->Ellipse(rc);
	SetTimer(0, rand() % 30 + 40, NULL);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC小球运动4133View 诊断

#ifdef _DEBUG
void CMFC小球运动4133View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC小球运动4133View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC小球运动4133Doc* CMFC小球运动4133View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC小球运动4133Doc)));
	return (CMFC小球运动4133Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC小球运动4133View 消息处理程序


void CMFC小球运动4133View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (st == 1)
	{
    if (cr.left+120 >= rc.right || cr.left == 0)
		i++;
	if (i % 2 == 0)
	{
		cr.left += 10;
		cr.right += 10;
	}
	else
	{
		cr.left -= 10;
		cr.right -= 10;
	}
	}
	
	Invalidate();
	CView::OnTimer(nIDEvent);
}


void CMFC小球运动4133View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	st=1;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC小球运动4133View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	st = 0;
	CView::OnLButtonDblClk(nFlags, point);
}
