#pragma once


// Change_dlg �Ի���

class Change_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Change_dlg)

public:
	Change_dlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Change_dlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	long num;
	CString name;
	CString sex;
	double nianxin;
	CString pic_addrress;
	CString o;
};
