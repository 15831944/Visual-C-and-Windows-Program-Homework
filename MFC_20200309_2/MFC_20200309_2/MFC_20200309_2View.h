
// MFC_20200309_2View.h : CMFC_20200309_2View ��Ľӿ�
//

#pragma once


class CMFC_20200309_2View : public CView
{
protected: // �������л�����
	CMFC_20200309_2View();
	DECLARE_DYNCREATE(CMFC_20200309_2View)

// ����
public:
	CMFC_20200309_2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC_20200309_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CArray<CRect, CRect&> ca;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC_20200309_2View.cpp �еĵ��԰汾
inline CMFC_20200309_2Doc* CMFC_20200309_2View::GetDocument() const
   { return reinterpret_cast<CMFC_20200309_2Doc*>(m_pDocument); }
#endif

