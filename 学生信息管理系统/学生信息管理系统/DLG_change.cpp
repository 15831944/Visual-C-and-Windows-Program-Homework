// DLG_change.cpp : 实现文件
//

#include "stdafx.h"
#include "学生信息管理系统.h"
#include "DLG_change.h"
#include "afxdialogex.h"


// DLG_change 对话框

IMPLEMENT_DYNAMIC(DLG_change, CDialogEx)

DLG_change::DLG_change(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_change, pParent)
{

}

DLG_change::~DLG_change()
{
}

void DLG_change::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DLG_change, CDialogEx)
END_MESSAGE_MAP()


// DLG_change 消息处理程序
