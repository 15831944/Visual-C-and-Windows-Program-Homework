// Dlg1.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC�Ի����ļ�����ʾ_1.h"
#include "Dlg1.h"
#include "afxdialogex.h"
#include "MainFrm.h"
#include "MFC�Ի����ļ�����ʾ_1Doc.h"
#include "MFC�Ի����ļ�����ʾ_1View.h"

// Dlg1 �Ի���

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
	CMFC�Ի����ļ�����ʾ_1View* pView = (CMFC�Ի����ļ�����ʾ_1View*)pMainFrame->GetActiveView();
	path = pView->fileName;
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, path);

	DDX_Control(pDX, IDC_LIST1, lBox);
}


BEGIN_MESSAGE_MAP(Dlg1, CDialogEx)
END_MESSAGE_MAP()


// Dlg1 ��Ϣ�������


BOOL Dlg1::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	lBox.AddString(path);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
