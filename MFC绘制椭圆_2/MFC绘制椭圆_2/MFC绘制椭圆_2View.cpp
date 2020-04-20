
// MFC绘制椭圆_2View.cpp : CMFC绘制椭圆_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC绘制椭圆_2.h"
#endif

#include "MFC绘制椭圆_2Doc.h"
#include "MFC绘制椭圆_2View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC绘制椭圆_2View

IMPLEMENT_DYNCREATE(CMFC绘制椭圆_2View, CView)

BEGIN_MESSAGE_MAP(CMFC绘制椭圆_2View, CView)
	ON_COMMAND(ID_Shown, &CMFC绘制椭圆_2View::OnShown)
END_MESSAGE_MAP()

// CMFC绘制椭圆_2View 构造/析构

CMFC绘制椭圆_2View::CMFC绘制椭圆_2View()
{
	// TODO: 在此处添加构造代码
	top = 0, bottom = 0, right = 0, left = 0,
	flag=0;
}

CMFC绘制椭圆_2View::~CMFC绘制椭圆_2View()
{
}

BOOL CMFC绘制椭圆_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC绘制椭圆_2View 绘制

void CMFC绘制椭圆_2View::OnDraw(CDC* /*pDC*/)
{
	CMFC绘制椭圆_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (flag)
	{
        CRect rect;
		rect.bottom = bottom;
		rect.top = top;
		rect.right = right;
		rect.left = left;
	    GetDC()->Ellipse(rect);
	}
		
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC绘制椭圆_2View 诊断

#ifdef _DEBUG
void CMFC绘制椭圆_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC绘制椭圆_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC绘制椭圆_2Doc* CMFC绘制椭圆_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC绘制椭圆_2Doc)));
	return (CMFC绘制椭圆_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC绘制椭圆_2View 消息处理程序

MyDlg dlg;
void CMFC绘制椭圆_2View::OnShown()
{
	// TODO: 在此添加命令处理程序代码
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		flag=1;
		top = dlg.top;
		bottom = dlg.bottom;
		left = dlg.left;
		right = dlg.right;	
	}
	Invalidate();
}
