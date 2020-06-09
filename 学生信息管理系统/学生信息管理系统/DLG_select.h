#pragma once


// DLG_select 对话框

class DLG_select : public CDialogEx
{
	DECLARE_DYNAMIC(DLG_select)

public:
	DLG_select(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DLG_select();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_search };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString select;
};
