#pragma once


// SHOW_DLG 对话框

class SHOW_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(SHOW_DLG)

public:
	SHOW_DLG(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~SHOW_DLG();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_BIGSHOW };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
