#pragma once


// Order_dlg 对话框

class Order_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Order_dlg)

public:
	Order_dlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Order_dlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString order;
};
