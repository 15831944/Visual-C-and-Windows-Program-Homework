
// MFC�˵�����ʾView.h : CMFC�˵�����ʾView ��Ľӿ�
//

#pragma once


class CMFC�˵�����ʾView : public CView
{
protected: // �������л�����
	CMFC�˵�����ʾView();
	DECLARE_DYNCREATE(CMFC�˵�����ʾView)

// ����
public:
	CMFC�˵�����ʾDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC�˵�����ʾView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShownumber();
};

#ifndef _DEBUG  // MFC�˵�����ʾView.cpp �еĵ��԰汾
inline CMFC�˵�����ʾDoc* CMFC�˵�����ʾView::GetDocument() const
   { return reinterpret_cast<CMFC�˵�����ʾDoc*>(m_pDocument); }
#endif

