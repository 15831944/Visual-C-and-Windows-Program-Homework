
// MFC02�����¼View.h : CMFC02�����¼View ��Ľӿ�
//

#pragma once


class CMFC02�����¼View : public CView
{
protected: // �������л�����
	CMFC02�����¼View();
	DECLARE_DYNCREATE(CMFC02�����¼View)

// ����
public:
	CMFC02�����¼Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC02�����¼View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC02�����¼View.cpp �еĵ��԰汾
inline CMFC02�����¼Doc* CMFC02�����¼View::GetDocument() const
   { return reinterpret_cast<CMFC02�����¼Doc*>(m_pDocument); }
#endif

