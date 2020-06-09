#pragma once


// DLG_change 对话框

class DLG_change : public CDialogEx
{
	DECLARE_DYNAMIC(DLG_change)

public:
	DLG_change(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DLG_change();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_change };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
