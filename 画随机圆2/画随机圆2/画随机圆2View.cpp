
// 画随机圆2View.cpp : C画随机圆2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "画随机圆2.h"
#endif

#include "画随机圆2Doc.h"
#include "画随机圆2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C画随机圆2View

IMPLEMENT_DYNCREATE(C画随机圆2View, CView)

BEGIN_MESSAGE_MAP(C画随机圆2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C画随机圆2View 构造/析构

C画随机圆2View::C画随机圆2View()
{
	// TODO: 在此处添加构造代码
	ca.SetSize(300);
}

C画随机圆2View::~C画随机圆2View()
{
}

BOOL C画随机圆2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C画随机圆2View 绘制

void C画随机圆2View::OnDraw(CDC* pDC)
{
	C画随机圆2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < ca.GetSize(); i++)
		pDC->Ellipse(ca.GetAt(i));
	// TODO: 在此处为本机数据添加绘制代码
}


// C画随机圆2View 诊断

#ifdef _DEBUG
void C画随机圆2View::AssertValid() const
{
	CView::AssertValid();
}

void C画随机圆2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C画随机圆2Doc* C画随机圆2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C画随机圆2Doc)));
	return (C画随机圆2Doc*)m_pDocument;
}
#endif //_DEBUG


// C画随机圆2View 消息处理程序


void C画随机圆2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int r = (rand() % (100 - 10) + 10);
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);
	ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
