
// 20200310-�κ���ҵView.h : CMy20200310�κ���ҵView ��Ľӿ�
//

#pragma once


class CMy20200310�κ���ҵView : public CView
{
protected: // �������л�����
	CMy20200310�κ���ҵView();
	DECLARE_DYNCREATE(CMy20200310�κ���ҵView)

// ����
public:
	CMy20200310�κ���ҵDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy20200310�κ���ҵView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect cr1 = CRect(100, 70, 300, 200);
	CRect cr2 = CRect(500, 50, 700, 200);
	CRect cr3 = CRect(800, 90, 1000, 300);
	CRect cr4 = CRect(1100, 90, 1300,300);
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 20200310-�κ���ҵView.cpp �еĵ��԰汾
inline CMy20200310�κ���ҵDoc* CMy20200310�κ���ҵView::GetDocument() const
   { return reinterpret_cast<CMy20200310�κ���ҵDoc*>(m_pDocument); }
#endif

