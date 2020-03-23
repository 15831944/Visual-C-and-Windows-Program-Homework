
// MFC矩形的变换View.cpp : CMFC矩形的变换View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC矩形的变换.h"
#endif

#include "MFC矩形的变换Doc.h"
#include "MFC矩形的变换View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC矩形的变换View

IMPLEMENT_DYNCREATE(CMFC矩形的变换View, CView)

BEGIN_MESSAGE_MAP(CMFC矩形的变换View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC矩形的变换View 构造/析构

CMFC矩形的变换View::CMFC矩形的变换View()
{
	// TODO: 在此处添加构造代码
	rect.top = 300;
	rect.bottom = 200;
	rect.right = 300;
	rect.left = 200;
}

CMFC矩形的变换View::~CMFC矩形的变换View()
{
}

BOOL CMFC矩形的变换View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC矩形的变换View 绘制

void CMFC矩形的变换View::OnDraw(CDC* pDC)
{
	CMFC矩形的变换Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(&rect);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC矩形的变换View 诊断

#ifdef _DEBUG
void CMFC矩形的变换View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC矩形的变换View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC矩形的变换Doc* CMFC矩形的变换View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC矩形的变换Doc)));
	return (CMFC矩形的变换Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC矩形的变换View 消息处理程序


void CMFC矩形的变换View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect clientRec;
	switch (nChar)
	{
	case VK_LEFT:
		
		rect.right -= 10;
		rect.left -= 10;
		break;
	case VK_RIGHT:
		rect.right += 10;
		rect.left += 10;
		break;
	case VK_UP:
		rect.bottom -= 10;
		rect.top -= 10;
		break;
	case VK_DOWN:
		rect.bottom += 10;
		rect.top += 10;
		break;
	case VK_HOME:
		rect.bottom -= 5;
		rect.left -= 5;
		break;
	case VK_END:
		if (rect.bottom + 5 < rect.top)
		{
			rect.bottom += 5;
			rect.left += 5;
		}
		else
			rect.bottom = rect.left =rect.right=rect.top;
		break;
	}
	InvalidateRect(NULL, true);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CMFC矩形的变换View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	rect.top = 300;
	rect.bottom = 200;
	rect.right = 300;
	rect.left = 200;
	InvalidateRect(NULL, true);
	CView::OnLButtonDown(nFlags, point);
}
