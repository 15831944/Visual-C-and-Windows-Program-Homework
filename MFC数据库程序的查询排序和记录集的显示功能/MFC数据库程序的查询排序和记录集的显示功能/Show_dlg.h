#pragma once


// Show_dlg �Ի���

class Show_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Show_dlg)

public:
	Show_dlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Show_dlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
