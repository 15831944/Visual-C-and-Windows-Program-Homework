
// MFC菜单栏显示View.cpp : CMFC菜单栏显示View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC菜单栏显示.h"
#endif

#include "MFC菜单栏显示Doc.h"
#include "MFC菜单栏显示View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC菜单栏显示View

IMPLEMENT_DYNCREATE(CMFC菜单栏显示View, CView)

BEGIN_MESSAGE_MAP(CMFC菜单栏显示View, CView)
	ON_COMMAND(ID_SHOWNUMBER, &CMFC菜单栏显示View::OnShownumber)
END_MESSAGE_MAP()

// CMFC菜单栏显示View 构造/析构

CMFC菜单栏显示View::CMFC菜单栏显示View()
{
	// TODO: 在此处添加构造代码

}

CMFC菜单栏显示View::~CMFC菜单栏显示View()
{
}

BOOL CMFC菜单栏显示View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC菜单栏显示View 绘制

void CMFC菜单栏显示View::OnDraw(CDC* /*pDC*/)
{
	CMFC菜单栏显示Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC菜单栏显示View 诊断

#ifdef _DEBUG
void CMFC菜单栏显示View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC菜单栏显示View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC菜单栏显示Doc* CMFC菜单栏显示View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC菜单栏显示Doc)));
	return (CMFC菜单栏显示Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC菜单栏显示View 消息处理程序


void CMFC菜单栏显示View::OnShownumber()
{
	// TODO: 在此添加命令处理程序代码
	CString S;
	S.Format(_T("我是陈良"));
	CClientDC dc(this);
	dc.TextOutW(200, 200, S);
}
