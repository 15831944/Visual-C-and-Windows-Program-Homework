
// MFC键盘输入_1View.cpp : CMFC键盘输入_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC键盘输入_1.h"
#endif

#include "MFC键盘输入_1Doc.h"
#include "MFC键盘输入_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC键盘输入_1View

IMPLEMENT_DYNCREATE(CMFC键盘输入_1View, CView)

BEGIN_MESSAGE_MAP(CMFC键盘输入_1View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CMFC键盘输入_1View 构造/析构

CMFC键盘输入_1View::CMFC键盘输入_1View()
{
	// TODO: 在此处添加构造代码
	s = "";
	r.left = 20; r.right = 290;
	r.top = 20; r.bottom = 60;
	p.x = 30; p.y=30;
}

CMFC键盘输入_1View::~CMFC键盘输入_1View()
{
}

BOOL CMFC键盘输入_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC键盘输入_1View 绘制

void CMFC键盘输入_1View::OnDraw(CDC* pDC)
{
	CMFC键盘输入_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(r);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC键盘输入_1View 打印

BOOL CMFC键盘输入_1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFC键盘输入_1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMFC键盘输入_1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMFC键盘输入_1View 诊断

#ifdef _DEBUG
void CMFC键盘输入_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC键盘输入_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC键盘输入_1Doc* CMFC键盘输入_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC键盘输入_1Doc)));
	return (CMFC键盘输入_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC键盘输入_1View 消息处理程序


void CMFC键盘输入_1View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	TEXTMETRIC t;
	dc.GetTextMetrics(&t);
	CSize sz = dc.GetTextExtent(s);
	CPoint pt;
	pt.x = p.x + sz.cx;
	pt.y = p.y + sz.cy;
	SetCaretPos(pt);
	if (pt.x<r.right-15)
	if (0x08 == nChar)//退格键的删除处理
	{
		COLORREF clr = dc.SetTextColor(dc.GetBkColor());
		dc.TextOutW(p.x, p.y, s);
		s = s.Left(s.GetLength() - 1);
		dc.SetTextColor(clr);
	}
	else
	{
		s += (TCHAR)nChar;
	}	
	dc.TextOutW(p.x, p.y, s);
	CView::OnChar(nChar, nRepCnt, nFlags);
}
