#pragma once


// Order_dlg �Ի���

class Order_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Order_dlg)

public:
	Order_dlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Order_dlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString order;
};
