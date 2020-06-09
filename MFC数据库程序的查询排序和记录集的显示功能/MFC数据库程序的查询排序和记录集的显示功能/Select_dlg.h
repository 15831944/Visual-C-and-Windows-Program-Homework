#pragma once


// Select_dlg 对话框

class Select_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Select_dlg)

public:
	Select_dlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Select_dlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString selec;
};
