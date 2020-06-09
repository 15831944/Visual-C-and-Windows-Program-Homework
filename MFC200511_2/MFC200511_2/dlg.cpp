// dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC200511_2.h"
#include "dlg.h"
#include "afxdialogex.h"


// dlg 对话框

IMPLEMENT_DYNAMIC(dlg, CDialogEx)

dlg::dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MFC200511_2_FORM, pParent)
{

}

dlg::~dlg()
{
}

void dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(dlg, CDialogEx)
END_MESSAGE_MAP()


// dlg 消息处理程序
