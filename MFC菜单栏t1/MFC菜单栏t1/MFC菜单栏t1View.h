
// MFC�˵���t1View.h : CMFC�˵���t1View ��Ľӿ�
//

#pragma once


class CMFC�˵���t1View : public CView
{
protected: // �������л�����
	CMFC�˵���t1View();
	DECLARE_DYNCREATE(CMFC�˵���t1View)

// ����
public:
	CMFC�˵���t1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC�˵���t1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int x, y;
	CRect cr1;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShownumber();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // MFC�˵���t1View.cpp �еĵ��԰汾
inline CMFC�˵���t1Doc* CMFC�˵���t1View::GetDocument() const
   { return reinterpret_cast<CMFC�˵���t1Doc*>(m_pDocument); }
#endif

