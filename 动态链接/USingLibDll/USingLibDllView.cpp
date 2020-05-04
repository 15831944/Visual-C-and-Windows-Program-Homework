
// USingLibDllView.cpp : CUSingLibDllView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "USingLibDll.h"
#endif

#include "USingLibDllDoc.h"
#include "USingLibDllView.h"
#include "Win32D.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUSingLibDllView

IMPLEMENT_DYNCREATE(CUSingLibDllView, CView)

BEGIN_MESSAGE_MAP(CUSingLibDllView, CView)
END_MESSAGE_MAP()

// CUSingLibDllView 构造/析构

CUSingLibDllView::CUSingLibDllView()
{
	// TODO: 在此处添加构造代码

}

CUSingLibDllView::~CUSingLibDllView()
{
}

BOOL CUSingLibDllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CUSingLibDllView 绘制

void CUSingLibDllView::OnDraw(CDC* pDC)
{
	CUSingLibDllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s;
	int n = 5;
	int a = factorial(n);
	if (a>0)
		s.Format(_T("%d的阶乘为：%d"), n, a);
	else
		s.Format(_T("%d数值不在本算法定义范围"), n);
	pDC->TextOutW(100, 200, s);


	CString s2;
	float edg = 30.0;
	FAC a1;
	float ans = a1.convert(edg);
	s2.Format(_T("convert(30.0) 的值:%f"), a1.convert(edg));
	pDC->TextOutW(100, 300, s2);
	// TODO: 在此处为本机数据添加绘制代码
}


// CUSingLibDllView 诊断

#ifdef _DEBUG
void CUSingLibDllView::AssertValid() const
{
	CView::AssertValid();
}

void CUSingLibDllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUSingLibDllDoc* CUSingLibDllView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUSingLibDllDoc)));
	return (CUSingLibDllDoc*)m_pDocument;
}
#endif //_DEBUG


// CUSingLibDllView 消息处理程序
