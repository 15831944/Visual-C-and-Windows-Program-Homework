
// 以客户区中心为圆心的椭圆View.cpp : C以客户区中心为圆心的椭圆View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "以客户区中心为圆心的椭圆.h"
#endif

#include "以客户区中心为圆心的椭圆Doc.h"
#include "以客户区中心为圆心的椭圆View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C以客户区中心为圆心的椭圆View

IMPLEMENT_DYNCREATE(C以客户区中心为圆心的椭圆View, CView)

BEGIN_MESSAGE_MAP(C以客户区中心为圆心的椭圆View, CView)
END_MESSAGE_MAP()

// C以客户区中心为圆心的椭圆View 构造/析构

C以客户区中心为圆心的椭圆View::C以客户区中心为圆心的椭圆View()
{
	// TODO: 在此处添加构造代码

}

C以客户区中心为圆心的椭圆View::~C以客户区中心为圆心的椭圆View()
{
}

BOOL C以客户区中心为圆心的椭圆View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C以客户区中心为圆心的椭圆View 绘制

void C以客户区中心为圆心的椭圆View::OnDraw(CDC* pDC)
{
	C以客户区中心为圆心的椭圆Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	this->GetClientRect(&cr);
	pDC->Ellipse(cr);
	// TODO: 在此处为本机数据添加绘制代码
}


// C以客户区中心为圆心的椭圆View 诊断

#ifdef _DEBUG
void C以客户区中心为圆心的椭圆View::AssertValid() const
{
	CView::AssertValid();
}

void C以客户区中心为圆心的椭圆View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C以客户区中心为圆心的椭圆Doc* C以客户区中心为圆心的椭圆View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C以客户区中心为圆心的椭圆Doc)));
	return (C以客户区中心为圆心的椭圆Doc*)m_pDocument;
}
#endif //_DEBUG


// C以客户区中心为圆心的椭圆View 消息处理程序
