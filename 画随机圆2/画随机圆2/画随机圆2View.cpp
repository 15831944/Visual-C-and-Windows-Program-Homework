
// �����Բ2View.cpp : C�����Բ2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�����Բ2.h"
#endif

#include "�����Բ2Doc.h"
#include "�����Բ2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�����Բ2View

IMPLEMENT_DYNCREATE(C�����Բ2View, CView)

BEGIN_MESSAGE_MAP(C�����Բ2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C�����Բ2View ����/����

C�����Բ2View::C�����Բ2View()
{
	// TODO: �ڴ˴���ӹ������
	ca.SetSize(300);
}

C�����Բ2View::~C�����Բ2View()
{
}

BOOL C�����Բ2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�����Բ2View ����

void C�����Բ2View::OnDraw(CDC* pDC)
{
	C�����Բ2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < ca.GetSize(); i++)
		pDC->Ellipse(ca.GetAt(i));
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�����Բ2View ���

#ifdef _DEBUG
void C�����Բ2View::AssertValid() const
{
	CView::AssertValid();
}

void C�����Բ2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�����Բ2Doc* C�����Բ2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�����Բ2Doc)));
	return (C�����Բ2Doc*)m_pDocument;
}
#endif //_DEBUG


// C�����Բ2View ��Ϣ�������


void C�����Բ2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r = (rand() % (100 - 10) + 10);
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);
	ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
