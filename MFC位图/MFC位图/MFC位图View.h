
// MFCλͼView.h : CMFCλͼView ��Ľӿ�
//

#pragma once


class CMFCλͼView : public CView
{
protected: // �������л�����
	CMFCλͼView();
	DECLARE_DYNCREATE(CMFCλͼView)

// ����
public:
	CMFCλͼDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCλͼView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCλͼView.cpp �еĵ��԰汾
inline CMFCλͼDoc* CMFCλͼView::GetDocument() const
   { return reinterpret_cast<CMFCλͼDoc*>(m_pDocument); }
#endif

