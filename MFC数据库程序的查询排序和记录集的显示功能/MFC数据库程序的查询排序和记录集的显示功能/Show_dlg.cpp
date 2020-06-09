// Show_dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC数据库程序的查询排序和记录集的显示功能.h"
#include "Show_dlg.h"
#include "afxdialogex.h"
#include "MainFrm.h"
#include "MFC数据库程序的查询排序和记录集的显示功能Doc.h"
#include "MFC数据库程序的查询排序和记录集的显示功能View.h"


// Show_dlg 对话框

IMPLEMENT_DYNAMIC(Show_dlg, CDialogEx)

Show_dlg::Show_dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

Show_dlg::~Show_dlg()
{
}

void Show_dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Show_dlg, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// Show_dlg 消息处理程序


void Show_dlg::OnPaint()
{
	CPaintDC dc(this);

	CMainFrame* pMainFrame = (CMainFrame*)AfxGetMainWnd();
	CMFC数据库程序的查询排序和记录集的显示功能View* pView = (CMFC数据库程序的查询排序和记录集的显示功能View*)pMainFrame->GetActiveView();
	CImage img;
	img.Load(pView->path);
	CWnd * pWnd = GetDlgItem(IDC_STATIC_showpic);
	CDC* pDC = pWnd->GetDC();
	CRect rect;
	pWnd->GetClientRect(&rect);

	int sx, sy, w, h;
	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	SetStretchBltMode(pDC->m_hDC, HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
}
