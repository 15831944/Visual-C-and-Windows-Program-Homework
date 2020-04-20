
// MFC绘制椭圆_1View.cpp : CMFC绘制椭圆_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC绘制椭圆_1.h"
#endif

#include "MFC绘制椭圆_1Doc.h"
#include "MFC绘制椭圆_1View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC绘制椭圆_1View

IMPLEMENT_DYNCREATE(CMFC绘制椭圆_1View, CView)

BEGIN_MESSAGE_MAP(CMFC绘制椭圆_1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_PAINT()
	ON_COMMAND(ID_SHOWN_1, &CMFC绘制椭圆_1View::OnShown1)
	ON_BN_CLICKED(IDOK, &CMFC绘制椭圆_1View::OnBnClickedOk)
END_MESSAGE_MAP()

// CMFC绘制椭圆_1View 构造/析构

CMFC绘制椭圆_1View::CMFC绘制椭圆_1View()
{
	// TODO: 在此处添加构造代码
	point1.x = point1.y = 0;
	point2.x = point2.y = 0;
	m_bLButtonDown = false;
	ca.bottom = ca.top = ca.right = ca.left = 0;
	f = 0;
	r.bottom = r.top = r.right = r.left = 0;
}

CMFC绘制椭圆_1View::~CMFC绘制椭圆_1View()
{
}

BOOL CMFC绘制椭圆_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC绘制椭圆_1View 绘制

void CMFC绘制椭圆_1View::OnDraw(CDC* pDC)
{
	CMFC绘制椭圆_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if(f)
		pDC->Ellipse(r);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC绘制椭圆_1View 诊断

#ifdef _DEBUG
void CMFC绘制椭圆_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC绘制椭圆_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC绘制椭圆_1Doc* CMFC绘制椭圆_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC绘制椭圆_1Doc)));
	return (CMFC绘制椭圆_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC绘制椭圆_1View 消息处理程序


void CMFC绘制椭圆_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	point1 = point;
	m_bLButtonDown = true;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC绘制椭圆_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	point2 = point;
	m_bLButtonDown = false;
	CView::OnLButtonUp(nFlags, point);
}


void CMFC绘制椭圆_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	point2 = point;
	if (m_bLButtonDown == true)
	{
		CClientDC dc(this);
		ca.bottom = point2.y;
		ca.top = point1.y;
		ca.left = point1.x;
		ca.right = point2.x;
		dc.Ellipse(ca);
		Invalidate();
	}

	CView::OnMouseMove(nFlags, point);
}


void CMFC绘制椭圆_1View::OnPaint()
{
	CPaintDC dc(this); 
	ca.bottom = point2.y;
	ca.top = point1.y;
	ca.left = point1.x;
	ca.right = point2.x;
	dc.Ellipse(ca);				   
}

MyDlg dlg;
void CMFC绘制椭圆_1View::OnShown1()
{
	// TODO: 在此添加命令处理程序代码
	int t = dlg.DoModal();
	if (t == IDOK)
	{
	}
}


void CMFC绘制椭圆_1View::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	/*
	f=1;
	r.bottom = dlg.cre_bottom;
	r.top = dlg.cre_top;
	r.left = dlg.cre_left;
	r.right = dlg.cre_right;
	CClientDC dc(this);
	CString s;
	s.Format(_T("是%d", r.bottom));
	dc.TextOutW(200, 200, s);
	Invalidate();
	*/
}
