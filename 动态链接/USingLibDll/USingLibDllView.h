
// USingLibDllView.h : CUSingLibDllView ��Ľӿ�
//

#pragma once


class CUSingLibDllView : public CView
{
protected: // �������л�����
	CUSingLibDllView();
	DECLARE_DYNCREATE(CUSingLibDllView)

// ����
public:
	CUSingLibDllDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CUSingLibDllView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // USingLibDllView.cpp �еĵ��԰汾
inline CUSingLibDllDoc* CUSingLibDllView::GetDocument() const
   { return reinterpret_cast<CUSingLibDllDoc*>(m_pDocument); }
#endif

