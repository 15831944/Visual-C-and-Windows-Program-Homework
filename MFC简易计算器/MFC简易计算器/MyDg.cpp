// MyDg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC���׼�����.h"
#include "MyDg.h"
#include "afxdialogex.h"


// MyDg �Ի���

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


// MyDg ��Ϣ�������
