
// MFC03View.h : CMFC03View ��Ľӿ�
//

#pragma once


class CMFC03View : public CView
{
protected: // �������л�����
	CMFC03View();
	DECLARE_DYNCREATE(CMFC03View)

// ����
public:
	CMFC03Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC03View();
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

#ifndef _DEBUG  // MFC03View.cpp �еĵ��԰汾
inline CMFC03Doc* CMFC03View::GetDocument() const
   { return reinterpret_cast<CMFC03Doc*>(m_pDocument); }
#endif
