
// MFC�Ի���_2View.h : CMFC�Ի���_2View ��Ľӿ�
//

#pragma once


class CMFC�Ի���_2View : public CView
{
protected: // �������л�����
	CMFC�Ի���_2View();
	DECLARE_DYNCREATE(CMFC�Ի���_2View)

// ����
public:
	CMFC�Ի���_2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC�Ի���_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShown();
};

#ifndef _DEBUG  // MFC�Ի���_2View.cpp �еĵ��԰汾
inline CMFC�Ի���_2Doc* CMFC�Ի���_2View::GetDocument() const
   { return reinterpret_cast<CMFC�Ի���_2Doc*>(m_pDocument); }
#endif

