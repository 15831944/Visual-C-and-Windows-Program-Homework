#pragma once
#include "afxwin.h"


// ShowWord_dlg �Ի���

class ShowWord_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(ShowWord_dlg)

public:
	ShowWord_dlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ShowWord_dlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG6 };
#endif
	
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString s;
	afx_msg void OnPaint();
	CString ii;
	CString sstr;
};
