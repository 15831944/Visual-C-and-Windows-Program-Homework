
// MFC_ShowJPG_1View.h : CMFC_ShowJPG_1View ��Ľӿ�
//

#pragma once


class CMFC_ShowJPG_1View : public CView
{
protected: // �������л�����
	CMFC_ShowJPG_1View();
	DECLARE_DYNCREATE(CMFC_ShowJPG_1View)

// ����
public:
	CMFC_ShowJPG_1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC_ShowJPG_1View();
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

#ifndef _DEBUG  // MFC_ShowJPG_1View.cpp �еĵ��԰汾
inline CMFC_ShowJPG_1Doc* CMFC_ShowJPG_1View::GetDocument() const
   { return reinterpret_cast<CMFC_ShowJPG_1Doc*>(m_pDocument); }
#endif
