
// MFCMouseMoveͳ��View.h : CMFCMouseMoveͳ��View ��Ľӿ�
//

#pragma once


class CMFCMouseMoveͳ��View : public CView
{
protected: // �������л�����
	CMFCMouseMoveͳ��View();
	DECLARE_DYNCREATE(CMFCMouseMoveͳ��View)

// ����
public:
	CMFCMouseMoveͳ��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCMouseMoveͳ��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int x0, x1, y0, y1;
	int count;
	bool set;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCMouseMoveͳ��View.cpp �еĵ��԰汾
inline CMFCMouseMoveͳ��Doc* CMFCMouseMoveͳ��View::GetDocument() const
   { return reinterpret_cast<CMFCMouseMoveͳ��Doc*>(m_pDocument); }
#endif

