
// MFC��������_2View.h : CMFC��������_2View ��Ľӿ�
//

#pragma once


class CMFC��������_2View : public CView
{
protected: // �������л�����
	CMFC��������_2View();
	DECLARE_DYNCREATE(CMFC��������_2View)

// ����
public:
	CMFC��������_2Doc* GetDocument() const;

// ����
public:
	CString s;
	CPoint p;
	CRect r, r1;
	int c_width, c_height;
	int flag, line;
	int h, l;
	int num, min, left, leftNum;
	int mo;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC��������_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC��������_2View.cpp �еĵ��԰汾
inline CMFC��������_2Doc* CMFC��������_2View::GetDocument() const
   { return reinterpret_cast<CMFC��������_2Doc*>(m_pDocument); }
#endif

