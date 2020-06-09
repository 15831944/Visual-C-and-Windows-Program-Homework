#pragma once


// DLG_Showpic 对话框

class DLG_Showpic : public CDialogEx
{
	DECLARE_DYNAMIC(DLG_Showpic)

public:
	DLG_Showpic(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DLG_Showpic();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_showpic };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
