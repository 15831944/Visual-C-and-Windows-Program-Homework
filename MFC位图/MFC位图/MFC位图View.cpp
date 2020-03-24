
// MFC位图View.cpp : CMFC位图View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC位图.h"
#endif

#include "MFC位图Doc.h"
#include "MFC位图View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC位图View

IMPLEMENT_DYNCREATE(CMFC位图View, CView)

BEGIN_MESSAGE_MAP(CMFC位图View, CView)
END_MESSAGE_MAP()

// CMFC位图View 构造/析构

CMFC位图View::CMFC位图View()
{
	// TODO: 在此处添加构造代码
	BITMAP BM;
	m_Bitmap.LoadMappedBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CMFC位图View::~CMFC位图View()
{
}

BOOL CMFC位图View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC位图View 绘制

void CMFC位图View::OnDraw(CDC* pDC)
{
	CMFC位图Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC位图View 诊断

#ifdef _DEBUG
void CMFC位图View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC位图View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC位图Doc* CMFC位图View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC位图Doc)));
	return (CMFC位图Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC位图View 消息处理程序
