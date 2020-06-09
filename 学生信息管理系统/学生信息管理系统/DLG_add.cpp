// DLG_add.cpp : 实现文件
//

#include "stdafx.h"
#include "学生信息管理系统.h"
#include "DLG_add.h"
#include "afxdialogex.h"


// DLG_add 对话框

IMPLEMENT_DYNAMIC(DLG_add, CDialogEx)

DLG_add::DLG_add(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_change, pParent)
{

}

DLG_add::~DLG_add()
{
}

void DLG_add::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DLG_add, CDialogEx)
END_MESSAGE_MAP()


// DLG_add 消息处理程序
