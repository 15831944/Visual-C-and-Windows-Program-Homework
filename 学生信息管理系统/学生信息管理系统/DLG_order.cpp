// DLG_order.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ѧ����Ϣ����ϵͳ.h"
#include "DLG_order.h"
#include "afxdialogex.h"


// DLG_order �Ի���

IMPLEMENT_DYNAMIC(DLG_order, CDialogEx)

DLG_order::DLG_order(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_orderby, pParent)
	, order(_T(""))
{

}

DLG_order::~DLG_order()
{
}

void DLG_order::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, order);
}


BEGIN_MESSAGE_MAP(DLG_order, CDialogEx)
END_MESSAGE_MAP()


// DLG_order ��Ϣ�������
