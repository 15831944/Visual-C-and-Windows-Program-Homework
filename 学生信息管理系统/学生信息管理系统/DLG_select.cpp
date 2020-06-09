// DLG_select.cpp : 实现文件
//

#include "stdafx.h"
#include "学生信息管理系统.h"
#include "DLG_select.h"
#include "afxdialogex.h"


// DLG_select 对话框

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


// DLG_select 消息处理程序
