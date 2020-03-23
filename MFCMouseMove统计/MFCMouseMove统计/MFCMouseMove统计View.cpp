
// MFCMouseMove统计View.cpp : CMFCMouseMove统计View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCMouseMove统计.h"
#endif

#include "MFCMouseMove统计Doc.h"
#include "MFCMouseMove统计View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCMouseMove统计View

IMPLEMENT_DYNCREATE(CMFCMouseMove统计View, CView)

BEGIN_MESSAGE_MAP(CMFCMouseMove统计View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMFCMouseMove统计View 构造/析构

CMFCMouseMove统计View::CMFCMouseMove统计View()
{
	// TODO: 在此处添加构造代码
	x0 = x1 = y0 = y1 = 0;
	count = 0;
	set = false;
}

CMFCMouseMove统计View::~CMFCMouseMove统计View()
{
}

BOOL CMFCMouseMove统计View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCMouseMove统计View 绘制

void CMFCMouseMove统计View::OnDraw(CDC* /*pDC*/)
{
	CMFCMouseMove统计Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCMouseMove统计View 诊断

#ifdef _DEBUG
void CMFCMouseMove统计View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCMouseMove统计View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCMouseMove统计Doc* CMFCMouseMove统计View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCMouseMove统计Doc)));
	return (CMFCMouseMove统计Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCMouseMove统计View 消息处理程序


void CMFCMouseMove统计View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString s;
	set = true;
	x0 = point.x;
	y0 = point.y;
	s.Format(_T("点击位置 X: %d Y: %d"), x0, y0);//测试点击的赋值
	dc.TextOutW(30, 30, s);
	CView::OnLButtonDown(nFlags, point);
}


void CMFCMouseMove统计View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString a; CString b; CString s;
	x1 = point.x;
	y1 = point.y;
	int distance = sqrt((x1 - x0)*(x1 - x0) + (y1 - y0)*(y1 - y0));
	a.Format(_T("抬起位置 X: %d Y: %d"), x1, y1);//测试抬起的赋值
	dc.TextOutW(30, 30, a);
	b.Format(_T("经过距离： %d"), distance);
	double ans = (double)distance / count;
	s.Format(_T("MouseMove发生了%d次，横向移动%.6f个像素发生一次"),count,ans);
	dc.TextOutW(200, 500, s);
	CView::OnLButtonUp(nFlags, point);
}


void CMFCMouseMove统计View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (set)
		count++;
	CView::OnMouseMove(nFlags, point);
}
