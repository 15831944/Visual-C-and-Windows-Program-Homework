// DLG_order.cpp : 实现文件
//

#include "stdafx.h"
#include "学生信息管理系统.h"
#include "DLG_order.h"
#include "afxdialogex.h"


// DLG_order 对话框

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


// DLG_order 消息处理程序
