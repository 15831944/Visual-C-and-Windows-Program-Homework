
// MFC��ͼƬ�����View.h : CMFC��ͼƬ�����View ��Ľӿ�
//

#pragma once

class CMFC��ͼƬ�����Set;

class CMFC��ͼƬ�����View : public CRecordView
{
protected: // �������л�����
	CMFC��ͼƬ�����View();
	DECLARE_DYNCREATE(CMFC��ͼƬ�����View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MFC_FORM };
#endif
	CMFC��ͼƬ�����Set* m_pSet;
	CString ad;
// ����
public:
	CMFC��ͼƬ�����Doc* GetDocument() const;

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
	virtual ~CMFC��ͼƬ�����View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
private:
	CString address;
public:
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnPaint();
	afx_msg void OnEnChangeEdit1();
};

#ifndef _DEBUG  // MFC��ͼƬ�����View.cpp �еĵ��԰汾
inline CMFC��ͼƬ�����Doc* CMFC��ͼƬ�����View::GetDocument() const
   { return reinterpret_cast<CMFC��ͼƬ�����Doc*>(m_pDocument); }
#endif

