#pragma once


// DLG_select �Ի���

class DLG_select : public CDialogEx
{
	DECLARE_DYNAMIC(DLG_select)

public:
	DLG_select(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DLG_select();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_search };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString select;
};
