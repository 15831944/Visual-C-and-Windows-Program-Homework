// DLG_show.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ѧ����Ϣ����ϵͳ.h"
#include "DLG_show.h"
#include "afxdialogex.h"


// DLG_show �Ի���

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


// DLG_show ��Ϣ�������


void DLG_show::OnPaint()
{
	CPaintDC dc(this); // device context for painting
			   // TODO: �ڴ˴������Ϣ����������
	
}
