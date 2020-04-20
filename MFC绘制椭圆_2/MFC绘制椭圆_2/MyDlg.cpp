// MyDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC绘制椭圆_2.h"
#include "MyDlg.h"
#include "afxdialogex.h"


// MyDlg 对话框

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, top(0)
	, bottom(0)
	, left(0)
	, right(0)
{

}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, top);
	DDX_Text(pDX, IDC_EDIT2, bottom);
	DDX_Text(pDX, IDC_EDIT3, left);
	DDX_Text(pDX, IDC_EDIT4, right);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
END_MESSAGE_MAP()


// MyDlg 消息处理程序
