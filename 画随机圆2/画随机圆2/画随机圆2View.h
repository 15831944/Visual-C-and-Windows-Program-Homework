
// �����Բ2View.h : C�����Բ2View ��Ľӿ�
//

#pragma once


class C�����Բ2View : public CView
{
protected: // �������л�����
	C�����Բ2View();
	DECLARE_DYNCREATE(C�����Բ2View)

// ����
public:
	C�����Բ2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�����Բ2View();
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

#ifndef _DEBUG  // �����Բ2View.cpp �еĵ��԰汾
inline C�����Բ2Doc* C�����Բ2View::GetDocument() const
   { return reinterpret_cast<C�����Բ2Doc*>(m_pDocument); }
#endif

