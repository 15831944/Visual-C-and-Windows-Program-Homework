
// MFC��Բ���Ʊ�����ʾView.h : CMFC��Բ���Ʊ�����ʾView ��Ľӿ�
//

#pragma once


class CMFC��Բ���Ʊ�����ʾView : public CView
{
protected: // �������л�����
	CMFC��Բ���Ʊ�����ʾView();
	DECLARE_DYNCREATE(CMFC��Բ���Ʊ�����ʾView)

// ����
public:
	CMFC��Բ���Ʊ�����ʾDoc* GetDocument() const;

// ����
public:
	CRect cr;
	CArray<CRect, CRect> p_cr;
	int count = 0;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC��Բ���Ʊ�����ʾView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC��Բ���Ʊ�����ʾView.cpp �еĵ��԰汾
inline CMFC��Բ���Ʊ�����ʾDoc* CMFC��Բ���Ʊ�����ʾView::GetDocument() const
   { return reinterpret_cast<CMFC��Բ���Ʊ�����ʾDoc*>(m_pDocument); }
#endif

