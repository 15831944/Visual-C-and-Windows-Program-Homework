
// MFCС���˶�(4-13-3)View.h : CMFCС���˶�4133View ��Ľӿ�
//

#pragma once


class CMFCС���˶�4133View : public CView
{
protected: // �������л�����
	CMFCС���˶�4133View();
	DECLARE_DYNCREATE(CMFCС���˶�4133View)

// ����
public:
	CMFCС���˶�4133Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCС���˶�4133View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect cr;
	CRect rc;
	int i;
	int st;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCС���˶�(4-13-3)View.cpp �еĵ��԰汾
inline CMFCС���˶�4133Doc* CMFCС���˶�4133View::GetDocument() const
   { return reinterpret_cast<CMFCС���˶�4133Doc*>(m_pDocument); }
#endif

