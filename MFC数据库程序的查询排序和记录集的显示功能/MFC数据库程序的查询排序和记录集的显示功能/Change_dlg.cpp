// Change_dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC数据库程序的查询排序和记录集的显示功能.h"
#include "Change_dlg.h"
#include "afxdialogex.h"


// Change_dlg 对话框

IMPLEMENT_DYNAMIC(Change_dlg, CDialogEx)

Change_dlg::Change_dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG4, pParent)
	, num(0)
	, name(_T(""))
	, sex(_T(""))
	, nianxin(0)
	, pic_addrress(_T(""))
	, o(_T(""))
{

}

Change_dlg::~Change_dlg()
{
}


#include "MainFrm.h"
#include "MFC数据库程序的查询排序和记录集的显示功能Doc.h"
#include "MFC数据库程序的查询排序和记录集的显示功能View.h"

void Change_dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, num);
	DDX_Text(pDX, IDC_EDIT2, name);
	DDX_Text(pDX, IDC_EDIT4, sex);
	DDX_Text(pDX, IDC_EDIT3, nianxin);
	DDX_Text(pDX, IDC_EDIT5, pic_addrress);
	DDX_Text(pDX, IDC_EDIT6, o);
	CMainFrame* pMainFrame = (CMainFrame*)AfxGetMainWnd();
	CMFC数据库程序的查询排序和记录集的显示功能View* pView = (CMFC数据库程序的查询排序和记录集的显示功能View*)pMainFrame->GetActiveView();
	//num = pView->a1;
	//name = pView->a2;
	//sex = pView->a3;
	//nianxin = pView->a4;
	//pic_addrress = pView->a5;

}


BEGIN_MESSAGE_MAP(Change_dlg, CDialogEx)
END_MESSAGE_MAP()


// Change_dlg 消息处理程序
