
// MFCԲ����View.h : CMFCԲ����View ��Ľӿ�
//

#pragma once


class CMFCԲ����View : public CView
{
protected: // �������л�����
	CMFCԲ����View();
	DECLARE_DYNCREATE(CMFCԲ����View)

// ����
public:
	CMFCԲ����Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCԲ����View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCԲ����View.cpp �еĵ��԰汾
inline CMFCԲ����Doc* CMFCԲ����View::GetDocument() const
   { return reinterpret_cast<CMFCԲ����Doc*>(m_pDocument); }
#endif

