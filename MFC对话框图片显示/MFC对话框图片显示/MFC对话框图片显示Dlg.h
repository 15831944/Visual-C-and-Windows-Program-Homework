
// MFC�Ի���ͼƬ��ʾDlg.h : ͷ�ļ�
//

#pragma once


// CMFC�Ի���ͼƬ��ʾDlg �Ի���
class CMFC�Ի���ͼƬ��ʾDlg : public CDialogEx
{
// ����
public:
	CMFC�Ի���ͼƬ��ʾDlg(CWnd* pParent = NULL);	// ��׼���캯��

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
};
