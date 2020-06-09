#pragma once
#include "afxwin.h"


// ShowWord_dlg 对话框

class ShowWord_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(ShowWord_dlg)

public:
	ShowWord_dlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~ShowWord_dlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG6 };
#endif
	
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString s;
	afx_msg void OnPaint();
	CString ii;
	CString sstr;
};
