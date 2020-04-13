
// MFC对话框_1View.cpp : CMFC对话框_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC对话框_1.h"
#endif

#include "MFC对话框_1Doc.h"
#include "MFC对话框_1View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC对话框_1View

IMPLEMENT_DYNCREATE(CMFC对话框_1View, CView)

BEGIN_MESSAGE_MAP(CMFC对话框_1View, CView)
	ON_COMMAND(ID_SHOWN, &CMFC对话框_1View::OnShown)
END_MESSAGE_MAP()

// CMFC对话框_1View 构造/析构

CMFC对话框_1View::CMFC对话框_1View()
{
	// TODO: 在此处添加构造代码
	q = 0;
}

CMFC对话框_1View::~CMFC对话框_1View()
{
}

BOOL CMFC对话框_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC对话框_1View 绘制

void CMFC对话框_1View::OnDraw(CDC* pDC)
{
	CMFC对话框_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	CString s;
	s.Format(_T("你已退出对话框"));
	if (q == 1)
		dc.TextOutW(200, 200, s);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC对话框_1View 诊断

#ifdef _DEBUG
void CMFC对话框_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC对话框_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC对话框_1Doc* CMFC对话框_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC对话框_1Doc)));
	return (CMFC对话框_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC对话框_1View 消息处理程序


void CMFC对话框_1View::OnShown()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg dlg;
	q = 0;
	Invalidate();
	int t = dlg.DoModal();
	if (t == IDOK)
	{}
	q = 1;
	Invalidate();
}
