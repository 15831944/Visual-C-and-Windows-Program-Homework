// DLG_show.cpp : 实现文件
//

#include "stdafx.h"
#include "学生信息管理系统.h"
#include "DLG_show.h"
#include "afxdialogex.h"


// DLG_show 对话框

IMPLEMENT_DYNAMIC(DLG_show, CDialogEx)

DLG_show::DLG_show(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_show, pParent)
	, out(_T(""))
{

}

DLG_show::~DLG_show()
{
}

void DLG_show::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);


	DDX_Text(pDX, IDC_EDIT1, out);
}


BEGIN_MESSAGE_MAP(DLG_show, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// DLG_show 消息处理程序


void DLG_show::OnPaint()
{
	CPaintDC dc(this); // device context for painting
			   // TODO: 在此处添加消息处理程序代码
	
}
