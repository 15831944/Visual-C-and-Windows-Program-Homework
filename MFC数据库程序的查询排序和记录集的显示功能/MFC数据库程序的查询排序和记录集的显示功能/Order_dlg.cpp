// Order_dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC数据库程序的查询排序和记录集的显示功能.h"
#include "Order_dlg.h"
#include "afxdialogex.h"


// Order_dlg 对话框

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


// Order_dlg 消息处理程序
