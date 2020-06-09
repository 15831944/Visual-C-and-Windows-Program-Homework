#pragma once
#include "afxcmn.h"


// DLG_show 对话框

class DLG_show : public CDialogEx
{
	DECLARE_DYNAMIC(DLG_show)

public:
	DLG_show(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DLG_show();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_show };
#endif
	CString s;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();

	CString out;
};
