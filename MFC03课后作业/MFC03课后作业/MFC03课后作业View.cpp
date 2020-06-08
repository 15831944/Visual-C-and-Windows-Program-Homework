
// MFC03课后作业View.cpp : CMFC03课后作业View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC03课后作业.h"
#endif

#include "MFC03课后作业Doc.h"
#include "MFC03课后作业View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC03课后作业View

IMPLEMENT_DYNCREATE(CMFC03课后作业View, CView)

BEGIN_MESSAGE_MAP(CMFC03课后作业View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC03课后作业View 构造/析构
int flag;
CMFC03课后作业View::CMFC03课后作业View()
{
	// TODO: 在此处添加构造代码
	flag = 0;
	v = _T("我是view类变量:v");
}

CMFC03课后作业View::~CMFC03课后作业View()
{
}

BOOL CMFC03课后作业View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC03课后作业View 绘制

void CMFC03课后作业View::OnDraw(CDC* pDC)
{
	CMFC03课后作业Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s = _T("点击鼠标左键将显示变量:d,v");
	pDC->TextOutW(100,100,s);
	if (flag)
	{
		CString ss = v + pDoc->d;
		pDC->TextOutW(100, 150, ss);
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC03课后作业View 诊断

#ifdef _DEBUG
void CMFC03课后作业View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC03课后作业View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC03课后作业Doc* CMFC03课后作业View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC03课后作业Doc)));
	return (CMFC03课后作业Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC03课后作业View 消息处理程序


void CMFC03课后作业View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 1;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
