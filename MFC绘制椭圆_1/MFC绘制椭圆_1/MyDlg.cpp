// MyDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC������Բ_1.h"
#include "MyDlg.h"
#include "afxdialogex.h"


// MyDlg �Ի���

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, cre_top(0)
	, cre_bottom(0)
	, cre_left(0)
	, cre_right(0)
{

}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT3, cre_top);
	DDX_Text(pDX, IDC_EDIT1, cre_bottom);
	DDX_Text(pDX, IDC_EDIT2, cre_left);
	DDX_Text(pDX, IDC_EDIT4, cre_right);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
END_MESSAGE_MAP()


// MyDlg ��Ϣ�������
