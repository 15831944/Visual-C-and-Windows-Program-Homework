
// 20200310-�κ���ҵView.cpp : CMy20200310�κ���ҵView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "20200310-�κ���ҵ.h"
#endif

#include "20200310-�κ���ҵDoc.h"
#include "20200310-�κ���ҵView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200310�κ���ҵView

IMPLEMENT_DYNCREATE(CMy20200310�κ���ҵView, CView)

BEGIN_MESSAGE_MAP(CMy20200310�κ���ҵView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMy20200310�κ���ҵView ����/����

CMy20200310�κ���ҵView::CMy20200310�κ���ҵView()
{
	// TODO: �ڴ˴���ӹ������

}

CMy20200310�κ���ҵView::~CMy20200310�κ���ҵView()
{
}

BOOL CMy20200310�κ���ҵView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy20200310�κ���ҵView ����

void CMy20200310�κ���ҵView::OnDraw(CDC* pDC)
{
	CMy20200310�κ���ҵDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(cr1);
	pDC->Rectangle(cr2);
	pDC->Rectangle(cr3);
	pDC->Rectangle(cr4);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy20200310�κ���ҵView ���

#ifdef _DEBUG
void CMy20200310�κ���ҵView::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200310�κ���ҵView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200310�κ���ҵDoc* CMy20200310�κ���ҵView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200310�κ���ҵDoc)));
	return (CMy20200310�κ���ҵDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200310�κ���ҵView ��Ϣ�������


void CMy20200310�κ���ҵView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r = rand() % 20;
	CString s;
	CMy20200310�κ���ҵDoc* pDoc = GetDocument();
	CClientDC dc(this);
	if (point.x > 100 && point.x < 300 && point.y>70 && point.y < 200)
	{
		pDoc->a = r;
		s.Format(_T("%d"), pDoc->a);
		dc.TextOutW(point.x, point.y, s);
	}

	else if (point.x > 500 && point.x < 700 && point.y>50 && point.y < 200)
	{
		pDoc->b = r;
		s.Format(_T("%d"), pDoc->b);
		dc.TextOutW(point.x, point.y, s);
	}
	else if (point.x > 800 && point.x < 1000 && point.y>90 && point.y < 300)
	{
		pDoc->c = (pDoc->a) + (pDoc->b);
		s.Format(_T("%d"), pDoc->c);
		dc.TextOutW(point.x, point.y, s);
	}
	else if (point.x > 1100 && point.x < 1300 && point.y>90 && point.y < 300)
	{
		pDoc->d++;
		switch (pDoc->d%4)
		{
		case 1: 
			s.Format(_T("+"));
			break;
		case 2: 
			s.Format(_T("-"));
			break;
		case 3: 
			s.Format(_T("*"));
			break;
		case 0: 
			s.Format(_T("/"));
			break;
		}
		/*
		if(pDoc->d %4==1)
		    s.Format(_T("+"));
		if (pDoc->d % 4 == 2)
			s.Format(_T("-"));
		if (pDoc->d % 4 == 3)
			s.Format(_T("*"));
		if (pDoc->d % 4 == 0)
			s.Format(_T("/"));
		*/
		dc.TextOutW(point.x, point.y, s);
	}
	else {
		s = "�����Ч";
		dc.TextOutW(point.x, point.y, s);
	}
	CView::OnLButtonDown(nFlags, point);
}


void CMy20200310�κ���ҵView::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s;
	CMy20200310�κ���ҵDoc* pDoc = GetDocument();
	CClientDC dc(this);
	if (point.x > 800 && point.x < 1000 && point.y>90 && point.y < 300)
	{
		if (pDoc->d % 4 == 1)
		    pDoc->c = (pDoc->a) + (pDoc->b);
		if (pDoc->d % 4 == 2)
			pDoc->c = (pDoc->a) - (pDoc->b);
		if (pDoc->d % 4 == 3)
			pDoc->c = (pDoc->a) * (pDoc->b);
		if (pDoc->d % 4 == 0)
			pDoc->c = (pDoc->a) / (pDoc->b);
		s.Format(_T("%d"), pDoc->c);
		dc.TextOutW(point.x, point.y, s);
	}
	CView::OnRButtonDown(nFlags, point);
}
