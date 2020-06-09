// SHOW_DLG.cpp : 实现文件
//

#include "stdafx.h"
#include "Mfc_Stu_Photo_Big_Show.h"
#include "SHOW_DLG.h"
#include "afxdialogex.h"
#include "MainFrm.h"
#include "Mfc_Stu_Photo_Big_ShowDoc.h"
#include "Mfc_Stu_Photo_Big_ShowView.h"
// SHOW_DLG 对话框

IMPLEMENT_DYNAMIC(SHOW_DLG, CDialogEx)

SHOW_DLG::SHOW_DLG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_BIGSHOW, pParent)
{
	//OnPaint();
}

SHOW_DLG::~SHOW_DLG()
{
}

void SHOW_DLG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(SHOW_DLG, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// SHOW_DLG 消息处理程序


void SHOW_DLG::OnPaint()
{
	CPaintDC dc(this); 

	CMainFrame* pMainFrame = (CMainFrame*)AfxGetMainWnd();
	CMfc_Stu_Photo_Big_ShowView* pView = (CMfc_Stu_Photo_Big_ShowView*)pMainFrame->GetActiveView();
	CImage img;
	img.Load(pView->path);
	CWnd * pWnd = GetDlgItem(IDC_SHOW);
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
	//img.StretchBlt(pDC->m_hDC, rect);


}
