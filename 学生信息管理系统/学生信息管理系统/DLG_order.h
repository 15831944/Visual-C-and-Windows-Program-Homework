#pragma once


// DLG_order 对话框

class DLG_order : public CDialogEx
{
	DECLARE_DYNAMIC(DLG_order)

public:
	DLG_order(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DLG_order();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_orderby };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString order;
};
