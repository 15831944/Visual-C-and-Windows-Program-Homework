
// MFC�Ի����ļ�����ʾ_1View.h : CMFC�Ի����ļ�����ʾ_1View ��Ľӿ�
//

#pragma once


class CMFC�Ի����ļ�����ʾ_1View : public CView
{
protected: // �������л�����
	CMFC�Ի����ļ�����ʾ_1View();
	DECLARE_DYNCREATE(CMFC�Ի����ļ�����ʾ_1View)

// ����
public:
	CMFC�Ի����ļ�����ʾ_1Doc* GetDocument() const;

// ����
public:
	CString fileName;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC�Ի����ļ�����ʾ_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShow1();
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC�Ի����ļ�����ʾ_1View.cpp �еĵ��԰汾
inline CMFC�Ի����ļ�����ʾ_1Doc* CMFC�Ի����ļ�����ʾ_1View::GetDocument() const
   { return reinterpret_cast<CMFC�Ի����ļ�����ʾ_1Doc*>(m_pDocument); }
#endif

