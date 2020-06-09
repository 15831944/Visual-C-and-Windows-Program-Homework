// Dlg0.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC200511_1.h"
#include "Dlg0.h"
#include "afxdialogex.h"


// Dlg0 对话框

IMPLEMENT_DYNAMIC(Dlg0, CDialogEx)

Dlg0::Dlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MFC200511_1_FORM, pParent)
{

}

Dlg0::~Dlg0()
{
}

void Dlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Dlg0, CDialogEx)
END_MESSAGE_MAP()


// Dlg0 消息处理程序
