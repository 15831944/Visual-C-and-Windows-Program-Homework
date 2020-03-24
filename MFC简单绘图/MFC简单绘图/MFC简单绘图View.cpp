
// MFC简单绘图View.cpp : CMFC简单绘图View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC简单绘图.h"
#endif

#include "MFC简单绘图Doc.h"
#include "MFC简单绘图View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC简单绘图View

IMPLEMENT_DYNCREATE(CMFC简单绘图View, CView)

BEGIN_MESSAGE_MAP(CMFC简单绘图View, CView)
	ON_COMMAND(ID_32771, &CMFC简单绘图View::On32771)
	ON_COMMAND(ID_32772, &CMFC简单绘图View::On32772)
	ON_COMMAND(ID_32773, &CMFC简单绘图View::On32773)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFC简单绘图View 构造/析构

CMFC简单绘图View::CMFC简单绘图View()
{
	// TODO: 在此处添加构造代码
	caozuo=0;
	point1.x=point1.y=0;
	point2.x=point2.y=0;
}

CMFC简单绘图View::~CMFC简单绘图View()
{
}

BOOL CMFC简单绘图View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC简单绘图View 绘制

void CMFC简单绘图View::OnDraw(CDC* /*pDC*/)
{
	CMFC简单绘图Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	CRect ca;
	switch (caozuo)
	{
	case 1:
		dc.MoveTo(point1.x,point1.y);
		dc.LineTo(point2.x,point2.y);
		break;
	case 2:
		ca.bottom = point2.y;
		ca.top = point1.y;
		ca.left = point1.x;
		ca.right = point2.x;
		dc.Rectangle(ca);
		break;
	case 3:
		ca.bottom = point2.y;
		ca.top = point1.y;
		ca.left = point1.x;
		ca.right = point2.x;
		dc.Ellipse(ca);
		break;

	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC简单绘图View 诊断

#ifdef _DEBUG
void CMFC简单绘图View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC简单绘图View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC简单绘图Doc* CMFC简单绘图View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC简单绘图Doc)));
	return (CMFC简单绘图Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC简单绘图View 消息处理程序


void CMFC简单绘图View::On32771()//画横线
{
	caozuo = 1;
	//Invalidate();
	// TODO: 在此添加命令处理程序代码
}


void CMFC简单绘图View::On32772()//画矩形
{
	caozuo = 2;
	//Invalidate();
	// TODO: 在此添加命令处理程序代码
}


void CMFC简单绘图View::On32773()//画椭圆
{
	caozuo = 3;
	//Invalidate();
	// TODO: 在此添加命令处理程序代码
}


void CMFC简单绘图View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	point1.x = point.x;
	point1.y = point.y;
	//Invalidate();
	CView::OnLButtonDown(nFlags, point);
}


void CMFC简单绘图View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	point2.x = point.x;
	point2.y = point.y;
	Invalidate(NULL);
	CView::OnLButtonUp(nFlags, point);
}
