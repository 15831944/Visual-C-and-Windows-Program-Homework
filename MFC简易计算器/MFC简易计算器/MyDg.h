#pragma once


// MyDg �Ի���

class MyDg : public CDialogEx
{
	DECLARE_DYNAMIC(MyDg)

public:
	MyDg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyDg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
