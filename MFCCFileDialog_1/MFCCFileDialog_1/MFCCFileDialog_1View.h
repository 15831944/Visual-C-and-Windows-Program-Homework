
// MFCCFileDialog_1View.h : CMFCCFileDialog_1View ��Ľӿ�
//

#pragma once


class CMFCCFileDialog_1View : public CView
{
protected: // �������л�����
	CMFCCFileDialog_1View();
	DECLARE_DYNCREATE(CMFCCFileDialog_1View)

// ����
public:
	CMFCCFileDialog_1Doc* GetDocument() const;

// ����
public:
	int a;
	CString s;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCCFileDialog_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // MFCCFileDialog_1View.cpp �еĵ��԰汾
inline CMFCCFileDialog_1Doc* CMFCCFileDialog_1View::GetDocument() const
   { return reinterpret_cast<CMFCCFileDialog_1Doc*>(m_pDocument); }
#endif

