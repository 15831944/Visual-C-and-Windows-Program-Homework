
// MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����View.h : CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����View ��Ľӿ�
//

#pragma once

class CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set;

class CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����View : public CRecordView
{
protected: // �������л�����
	CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����View();
	DECLARE_DYNCREATE(CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MFC_FORM };
#endif
	CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set* m_pSet;
	CString ss;
// ����
public:
	CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CString path;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long a1;
	CString a2;
	CString a3;
	double a4;
	CString a5;
	afx_msg void OnBnClickedButton_showpic();
	afx_msg void OnPaint();
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	CString a7;
	afx_msg void On32771();
	afx_msg void On32772();
	afx_msg void On32776();
	afx_msg void On32773();
	afx_msg void On32775();
	afx_msg void On32774();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����View.cpp �еĵ��԰汾
inline CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc* CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����View::GetDocument() const
   { return reinterpret_cast<CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc*>(m_pDocument); }
#endif

