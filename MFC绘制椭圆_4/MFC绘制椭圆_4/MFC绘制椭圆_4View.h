
// MFC������Բ_4View.h : CMFC������Բ_4View ��Ľӿ�
//

#pragma once


class CMFC������Բ_4View : public CView
{
protected: // �������л�����
	CMFC������Բ_4View();
	DECLARE_DYNCREATE(CMFC������Բ_4View)

// ����
public:
	CMFC������Բ_4Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC������Բ_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect rect;
	int red, green, blue;
	bool flag;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShow();
};

#ifndef _DEBUG  // MFC������Բ_4View.cpp �еĵ��԰汾
inline CMFC������Բ_4Doc* CMFC������Բ_4View::GetDocument() const
   { return reinterpret_cast<CMFC������Բ_4Doc*>(m_pDocument); }
#endif

