#pragma once


// CHANGE_DLG 对话框

class CHANGE_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(CHANGE_DLG)

public:
	CHANGE_DLG(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CHANGE_DLG();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CHANGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	long sno;
	long point;
};
