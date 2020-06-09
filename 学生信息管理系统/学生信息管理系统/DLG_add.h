#pragma once


// DLG_add 对话框

class DLG_add : public CDialogEx
{
	DECLARE_DYNAMIC(DLG_add)

public:
	DLG_add(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DLG_add();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_change };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
