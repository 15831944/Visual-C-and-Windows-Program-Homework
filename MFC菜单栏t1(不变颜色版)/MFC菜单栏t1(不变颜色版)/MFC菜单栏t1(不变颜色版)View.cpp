
// MFC菜单栏t1(不变颜色版)View.cpp : CMFC菜单栏t1不变颜色版View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC菜单栏t1(不变颜色版).h"
#endif

#include "MFC菜单栏t1(不变颜色版)Doc.h"
#include "MFC菜单栏t1(不变颜色版)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC菜单栏t1不变颜色版View

IMPLEMENT_DYNCREATE(CMFC菜单栏t1不变颜色版View, CView)

BEGIN_MESSAGE_MAP(CMFC菜单栏t1不变颜色版View, CView)
	ON_COMMAND(ID_SHOW, &CMFC菜单栏t1不变颜色版View::OnShow)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMFC菜单栏t1不变颜色版View 构造/析构

CMFC菜单栏t1不变颜色版View::CMFC菜单栏t1不变颜色版View()
{
	// TODO: 在此处添加构造代码

}

CMFC菜单栏t1不变颜色版View::~CMFC菜单栏t1不变颜色版View()
{
}

BOOL CMFC菜单栏t1不变颜色版View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC菜单栏t1不变颜色版View 绘制

void CMFC菜单栏t1不变颜色版View::OnDraw(CDC* /*pDC*/)
{
	CMFC菜单栏t1不变颜色版Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC菜单栏t1不变颜色版View 诊断

#ifdef _DEBUG
void CMFC菜单栏t1不变颜色版View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC菜单栏t1不变颜色版View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC菜单栏t1不变颜色版Doc* CMFC菜单栏t1不变颜色版View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC菜单栏t1不变颜色版Doc)));
	return (CMFC菜单栏t1不变颜色版Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC菜单栏t1不变颜色版View 消息处理程序


void CMFC菜单栏t1不变颜色版View::OnShow()
{
	CClientDC dc(this);
	CRect cr;
	this->GetClientRect(&cr);
	x = (cr.left + cr.right) / 2;
	y = (cr.bottom + cr.top) / 2;
	cr1.left = x - 10;
	cr1.right = x + 10;
	cr1.bottom = y + 10;
	cr1.top = y - 10;
	dc.Ellipse(cr1);
	SetTimer(0, rand() % 300 + 100, NULL);
	Invalidate();
}


void CMFC菜单栏t1不变颜色版View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	cr1.left -= 10;
	cr1.right += 10;
	cr1.bottom += 10;
	cr1.top -= 10;
	dc.Ellipse(cr1);
	CView::OnTimer(nIDEvent);
}
