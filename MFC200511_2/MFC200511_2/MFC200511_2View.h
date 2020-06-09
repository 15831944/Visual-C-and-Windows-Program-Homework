
// MFC200511_2View.h : CMFC200511_2View ��Ľӿ�
//

#pragma once

class CMFC200511_2Set;

class CMFC200511_2View : public CRecordView
{
protected: // �������л�����
	CMFC200511_2View();
	DECLARE_DYNCREATE(CMFC200511_2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MFC200511_2_FORM };
#endif
	CMFC200511_2Set* m_pSet;

// ����
public:
	CMFC200511_2Doc* GetDocument() const;

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
	virtual ~CMFC200511_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString sname;
	CString sno;
	int age;
	CString sphone;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnPaint();
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
};

#ifndef _DEBUG  // MFC200511_2View.cpp �еĵ��԰汾
inline CMFC200511_2Doc* CMFC200511_2View::GetDocument() const
   { return reinterpret_cast<CMFC200511_2Doc*>(m_pDocument); }
#endif

