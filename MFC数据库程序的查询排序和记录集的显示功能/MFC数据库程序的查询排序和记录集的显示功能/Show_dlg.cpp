// Show_dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����.h"
#include "Show_dlg.h"
#include "afxdialogex.h"
#include "MainFrm.h"
#include "MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc.h"
#include "MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����View.h"


// Show_dlg �Ի���

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


// Show_dlg ��Ϣ�������


void Show_dlg::OnPaint()
{
	CPaintDC dc(this);

	CMainFrame* pMainFrame = (CMainFrame*)AfxGetMainWnd();
	CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����View* pView = (CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����View*)pMainFrame->GetActiveView();
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
