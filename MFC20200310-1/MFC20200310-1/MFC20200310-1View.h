
// MFC20200310-1View.h : CMFC202003101View ��Ľӿ�
//

#pragma once


class CMFC202003101View : public CView
{
protected: // �������л�����
	CMFC202003101View();
	DECLARE_DYNCREATE(CMFC202003101View)

// ����
public:
	CMFC202003101Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC202003101View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC20200310-1View.cpp �еĵ��԰汾
inline CMFC202003101Doc* CMFC202003101View::GetDocument() const
   { return reinterpret_cast<CMFC202003101Doc*>(m_pDocument); }
#endif

