
// 以彩色填充椭圆内部View.cpp : C以彩色填充椭圆内部View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "以彩色填充椭圆内部.h"
#endif

#include "以彩色填充椭圆内部Doc.h"
#include "以彩色填充椭圆内部View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C以彩色填充椭圆内部View

IMPLEMENT_DYNCREATE(C以彩色填充椭圆内部View, CView)

BEGIN_MESSAGE_MAP(C以彩色填充椭圆内部View, CView)
END_MESSAGE_MAP()

// C以彩色填充椭圆内部View 构造/析构

C以彩色填充椭圆内部View::C以彩色填充椭圆内部View()
{
	// TODO: 在此处添加构造代码

}

C以彩色填充椭圆内部View::~C以彩色填充椭圆内部View()
{
}

BOOL C以彩色填充椭圆内部View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C以彩色填充椭圆内部View 绘制

void C以彩色填充椭圆内部View::OnDraw(CDC* pDC)
{
	C以彩色填充椭圆内部Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	int red = 0,green=0,blue=1000;
	int width = 2; int row = 20;
	int color = RGB(red, green, blue);

	CBrush brush(color);
	CBrush *oldbrush;
	oldbrush = pDC->SelectObject(&brush);//选新的画刷
	
	this->GetClientRect(&cr);
	pDC->Ellipse(cr);
	pDC->SelectObject(oldbrush);//将原来的画刷选回去
	if (!pDoc)
		return;
	// TODO: 在此处为本机数据添加绘制代码
}


// C以彩色填充椭圆内部View 诊断

#ifdef _DEBUG
void C以彩色填充椭圆内部View::AssertValid() const
{
	CView::AssertValid();
}

void C以彩色填充椭圆内部View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C以彩色填充椭圆内部Doc* C以彩色填充椭圆内部View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C以彩色填充椭圆内部Doc)));
	return (C以彩色填充椭圆内部Doc*)m_pDocument;
}
#endif //_DEBUG


// C以彩色填充椭圆内部View 消息处理程序
