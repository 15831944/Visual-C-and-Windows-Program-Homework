
// MFC学生名单Dlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CMFC学生名单Dlg 对话框
class CMFC学生名单Dlg : public CDialogEx
{
// 构造
public:
	CMFC学生名单Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedOk();
	CEdit m_edit;
	CListBox m_list;
	int nCurSel;
	afx_msg void OnLbnSelchangeList1();
};
