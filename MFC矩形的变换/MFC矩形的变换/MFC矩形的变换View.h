
// MFC���εı任View.h : CMFC���εı任View ��Ľӿ�
//

#pragma once


class CMFC���εı任View : public CView
{
protected: // �������л�����
	CMFC���εı任View();
	DECLARE_DYNCREATE(CMFC���εı任View)

// ����
public:
	CMFC���εı任Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC���εı任View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect rect;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC���εı任View.cpp �еĵ��԰汾
inline CMFC���εı任Doc* CMFC���εı任View::GetDocument() const
   { return reinterpret_cast<CMFC���εı任Doc*>(m_pDocument); }
#endif

