// Dlg1.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC对话框文件名显示_1.h"
#include "Dlg1.h"
#include "afxdialogex.h"
#include "MainFrm.h"
#include "MFC对话框文件名显示_1Doc.h"
#include "MFC对话框文件名显示_1View.h"

// Dlg1 对话框

IMPLEMENT_DYNAMIC(Dlg1, CDialogEx)

Dlg1::Dlg1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, path(_T(""))
{

}

Dlg1::~Dlg1()
{
}

void Dlg1::DoDataExchange(CDataExchange* pDX)
{
	CMainFrame* pMainFrame = (CMainFrame*)AfxGetMainWnd();
	CMFC对话框文件名显示_1View* pView = (CMFC对话框文件名显示_1View*)pMainFrame->GetActiveView();
	path = pView->fileName;
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, path);

	DDX_Control(pDX, IDC_LIST1, lBox);
}


BEGIN_MESSAGE_MAP(Dlg1, CDialogEx)
END_MESSAGE_MAP()


// Dlg1 消息处理程序


BOOL Dlg1::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	lBox.AddString(path);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
