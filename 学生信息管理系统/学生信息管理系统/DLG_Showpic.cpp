// DLG_Showpic.cpp : 实现文件
//

#include "stdafx.h"
#include "学生信息管理系统.h"
#include "DLG_Showpic.h"
#include "afxdialogex.h"
#include "MainFrm.h"
#include "学生信息管理系统Doc.h"
#include "学生信息管理系统View.h"

// DLG_Showpic 对话框

IMPLEMENT_DYNAMIC(DLG_Showpic, CDialogEx)

DLG_Showpic::DLG_Showpic(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_showpic, pParent)
{

}

DLG_Showpic::~DLG_Showpic()
{
}

void DLG_Showpic::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DLG_Showpic, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// DLG_Showpic 消息处理程序


void DLG_Showpic::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	CMainFrame* pMainFrame = (CMainFrame*)AfxGetMainWnd();
	C学生信息管理系统View* pView = (C学生信息管理系统View*)pMainFrame->GetActiveView();
	CString s = pView->path + "\\\\" + pView->picname;
	//dc.TextOutW(299, 200, s);
	CImage img;
	img.Load(s);
	CDC* pDC = GetDlgItem(IDC_Showbig)->GetDC();
	CRect rect;
	GetDlgItem(IDC_Showbig)->GetClientRect(&rect);
	SetStretchBltMode(pDC->m_hDC, STRETCH_HALFTONE);

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
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	img.Destroy();					   // 不为绘图消息调用 CDialogEx::OnPaint()
}
