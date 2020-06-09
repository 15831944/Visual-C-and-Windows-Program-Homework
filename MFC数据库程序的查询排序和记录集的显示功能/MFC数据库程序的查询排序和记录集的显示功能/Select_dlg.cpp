// Select_dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC数据库程序的查询排序和记录集的显示功能.h"
#include "Select_dlg.h"
#include "afxdialogex.h"


// Select_dlg 对话框

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


// Select_dlg 消息处理程序
