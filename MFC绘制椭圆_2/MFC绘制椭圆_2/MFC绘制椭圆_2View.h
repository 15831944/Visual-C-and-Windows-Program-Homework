
// MFC������Բ_2View.h : CMFC������Բ_2View ��Ľӿ�
//

#pragma once


class CMFC������Բ_2View : public CView
{
protected: // �������л�����
	CMFC������Բ_2View();
	DECLARE_DYNCREATE(CMFC������Բ_2View)

// ����
public:
	CMFC������Բ_2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC������Բ_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int top, bottom, right, left;
	int flag;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShown();
};

#ifndef _DEBUG  // MFC������Բ_2View.cpp �еĵ��԰汾
inline CMFC������Բ_2Doc* CMFC������Բ_2View::GetDocument() const
   { return reinterpret_cast<CMFC������Բ_2Doc*>(m_pDocument); }
#endif

