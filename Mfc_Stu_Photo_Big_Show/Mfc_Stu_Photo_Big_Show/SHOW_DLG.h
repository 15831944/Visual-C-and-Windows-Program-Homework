#pragma once


// SHOW_DLG �Ի���

class SHOW_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(SHOW_DLG)

public:
	SHOW_DLG(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~SHOW_DLG();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_BIGSHOW };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
