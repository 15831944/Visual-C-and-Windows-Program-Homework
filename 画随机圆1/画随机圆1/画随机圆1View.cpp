
// �����Բ1View.cpp : C�����Բ1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�����Բ1.h"
#endif

#include "�����Բ1Doc.h"
#include "�����Բ1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�����Բ1View

IMPLEMENT_DYNCREATE(C�����Բ1View, CView)

BEGIN_MESSAGE_MAP(C�����Բ1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C�����Բ1View ����/����

C�����Բ1View::C�����Բ1View()
{
	// TODO: �ڴ˴���ӹ������

}

C�����Բ1View::~C�����Բ1View()
{
}

BOOL C�����Բ1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�����Բ1View ����

void C�����Բ1View::OnDraw(CDC* /*pDC*/)
{
	C�����Բ1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�����Բ1View ���

#ifdef _DEBUG
void C�����Բ1View::AssertValid() const
{
	CView::AssertValid();
}

void C�����Բ1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�����Բ1Doc* C�����Բ1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�����Բ1Doc)));
	return (C�����Բ1Doc*)m_pDocument;
}
#endif //_DEBUG


// C�����Բ1View ��Ϣ�������


void C�����Բ1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	int r = (rand() % (100 - 10) + 10);
	dc.Ellipse(point.x - r, point.y - r, point.x + r, point.y + r);
	CView::OnLButtonDown(nFlags, point);
}
