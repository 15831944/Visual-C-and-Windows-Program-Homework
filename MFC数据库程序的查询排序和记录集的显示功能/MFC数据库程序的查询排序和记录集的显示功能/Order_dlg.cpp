// Order_dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����.h"
#include "Order_dlg.h"
#include "afxdialogex.h"


// Order_dlg �Ի���

IMPLEMENT_DYNAMIC(Order_dlg, CDialogEx)

Order_dlg::Order_dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, order(_T(""))
{

}

Order_dlg::~Order_dlg()
{
}

void Order_dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, order);
}


BEGIN_MESSAGE_MAP(Order_dlg, CDialogEx)
END_MESSAGE_MAP()


// Order_dlg ��Ϣ�������
