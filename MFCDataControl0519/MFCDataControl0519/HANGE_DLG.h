#pragma once


// CHANGE_DLG �Ի���

class CHANGE_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(CHANGE_DLG)

public:
	CHANGE_DLG(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CHANGE_DLG();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CHANGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	long sno;
	long point;
};
