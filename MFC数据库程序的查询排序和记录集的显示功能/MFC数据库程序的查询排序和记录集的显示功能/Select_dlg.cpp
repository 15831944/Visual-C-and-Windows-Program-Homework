// Select_dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����.h"
#include "Select_dlg.h"
#include "afxdialogex.h"


// Select_dlg �Ի���

IMPLEMENT_DYNAMIC(Select_dlg, CDialogEx)

Select_dlg::Select_dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG3, pParent)
	, selec(_T(""))
{

}

Select_dlg::~Select_dlg()
{
}

void Select_dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, selec);
}


BEGIN_MESSAGE_MAP(Select_dlg, CDialogEx)
END_MESSAGE_MAP()


// Select_dlg ��Ϣ�������
