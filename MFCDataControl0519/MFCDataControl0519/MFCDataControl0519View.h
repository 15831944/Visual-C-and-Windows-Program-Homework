
// MFCDataControl0519View.h : CMFCDataControl0519View ��Ľӿ�
//

#pragma once

class CMFCDataControl0519Set;

class CMFCDataControl0519View : public CRecordView
{
protected: // �������л�����
	CMFCDataControl0519View();
	DECLARE_DYNCREATE(CMFCDataControl0519View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MFCDATACONTROL0519_FORM };
#endif
	CMFCDataControl0519Set* m_pSet;

// ����
public:
	CMFCDataControl0519Doc* GetDocument() const;

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
	virtual ~CMFCDataControl0519View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long a1;
	long a2;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
};

#ifndef _DEBUG  // MFCDataControl0519View.cpp �еĵ��԰汾
inline CMFCDataControl0519Doc* CMFCDataControl0519View::GetDocument() const
   { return reinterpret_cast<CMFCDataControl0519Doc*>(m_pDocument); }
#endif

