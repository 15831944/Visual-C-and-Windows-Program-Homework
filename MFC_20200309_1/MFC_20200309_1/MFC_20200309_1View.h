
// MFC_20200309_1View.h : CMFC_20200309_1View ��Ľӿ�
//

#pragma once


class CMFC_20200309_1View : public CView
{
protected: // �������л�����
	CMFC_20200309_1View();
	DECLARE_DYNCREATE(CMFC_20200309_1View)

// ����
public:
	CMFC_20200309_1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC_20200309_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect cr;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC_20200309_1View.cpp �еĵ��԰汾
inline CMFC_20200309_1Doc* CMFC_20200309_1View::GetDocument() const
   { return reinterpret_cast<CMFC_20200309_1Doc*>(m_pDocument); }
#endif

