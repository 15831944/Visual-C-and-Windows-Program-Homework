// DLG_Showpic.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ѧ����Ϣ����ϵͳ.h"
#include "DLG_Showpic.h"
#include "afxdialogex.h"
#include "MainFrm.h"
#include "ѧ����Ϣ����ϵͳDoc.h"
#include "ѧ����Ϣ����ϵͳView.h"

// DLG_Showpic �Ի���

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


// DLG_Showpic ��Ϣ�������


void DLG_Showpic::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	CMainFrame* pMainFrame = (CMainFrame*)AfxGetMainWnd();
	Cѧ����Ϣ����ϵͳView* pView = (Cѧ����Ϣ����ϵͳView*)pMainFrame->GetActiveView();
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
	img.Destroy();					   // ��Ϊ��ͼ��Ϣ���� CDialogEx::OnPaint()
}
