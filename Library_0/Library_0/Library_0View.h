
// Library_0View.h : CLibrary_0View ��Ľӿ�
//

#pragma once


class CLibrary_0View : public CView
{
protected: // �������л�����
	CLibrary_0View();
	DECLARE_DYNCREATE(CLibrary_0View)

// ����
public:
	CLibrary_0Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CLibrary_0View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Library_0View.cpp �еĵ��԰汾
inline CLibrary_0Doc* CLibrary_0View::GetDocument() const
   { return reinterpret_cast<CLibrary_0Doc*>(m_pDocument); }
#endif

