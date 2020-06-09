#pragma once


// Change_dlg 对话框

class Change_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Change_dlg)

public:
	Change_dlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Change_dlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	long num;
	CString name;
	CString sex;
	double nianxin;
	CString pic_addrress;
	CString o;
};
