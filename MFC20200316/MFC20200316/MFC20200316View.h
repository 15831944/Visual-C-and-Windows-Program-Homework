
// MFC20200316View.h : CMFC20200316View ��Ľӿ�
//

#pragma once


class CMFC20200316View : public CView
{
protected: // �������л�����
	CMFC20200316View();
	DECLARE_DYNCREATE(CMFC20200316View)

// ����
public:
	CMFC20200316Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC20200316View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC20200316View.cpp �еĵ��԰汾
inline CMFC20200316Doc* CMFC20200316View::GetDocument() const
   { return reinterpret_cast<CMFC20200316Doc*>(m_pDocument); }
#endif

