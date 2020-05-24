
// MFCCFileDialog_2Dlg.h : 头文件
//

#pragma once


// CMFCCFileDialog_2Dlg 对话框
class CMFCCFileDialog_2Dlg : public CDialogEx
{
// 构造
public:
	CMFCCFileDialog_2Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCCFILEDIALOG_2_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持
	CString pic;
	
// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
