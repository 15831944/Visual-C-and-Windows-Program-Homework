
// �Բ�ɫ�����Բ�ڲ�View.h : C�Բ�ɫ�����Բ�ڲ�View ��Ľӿ�
//

#pragma once


class C�Բ�ɫ�����Բ�ڲ�View : public CView
{
protected: // �������л�����
	C�Բ�ɫ�����Բ�ڲ�View();
	DECLARE_DYNCREATE(C�Բ�ɫ�����Բ�ڲ�View)

// ����
public:
	C�Բ�ɫ�����Բ�ڲ�Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�Բ�ɫ�����Բ�ڲ�View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect cr;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // �Բ�ɫ�����Բ�ڲ�View.cpp �еĵ��԰汾
inline C�Բ�ɫ�����Բ�ڲ�Doc* C�Բ�ɫ�����Բ�ڲ�View::GetDocument() const
   { return reinterpret_cast<C�Բ�ɫ�����Բ�ڲ�Doc*>(m_pDocument); }
#endif

