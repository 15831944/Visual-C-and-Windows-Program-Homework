// ADD_dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����.h"
#include "ADD_dlg.h"
#include "afxdialogex.h"


// ADD_dlg �Ի���

IMPLEMENT_DYNAMIC(ADD_dlg, CDialogEx)

ADD_dlg::ADD_dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG5, pParent)
	, num(0)
	, name(_T(""))
	, sex(_T(""))
	, nianxin(0)
	, pic_address(_T(""))
	, kong(_T(""))
{

}

ADD_dlg::~ADD_dlg()
{
}

void ADD_dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT7, num);
	DDX_Text(pDX, IDC_EDIT8, name);
	DDX_Text(pDX, IDC_EDIT9, sex);
	DDX_Text(pDX, IDC_EDIT10, nianxin);
	DDX_Text(pDX, IDC_EDIT11, pic_address);
	DDX_Text(pDX, IDC_EDIT12, kong);
}


BEGIN_MESSAGE_MAP(ADD_dlg, CDialogEx)
END_MESSAGE_MAP()


// ADD_dlg ��Ϣ�������
