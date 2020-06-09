#pragma once


// Show_dlg 对话框

class Show_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Show_dlg)

public:
	Show_dlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Show_dlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
