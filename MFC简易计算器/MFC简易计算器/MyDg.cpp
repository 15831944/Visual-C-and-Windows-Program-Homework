// MyDg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC简易计算器.h"
#include "MyDg.h"
#include "afxdialogex.h"


// MyDg 对话框

IMPLEMENT_DYNAMIC(MyDg, CDialogEx)

MyDg::MyDg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MFC_DIALOG, pParent)
{

}

MyDg::~MyDg()
{
}

void MyDg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MyDg, CDialogEx)
END_MESSAGE_MAP()


// MyDg 消息处理程序
