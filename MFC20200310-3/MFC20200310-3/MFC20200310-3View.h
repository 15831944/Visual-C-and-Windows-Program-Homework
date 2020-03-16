
// MFC20200310-3View.h : CMFC202003103View ��Ľӿ�
//

#pragma once


class CMFC202003103View : public CView
{
protected: // �������л�����
	CMFC202003103View();
	DECLARE_DYNCREATE(CMFC202003103View)

// ����
public:
	CMFC202003103Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC202003103View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect cr1 = CRect(100, 70, 300, 200);
	CRect cr2 = CRect(500, 50, 700, 200);
	CRect cr3 = CRect(800, 90, 1000, 300);
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC20200310-3View.cpp �еĵ��԰汾
inline CMFC202003103Doc* CMFC202003103View::GetDocument() const
   { return reinterpret_cast<CMFC202003103Doc*>(m_pDocument); }
#endif

