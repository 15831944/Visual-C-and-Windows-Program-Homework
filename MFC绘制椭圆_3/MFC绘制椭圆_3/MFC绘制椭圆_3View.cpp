
// MFC绘制椭圆_3View.cpp : CMFC绘制椭圆_3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC绘制椭圆_3.h"
#endif

#include "MFC绘制椭圆_3Doc.h"
#include "MFC绘制椭圆_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC绘制椭圆_3View

IMPLEMENT_DYNCREATE(CMFC绘制椭圆_3View, CView)

BEGIN_MESSAGE_MAP(CMFC绘制椭圆_3View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC绘制椭圆_3View 构造/析构

CMFC绘制椭圆_3View::CMFC绘制椭圆_3View()
{
	// TODO: 在此处添加构造代码
	rect1.bottom = 420; rect1.top = 120; rect1.left = 450; rect1.right = 920;
	m_ptMouse.x = m_ptMouse.y = 0;
	ca.SetSize(300);
	f = 0;
}

CMFC绘制椭圆_3View::~CMFC绘制椭圆_3View()
{
}

BOOL CMFC绘制椭圆_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC绘制椭圆_3View 绘制

void CMFC绘制椭圆_3View::OnDraw(CDC* pDC)
{
	CMFC绘制椭圆_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(rect1);
	if (f)
	for (int i = 0; i < ca.GetSize(); i++)
	{
		CDC * dc = GetDC();
		CPen * pOldPen = NULL;
		CPen pen;
		pen.CreatePen(PS_DASH, 1, RGB(255,0 , 0));//虚线
		//pen.CreatePen(PS_DASHDOT, 1, RGB(0, 0, 255));//点画线
		pOldPen = dc->SelectObject(&pen);
		CBrush * pOldBrush = NULL;
		CBrush * pBrush = CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));//背景透明效果
		pOldBrush = dc->SelectObject(pBrush);
		dc->Rectangle(&ca.GetAt(i));
		dc->SelectObject(pOldPen);
		pen.DeleteObject();
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC绘制椭圆_3View 诊断

#ifdef _DEBUG
void CMFC绘制椭圆_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC绘制椭圆_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC绘制椭圆_3Doc* CMFC绘制椭圆_3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC绘制椭圆_3Doc)));
	return (CMFC绘制椭圆_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC绘制椭圆_3View 消息处理程序


void CMFC绘制椭圆_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (rect1.PtInRect(point))
	{
		CRect r;
		f++;
		r.bottom = rect1.bottom, r.top = rect1.top;
		r.left = rect1.left,r.right=rect1.right;
		ca.Add(r);	
		Invalidate();
	}
	
	CView::OnLButtonDown(nFlags, point);
}
