
// MFC_ShowJPG_1View.cpp : CMFC_ShowJPG_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC_ShowJPG_1.h"
#endif

#include "MFC_ShowJPG_1Doc.h"
#include "MFC_ShowJPG_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_ShowJPG_1View

IMPLEMENT_DYNCREATE(CMFC_ShowJPG_1View, CView)

BEGIN_MESSAGE_MAP(CMFC_ShowJPG_1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMFC_ShowJPG_1View::OnFileOpen)
END_MESSAGE_MAP()

// CMFC_ShowJPG_1View 构造/析构

CMFC_ShowJPG_1View::CMFC_ShowJPG_1View()
{
	// TODO: 在此处添加构造代码

}

CMFC_ShowJPG_1View::~CMFC_ShowJPG_1View()
{
}

BOOL CMFC_ShowJPG_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC_ShowJPG_1View 绘制

void CMFC_ShowJPG_1View::OnDraw(CDC* /*pDC*/)
{
	CMFC_ShowJPG_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC_ShowJPG_1View 诊断

#ifdef _DEBUG
void CMFC_ShowJPG_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_ShowJPG_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_ShowJPG_1Doc* CMFC_ShowJPG_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_ShowJPG_1Doc)));
	return (CMFC_ShowJPG_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_ShowJPG_1View 消息处理程序


void CMFC_ShowJPG_1View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);//打开文件
	int r = cfd.DoModal();//弹出的对话框
	CClientDC dc(this);
	if (r == IDOK)//
	{
		CString filename = cfd.GetPathName();
		dc.TextOutW(0, 0, filename);
		CImage img;
		img.Load(filename);
		float w, h, sx, sy;
		CRect rect;
		GetClientRect(&rect);
		sx = (rect.Width()- img.GetWidth())/2;
		sy = (rect.Height() - img.GetHeight())/2;		
		img.Draw(dc.m_hDC, sx, sy, img.GetWidth(),img.GetHeight());
	}
}
