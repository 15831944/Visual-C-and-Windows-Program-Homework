
// MFC200511_1View.h : CMFC200511_1View ��Ľӿ�
//

#pragma once

class CMFC200511_1Set;

class CMFC200511_1View : public CRecordView
{
protected: // �������л�����
	CMFC200511_1View();
	DECLARE_DYNCREATE(CMFC200511_1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MFC200511_1_FORM };
#endif
	CMFC200511_1Set* m_pSet;

// ����
public:
	CMFC200511_1Doc* GetDocument() const;

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
	virtual ~CMFC200511_1View();
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
};

#ifndef _DEBUG  // MFC200511_1View.cpp �еĵ��԰汾
inline CMFC200511_1Doc* CMFC200511_1View::GetDocument() const
   { return reinterpret_cast<CMFC200511_1Doc*>(m_pDocument); }
#endif

