
// MFC�ӷ���(4-13-2)View.h : CMFC�ӷ���4132View ��Ľӿ�
//

#pragma once


class CMFC�ӷ���4132View : public CView
{
protected: // �������л�����
	CMFC�ӷ���4132View();
	DECLARE_DYNCREATE(CMFC�ӷ���4132View)

// ����
public:
	CMFC�ӷ���4132Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC�ӷ���4132View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShown();
};

#ifndef _DEBUG  // MFC�ӷ���(4-13-2)View.cpp �еĵ��԰汾
inline CMFC�ӷ���4132Doc* CMFC�ӷ���4132View::GetDocument() const
   { return reinterpret_cast<CMFC�ӷ���4132Doc*>(m_pDocument); }
#endif

