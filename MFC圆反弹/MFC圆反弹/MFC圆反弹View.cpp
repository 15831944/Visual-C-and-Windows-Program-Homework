
// MFC圆反弹View.cpp : CMFC圆反弹View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC圆反弹.h"
#endif

#include "MFC圆反弹Doc.h"
#include "MFC圆反弹View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC圆反弹View

IMPLEMENT_DYNCREATE(CMFC圆反弹View, CView)

BEGIN_MESSAGE_MAP(CMFC圆反弹View, CView)
END_MESSAGE_MAP()

// CMFC圆反弹View 构造/析构

CMFC圆反弹View::CMFC圆反弹View()
{
	// TODO: 在此处添加构造代码

}

CMFC圆反弹View::~CMFC圆反弹View()
{
}

BOOL CMFC圆反弹View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC圆反弹View 绘制

void CMFC圆反弹View::OnDraw(CDC* /*pDC*/)
{
	CMFC圆反弹Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC圆反弹View 诊断

#ifdef _DEBUG
void CMFC圆反弹View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC圆反弹View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC圆反弹Doc* CMFC圆反弹View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC圆反弹Doc)));
	return (CMFC圆反弹Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC圆反弹View 消息处理程序
