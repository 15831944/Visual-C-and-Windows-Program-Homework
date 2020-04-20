
// MFC绘制椭圆_4View.cpp : CMFC绘制椭圆_4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC绘制椭圆_4.h"
#endif

#include "MFC绘制椭圆_4Doc.h"
#include "MFC绘制椭圆_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC绘制椭圆_4View

IMPLEMENT_DYNCREATE(CMFC绘制椭圆_4View, CView)

BEGIN_MESSAGE_MAP(CMFC绘制椭圆_4View, CView)
	ON_COMMAND(ID_Show, &CMFC绘制椭圆_4View::OnShow)
END_MESSAGE_MAP()

// CMFC绘制椭圆_4View 构造/析构

CMFC绘制椭圆_4View::CMFC绘制椭圆_4View()
{
	// TODO: 在此处添加构造代码
	rect.top=10, rect.bottom=300, rect.left=200, rect.right =600 ;
	red = green = blue = 0;
	flag = false;
}

CMFC绘制椭圆_4View::~CMFC绘制椭圆_4View()
{
}

BOOL CMFC绘制椭圆_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC绘制椭圆_4View 绘制

void CMFC绘制椭圆_4View::OnDraw(CDC* pDC)
{
	CMFC绘制椭圆_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(rect);
	if (flag) {
	int color = RGB(red, green, blue);
	CBrush brush(color);
	CBrush *oldbrush;
	oldbrush = pDC->SelectObject(&brush);//选新的画刷
	pDC->Ellipse(rect);
	pDC->SelectObject(oldbrush);//将原来的画刷选回去
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC绘制椭圆_4View 诊断

#ifdef _DEBUG
void CMFC绘制椭圆_4View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC绘制椭圆_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC绘制椭圆_4Doc* CMFC绘制椭圆_4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC绘制椭圆_4Doc)));
	return (CMFC绘制椭圆_4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC绘制椭圆_4View 消息处理程序
#include"MyDlg.h"
MyDlg dlg;
void CMFC绘制椭圆_4View::OnShow()
{
	// TODO: 在此添加命令处理程序代码
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		flag = true;
		red = dlg.red;
		green = dlg.green;
		blue = dlg.blue;
		Invalidate();
	}
}
