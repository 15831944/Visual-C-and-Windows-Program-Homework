// ShowWord_dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC数据库程序的查询排序和记录集的显示功能.h"
#include "ShowWord_dlg.h"
#include "afxdialogex.h"

#include "MainFrm.h"
#include "MFC数据库程序的查询排序和记录集的显示功能Doc.h"
#include "MFC数据库程序的查询排序和记录集的显示功能View.h"
// ShowWord_dlg 对话框

IMPLEMENT_DYNAMIC(ShowWord_dlg, CDialogEx)

ShowWord_dlg::ShowWord_dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG6, pParent)
	,s(_T(""))
	, ii(_T(""))
	, sstr(_T(""))
{

}

ShowWord_dlg::~ShowWord_dlg()
{
}

void ShowWord_dlg::DoDataExchange(CDataExchange* pDX)
{
	CMainFrame* pMainFrame = (CMainFrame*)AfxGetMainWnd();
	CMFC数据库程序的查询排序和记录集的显示功能View* pView = (CMFC数据库程序的查询排序和记录集的显示功能View*)pMainFrame->GetActiveView();
	//ii = pView->ss;
	//sstr= pView->ss;

	CDialogEx::DoDataExchange(pDX);

	DDX_Text(pDX, IDC_EDIT1, sstr);
}


BEGIN_MESSAGE_MAP(ShowWord_dlg, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// ShowWord_dlg 消息处理程序


void ShowWord_dlg::OnPaint()
{
	CPaintDC dc(this); // device context for painting


}
