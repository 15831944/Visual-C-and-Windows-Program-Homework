
// MFC03�κ���ҵView.h : CMFC03�κ���ҵView ��Ľӿ�
//

#pragma once


class CMFC03�κ���ҵView : public CView
{
protected: // �������л�����
	CMFC03�κ���ҵView();
	DECLARE_DYNCREATE(CMFC03�κ���ҵView)

// ����
public:
	CMFC03�κ���ҵDoc* GetDocument() const;

// ����
public:
	CString v;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC03�κ���ҵView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC03�κ���ҵView.cpp �еĵ��԰汾
inline CMFC03�κ���ҵDoc* CMFC03�κ���ҵView::GetDocument() const
   { return reinterpret_cast<CMFC03�κ���ҵDoc*>(m_pDocument); }
#endif

