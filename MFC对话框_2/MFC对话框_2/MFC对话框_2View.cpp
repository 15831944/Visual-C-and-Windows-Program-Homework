
// MFC对话框_2View.cpp : CMFC对话框_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC对话框_2.h"
#endif

#include "MFC对话框_2Doc.h"
#include "MFC对话框_2View.h"
#include"MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC对话框_2View

IMPLEMENT_DYNCREATE(CMFC对话框_2View, CView)

BEGIN_MESSAGE_MAP(CMFC对话框_2View, CView)
	ON_COMMAND(ID_Shown, &CMFC对话框_2View::OnShown)
END_MESSAGE_MAP()

// CMFC对话框_2View 构造/析构

CMFC对话框_2View::CMFC对话框_2View()
{
	// TODO: 在此处添加构造代码

}

CMFC对话框_2View::~CMFC对话框_2View()
{
}

BOOL CMFC对话框_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC对话框_2View 绘制

void CMFC对话框_2View::OnDraw(CDC* /*pDC*/)
{
	CMFC对话框_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC对话框_2View 诊断

#ifdef _DEBUG
void CMFC对话框_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC对话框_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC对话框_2Doc* CMFC对话框_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC对话框_2Doc)));
	return (CMFC对话框_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC对话框_2View 消息处理程序


void CMFC对话框_2View::OnShown()
{
	// TODO: 在此添加命令处理程序代码
	// TODO: 在此添加命令处理程序代码
	MyDlg dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
	}
}
