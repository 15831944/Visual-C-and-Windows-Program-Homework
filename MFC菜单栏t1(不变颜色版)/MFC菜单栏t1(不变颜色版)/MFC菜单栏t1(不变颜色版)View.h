
// MFC�˵���t1(������ɫ��)View.h : CMFC�˵���t1������ɫ��View ��Ľӿ�
//

#pragma once


class CMFC�˵���t1������ɫ��View : public CView
{
protected: // �������л�����
	CMFC�˵���t1������ɫ��View();
	DECLARE_DYNCREATE(CMFC�˵���t1������ɫ��View)

// ����
public:
	CMFC�˵���t1������ɫ��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC�˵���t1������ɫ��View();
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
	afx_msg void OnShow();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // MFC�˵���t1(������ɫ��)View.cpp �еĵ��԰汾
inline CMFC�˵���t1������ɫ��Doc* CMFC�˵���t1������ɫ��View::GetDocument() const
   { return reinterpret_cast<CMFC�˵���t1������ɫ��Doc*>(m_pDocument); }
#endif

