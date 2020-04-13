
// MFC加法器(4-13-2)View.cpp : CMFC加法器4132View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC加法器(4-13-2).h"
#endif

#include "MFC加法器(4-13-2)Doc.h"
#include "MFC加法器(4-13-2)View.h"
#include"MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC加法器4132View

IMPLEMENT_DYNCREATE(CMFC加法器4132View, CView)

BEGIN_MESSAGE_MAP(CMFC加法器4132View, CView)
	ON_COMMAND(ID_Shown, &CMFC加法器4132View::OnShown)
END_MESSAGE_MAP()

// CMFC加法器4132View 构造/析构

CMFC加法器4132View::CMFC加法器4132View()
{
	// TODO: 在此处添加构造代码

}

CMFC加法器4132View::~CMFC加法器4132View()
{
}

BOOL CMFC加法器4132View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC加法器4132View 绘制

void CMFC加法器4132View::OnDraw(CDC* /*pDC*/)
{
	CMFC加法器4132Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC加法器4132View 诊断

#ifdef _DEBUG
void CMFC加法器4132View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC加法器4132View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC加法器4132Doc* CMFC加法器4132View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC加法器4132Doc)));
	return (CMFC加法器4132Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC加法器4132View 消息处理程序


void CMFC加法器4132View::OnShown()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
	}
}
