
// �Կͻ�������ΪԲ�ĵ���ԲView.h : C�Կͻ�������ΪԲ�ĵ���ԲView ��Ľӿ�
//

#pragma once


class C�Կͻ�������ΪԲ�ĵ���ԲView : public CView
{
protected: // �������л�����
	C�Կͻ�������ΪԲ�ĵ���ԲView();
	DECLARE_DYNCREATE(C�Կͻ�������ΪԲ�ĵ���ԲView)

// ����
public:
	C�Կͻ�������ΪԲ�ĵ���ԲDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�Կͻ�������ΪԲ�ĵ���ԲView();
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

#ifndef _DEBUG  // �Կͻ�������ΪԲ�ĵ���ԲView.cpp �еĵ��԰汾
inline C�Կͻ�������ΪԲ�ĵ���ԲDoc* C�Կͻ�������ΪԲ�ĵ���ԲView::GetDocument() const
   { return reinterpret_cast<C�Կͻ�������ΪԲ�ĵ���ԲDoc*>(m_pDocument); }
#endif

