
// MFC�����ƶ�(4-13)View.h : CMFC�����ƶ�413View ��Ľӿ�
//

#pragma once


class CMFC�����ƶ�413View : public CView
{
protected: // �������л�����
	CMFC�����ƶ�413View();
	DECLARE_DYNCREATE(CMFC�����ƶ�413View)

// ����
public:
	CMFC�����ƶ�413Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CMFC�����ƶ�413View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CPoint m_ptMouse;
	CRect rect;
	bool m_bLButtonDown;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // MFC�����ƶ�(4-13)View.cpp �еĵ��԰汾
inline CMFC�����ƶ�413Doc* CMFC�����ƶ�413View::GetDocument() const
   { return reinterpret_cast<CMFC�����ƶ�413Doc*>(m_pDocument); }
#endif

