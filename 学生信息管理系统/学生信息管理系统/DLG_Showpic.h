#pragma once


// DLG_Showpic �Ի���

class DLG_Showpic : public CDialogEx
{
	DECLARE_DYNAMIC(DLG_Showpic)

public:
	DLG_Showpic(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DLG_Showpic();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_showpic };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
