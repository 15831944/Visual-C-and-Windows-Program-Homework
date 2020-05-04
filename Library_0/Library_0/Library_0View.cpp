
// Library_0View.cpp : CLibrary_0View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Library_0.h"
#endif

#include "Library_0Doc.h"
#include "Library_0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CLibrary_0View

IMPLEMENT_DYNCREATE(CLibrary_0View, CView)

BEGIN_MESSAGE_MAP(CLibrary_0View, CView)
END_MESSAGE_MAP()

// CLibrary_0View 构造/析构

CLibrary_0View::CLibrary_0View()
{
	// TODO: 在此处添加构造代码

}

CLibrary_0View::~CLibrary_0View()
{
}

BOOL CLibrary_0View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CLibrary_0View 绘制

void CLibrary_0View::OnDraw(CDC* /*pDC*/)
{
	CLibrary_0Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CLibrary_0View 诊断

#ifdef _DEBUG
void CLibrary_0View::AssertValid() const
{
	CView::AssertValid();
}

void CLibrary_0View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CLibrary_0Doc* CLibrary_0View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CLibrary_0Doc)));
	return (CLibrary_0Doc*)m_pDocument;
}
#endif //_DEBUG


// CLibrary_0View 消息处理程序
