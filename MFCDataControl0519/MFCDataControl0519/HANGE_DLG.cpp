// HANGE_DLG.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCDataControl0519.h"
#include "HANGE_DLG.h"
#include "afxdialogex.h"


// CHANGE_DLG 对话框

IMPLEMENT_DYNAMIC(CHANGE_DLG, CDialogEx)

CHANGE_DLG::CHANGE_DLG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_CHANGE, pParent)
	, sno(0)
	, point(0)
{

}

CHANGE_DLG::~CHANGE_DLG()
{
}

void CHANGE_DLG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, sno);
	DDX_Text(pDX, IDC_EDIT2, point);
}


BEGIN_MESSAGE_MAP(CHANGE_DLG, CDialogEx)
END_MESSAGE_MAP()


// CHANGE_DLG 消息处理程序
