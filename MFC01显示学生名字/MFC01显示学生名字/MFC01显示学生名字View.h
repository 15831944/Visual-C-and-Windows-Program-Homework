
// MFC01��ʾѧ������View.h : CMFC01��ʾѧ������View ��Ľӿ�
//

#pragma once


class CMFC01��ʾѧ������View : public CView
{
protected: // �������л�����
	CMFC01��ʾѧ������View();
	DECLARE_DYNCREATE(CMFC01��ʾѧ������View)

// ����
public:
	CMFC01��ʾѧ������Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC01��ʾѧ������View();
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

#ifndef _DEBUG  // MFC01��ʾѧ������View.cpp �еĵ��԰汾
inline CMFC01��ʾѧ������Doc* CMFC01��ʾѧ������View::GetDocument() const
   { return reinterpret_cast<CMFC01��ʾѧ������Doc*>(m_pDocument); }
#endif

