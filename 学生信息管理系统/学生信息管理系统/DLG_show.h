#pragma once
#include "afxcmn.h"


// DLG_show �Ի���

class DLG_show : public CDialogEx
{
	DECLARE_DYNAMIC(DLG_show)

public:
	DLG_show(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DLG_show();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_show };
#endif
	CString s;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();

	CString out;
};
