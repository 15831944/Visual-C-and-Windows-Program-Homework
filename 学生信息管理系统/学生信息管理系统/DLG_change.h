#pragma once


// DLG_change �Ի���

class DLG_change : public CDialogEx
{
	DECLARE_DYNAMIC(DLG_change)

public:
	DLG_change(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DLG_change();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_change };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
