// MyDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC������Բ_4.h"
#include "MyDlg.h"
#include "afxdialogex.h"


// MyDlg �Ի���

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, red(0)
	, green(0)
	, blue(0)
{

}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, red);
	DDX_Text(pDX, IDC_EDIT2, green);
	DDX_Text(pDX, IDC_EDIT3, blue);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
END_MESSAGE_MAP()


// MyDlg ��Ϣ�������
