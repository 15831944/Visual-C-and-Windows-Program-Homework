
// MFC02点击记录View.cpp : CMFC02点击记录View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC02点击记录.h"
#endif

#include "MFC02点击记录Doc.h"
#include "MFC02点击记录View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC02点击记录View

IMPLEMENT_DYNCREATE(CMFC02点击记录View, CView)

BEGIN_MESSAGE_MAP(CMFC02点击记录View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC02点击记录View 构造/析构
int flag;
CMFC02点击记录View::CMFC02点击记录View()
{
	// TODO: 在此处添加构造代码
	flag = 0;
}

CMFC02点击记录View::~CMFC02点击记录View()
{
}

BOOL CMFC02点击记录View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC02点击记录View 绘制

void CMFC02点击记录View::OnDraw(CDC* pDC)
{
	CMFC02点击记录Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString ss = _T("鼠标左键点击数：");
	CString s=_T("");
	if (flag)
		s.Format(_T("%d"),pDoc->count);
	ss += s;
	pDC->TextOutW(100,100,ss);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC02点击记录View 诊断

#ifdef _DEBUG
void CMFC02点击记录View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC02点击记录View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC02点击记录Doc* CMFC02点击记录View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC02点击记录Doc)));
	return (CMFC02点击记录Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC02点击记录View 消息处理程序


void CMFC02点击记录View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFC02点击记录Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC02点击记录View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 1;
	Invalidate();
	CView::OnRButtonDown(nFlags, point);
}
