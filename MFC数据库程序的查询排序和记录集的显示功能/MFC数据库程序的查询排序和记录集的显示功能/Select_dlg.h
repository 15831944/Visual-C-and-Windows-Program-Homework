#pragma once


// Select_dlg �Ի���

class Select_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Select_dlg)

public:
	Select_dlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Select_dlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString selec;
};
