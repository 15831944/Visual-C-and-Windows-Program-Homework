
// MFC01显示学生名字View.cpp : CMFC01显示学生名字View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC01显示学生名字.h"
#endif

#include "MFC01显示学生名字Doc.h"
#include "MFC01显示学生名字View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC01显示学生名字View

IMPLEMENT_DYNCREATE(CMFC01显示学生名字View, CView)

BEGIN_MESSAGE_MAP(CMFC01显示学生名字View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC01显示学生名字View 构造/析构
int flag;
CMFC01显示学生名字View::CMFC01显示学生名字View()
{
	// TODO: 在此处添加构造代码
	flag = 0;
}

CMFC01显示学生名字View::~CMFC01显示学生名字View()
{
}

BOOL CMFC01显示学生名字View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC01显示学生名字View 绘制

void CMFC01显示学生名字View::OnDraw(CDC* pDC)
{
	CMFC01显示学生名字Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s=_T("我的名字是：");
	if (flag)
	{
		s+=pDoc->name;
	}
	pDC->TextOutW(200, 200, s);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC01显示学生名字View 诊断

#ifdef _DEBUG
void CMFC01显示学生名字View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC01显示学生名字View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC01显示学生名字Doc* CMFC01显示学生名字View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC01显示学生名字Doc)));
	return (CMFC01显示学生名字Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC01显示学生名字View 消息处理程序


void CMFC01显示学生名字View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 1;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
