
// MFC��������_3View.h : CMFC��������_3View ��Ľӿ�
//

#pragma once


class CMFC��������_3View : public CView
{
protected: // �������л�����
	CMFC��������_3View();
	DECLARE_DYNCREATE(CMFC��������_3View)

// ����
public:
	CMFC��������_3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC��������_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int mo;
	CString s;
	CPoint p;
	CRect r,r1;
	int c_width , c_height ;
	int flag, line;
	int h, l;
	int num, min, left, leftNum;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC��������_3View.cpp �еĵ��԰汾
inline CMFC��������_3Doc* CMFC��������_3View::GetDocument() const
   { return reinterpret_cast<CMFC��������_3Doc*>(m_pDocument); }
#endif

