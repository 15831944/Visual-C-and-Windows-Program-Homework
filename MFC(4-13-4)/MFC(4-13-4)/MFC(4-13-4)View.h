
// MFC(4-13-4)View.h : CMFC4134View ��Ľӿ�
//

#pragma once


class CMFC4134View : public CView
{
protected: // �������л�����
	CMFC4134View();
	DECLARE_DYNCREATE(CMFC4134View)

// ����
public:
	CMFC4134Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC4134View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSh();
};

#ifndef _DEBUG  // MFC(4-13-4)View.cpp �еĵ��԰汾
inline CMFC4134Doc* CMFC4134View::GetDocument() const
   { return reinterpret_cast<CMFC4134Doc*>(m_pDocument); }
#endif

