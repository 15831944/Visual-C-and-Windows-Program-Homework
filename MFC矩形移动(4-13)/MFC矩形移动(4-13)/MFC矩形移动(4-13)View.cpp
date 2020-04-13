
// MFC矩形移动(4-13)View.cpp : CMFC矩形移动413View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC矩形移动(4-13).h"
#endif

#include "MFC矩形移动(4-13)Doc.h"
#include "MFC矩形移动(4-13)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC矩形移动413View

IMPLEMENT_DYNCREATE(CMFC矩形移动413View, CView)

BEGIN_MESSAGE_MAP(CMFC矩形移动413View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CMFC矩形移动413View 构造/析构

CMFC矩形移动413View::CMFC矩形移动413View()
{
	// TODO: 在此处添加构造代码
	m_bLButtonDown = false;
	m_ptMouse.x = 100;
	m_ptMouse.y = 100;
	rect.top = m_ptMouse.y - 50;
	rect.left = m_ptMouse.x - 50;
	rect.bottom = rect.top + 120;
	rect.right = rect.left + 120;
}

CMFC矩形移动413View::~CMFC矩形移动413View()
{
}




BOOL CMFC矩形移动413View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC矩形移动413View 绘制

void CMFC矩形移动413View::OnDraw(CDC* pDC)
{
	CMFC矩形移动413Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC矩形移动413View 打印

BOOL CMFC矩形移动413View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFC矩形移动413View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMFC矩形移动413View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMFC矩形移动413View 诊断

#ifdef _DEBUG
void CMFC矩形移动413View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC矩形移动413View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC矩形移动413Doc* CMFC矩形移动413View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC矩形移动413Doc)));
	return (CMFC矩形移动413Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC矩形移动413View 消息处理程序


void CMFC矩形移动413View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	m_bLButtonDown = true;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC矩形移动413View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	m_bLButtonDown = false;
	CView::OnLButtonUp(nFlags, point);
}


void CMFC矩形移动413View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (m_bLButtonDown == true)
	{
		if(rect.PtInRect(point))
		{
			m_ptMouse = point;
			Invalidate();
		}
	}
	CView::OnMouseMove(nFlags, point);
}


void CMFC矩形移动413View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CView::OnPaint()
	rect.top = m_ptMouse.y - 50;
	rect.left = m_ptMouse.x - 50;
	rect.bottom = rect.top + 120;
	rect.right = rect.left + 120;
	dc.Rectangle(&rect);
}
