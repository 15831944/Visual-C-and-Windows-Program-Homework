// DLG_select.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ѧ����Ϣ����ϵͳ.h"
#include "DLG_select.h"
#include "afxdialogex.h"


// DLG_select �Ի���

IMPLEMENT_DYNAMIC(DLG_select, CDialogEx)

DLG_select::DLG_select(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_search, pParent)
	, select(_T(""))
{

}

DLG_select::~DLG_select()
{
}

void DLG_select::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, select);
}


BEGIN_MESSAGE_MAP(DLG_select, CDialogEx)
END_MESSAGE_MAP()


// DLG_select ��Ϣ�������
