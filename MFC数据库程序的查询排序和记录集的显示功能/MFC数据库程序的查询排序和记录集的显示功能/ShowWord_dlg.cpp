// ShowWord_dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����.h"
#include "ShowWord_dlg.h"
#include "afxdialogex.h"

#include "MainFrm.h"
#include "MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc.h"
#include "MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����View.h"
// ShowWord_dlg �Ի���

IMPLEMENT_DYNAMIC(ShowWord_dlg, CDialogEx)

ShowWord_dlg::ShowWord_dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG6, pParent)
	,s(_T(""))
	, ii(_T(""))
	, sstr(_T(""))
{

}

ShowWord_dlg::~ShowWord_dlg()
{
}

void ShowWord_dlg::DoDataExchange(CDataExchange* pDX)
{
	CMainFrame* pMainFrame = (CMainFrame*)AfxGetMainWnd();
	CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����View* pView = (CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����View*)pMainFrame->GetActiveView();
	//ii = pView->ss;
	//sstr= pView->ss;

	CDialogEx::DoDataExchange(pDX);

	DDX_Text(pDX, IDC_EDIT1, sstr);
}


BEGIN_MESSAGE_MAP(ShowWord_dlg, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// ShowWord_dlg ��Ϣ�������


void ShowWord_dlg::OnPaint()
{
	CPaintDC dc(this); // device context for painting


}
