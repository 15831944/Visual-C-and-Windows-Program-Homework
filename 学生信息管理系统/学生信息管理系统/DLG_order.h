#pragma once


// DLG_order �Ի���

class DLG_order : public CDialogEx
{
	DECLARE_DYNAMIC(DLG_order)

public:
	DLG_order(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DLG_order();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_orderby };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString order;
};
