
// MFC������Բ_1View.h : CMFC������Բ_1View ��Ľӿ�
//

#pragma once


class CMFC������Բ_1View : public CView
{
protected: // �������л�����
	CMFC������Բ_1View();
	DECLARE_DYNCREATE(CMFC������Բ_1View)

// ����
public:
	CMFC������Բ_1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC������Բ_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CPoint point1;
	CPoint point2;
	CRect ca;
	bool m_bLButtonDown;
	int f;
	CRect r;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnPaint();
	afx_msg void OnShown1();
	afx_msg void OnBnClickedOk();
};

#ifndef _DEBUG  // MFC������Բ_1View.cpp �еĵ��԰汾
inline CMFC������Բ_1Doc* CMFC������Բ_1View::GetDocument() const
   { return reinterpret_cast<CMFC������Բ_1Doc*>(m_pDocument); }
#endif

