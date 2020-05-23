
// MFC对话框文件名显示_1View.cpp : CMFC对话框文件名显示_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC对话框文件名显示_1.h"
#endif

#include "MFC对话框文件名显示_1Doc.h"
#include "MFC对话框文件名显示_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC对话框文件名显示_1View

IMPLEMENT_DYNCREATE(CMFC对话框文件名显示_1View, CView)

BEGIN_MESSAGE_MAP(CMFC对话框文件名显示_1View, CView)
	ON_COMMAND(ID_Show_1, &CMFC对话框文件名显示_1View::OnShow1)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMFC对话框文件名显示_1View 构造/析构

CMFC对话框文件名显示_1View::CMFC对话框文件名显示_1View()
{
	// TODO: 在此处添加构造代码
	fileName=_T("");
}

CMFC对话框文件名显示_1View::~CMFC对话框文件名显示_1View()
{
}

BOOL CMFC对话框文件名显示_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC对话框文件名显示_1View 绘制

void CMFC对话框文件名显示_1View::OnDraw(CDC* /*pDC*/)
{
	CMFC对话框文件名显示_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC对话框文件名显示_1View 诊断

#ifdef _DEBUG
void CMFC对话框文件名显示_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC对话框文件名显示_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC对话框文件名显示_1Doc* CMFC对话框文件名显示_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC对话框文件名显示_1Doc)));
	return (CMFC对话框文件名显示_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC对话框文件名显示_1View 消息处理程序

#include "Dlg1.h"
void CMFC对话框文件名显示_1View::OnShow1()
{
	// TODO: 在此添加命令处理程序代码
	Dlg1 dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		dlg.path = fileName;
	}
}


void CMFC对话框文件名显示_1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Invalidate();
	CString szFilters = _T("Doc Files (*.doc)|*.doc|All Files (*.*)|*.*||");
	CFileDialog fileDlg(TRUE, NULL, NULL, OFN_FILEMUSTEXIST | OFN_HIDEREADONLY, szFilters, this);
	if (fileDlg.DoModal() == IDOK)

	{

		fileName = fileDlg.GetFileTitle();//将当前窗口的标题设置为打开文件的名字
		GetDC()->TextOutW(200, 200, fileName);

	}
	CView::OnLButtonDblClk(nFlags, point);
}
