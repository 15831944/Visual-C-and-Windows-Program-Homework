
// MFC�򵥻�ͼView.h : CMFC�򵥻�ͼView ��Ľӿ�
//

#pragma once


class CMFC�򵥻�ͼView : public CView
{
protected: // �������л�����
	CMFC�򵥻�ͼView();
	DECLARE_DYNCREATE(CMFC�򵥻�ͼView)

// ����
public:
	CMFC�򵥻�ͼDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC�򵥻�ͼView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int caozuo;
	CPoint point1;
	CPoint point2;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
	afx_msg void On32772();
	afx_msg void On32773();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC�򵥻�ͼView.cpp �еĵ��԰汾
inline CMFC�򵥻�ͼDoc* CMFC�򵥻�ͼView::GetDocument() const
   { return reinterpret_cast<CMFC�򵥻�ͼDoc*>(m_pDocument); }
#endif

