
// MFCѧ������Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CMFCѧ������Dlg �Ի���
class CMFCѧ������Dlg : public CDialogEx
{
// ����
public:
	CMFCѧ������Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedOk();
	CEdit m_edit;
	CListBox m_list;
	int nCurSel;
	afx_msg void OnLbnSelchangeList1();
};
