// Change_dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����.h"
#include "Change_dlg.h"
#include "afxdialogex.h"


// Change_dlg �Ի���

IMPLEMENT_DYNAMIC(Change_dlg, CDialogEx)

Change_dlg::Change_dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG4, pParent)
	, num(0)
	, name(_T(""))
	, sex(_T(""))
	, nianxin(0)
	, pic_addrress(_T(""))
	, o(_T(""))
{

}

Change_dlg::~Change_dlg()
{
}


#include "MainFrm.h"
#include "MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc.h"
#include "MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����View.h"

void Change_dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, num);
	DDX_Text(pDX, IDC_EDIT2, name);
	DDX_Text(pDX, IDC_EDIT4, sex);
	DDX_Text(pDX, IDC_EDIT3, nianxin);
	DDX_Text(pDX, IDC_EDIT5, pic_addrress);
	DDX_Text(pDX, IDC_EDIT6, o);
	CMainFrame* pMainFrame = (CMainFrame*)AfxGetMainWnd();
	CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����View* pView = (CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����View*)pMainFrame->GetActiveView();
	//num = pView->a1;
	//name = pView->a2;
	//sex = pView->a3;
	//nianxin = pView->a4;
	//pic_addrress = pView->a5;

}


BEGIN_MESSAGE_MAP(Change_dlg, CDialogEx)
END_MESSAGE_MAP()


// Change_dlg ��Ϣ�������
