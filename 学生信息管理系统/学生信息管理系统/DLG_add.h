#pragma once


// DLG_add �Ի���

class DLG_add : public CDialogEx
{
	DECLARE_DYNAMIC(DLG_add)

public:
	DLG_add(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DLG_add();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_change };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
