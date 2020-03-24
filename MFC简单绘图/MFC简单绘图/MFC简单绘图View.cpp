
// MFC�򵥻�ͼView.cpp : CMFC�򵥻�ͼView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC�򵥻�ͼ.h"
#endif

#include "MFC�򵥻�ͼDoc.h"
#include "MFC�򵥻�ͼView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC�򵥻�ͼView

IMPLEMENT_DYNCREATE(CMFC�򵥻�ͼView, CView)

BEGIN_MESSAGE_MAP(CMFC�򵥻�ͼView, CView)
	ON_COMMAND(ID_32771, &CMFC�򵥻�ͼView::On32771)
	ON_COMMAND(ID_32772, &CMFC�򵥻�ͼView::On32772)
	ON_COMMAND(ID_32773, &CMFC�򵥻�ͼView::On32773)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFC�򵥻�ͼView ����/����

CMFC�򵥻�ͼView::CMFC�򵥻�ͼView()
{
	// TODO: �ڴ˴���ӹ������
	caozuo=0;
	point1.x=point1.y=0;
	point2.x=point2.y=0;
}

CMFC�򵥻�ͼView::~CMFC�򵥻�ͼView()
{
}

BOOL CMFC�򵥻�ͼView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC�򵥻�ͼView ����

void CMFC�򵥻�ͼView::OnDraw(CDC* /*pDC*/)
{
	CMFC�򵥻�ͼDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	CRect ca;
	switch (caozuo)
	{
	case 1:
		dc.MoveTo(point1.x,point1.y);
		dc.LineTo(point2.x,point2.y);
		break;
	case 2:
		ca.bottom = point2.y;
		ca.top = point1.y;
		ca.left = point1.x;
		ca.right = point2.x;
		dc.Rectangle(ca);
		break;
	case 3:
		ca.bottom = point2.y;
		ca.top = point1.y;
		ca.left = point1.x;
		ca.right = point2.x;
		dc.Ellipse(ca);
		break;

	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC�򵥻�ͼView ���

#ifdef _DEBUG
void CMFC�򵥻�ͼView::AssertValid() const
{
	CView::AssertValid();
}

void CMFC�򵥻�ͼView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC�򵥻�ͼDoc* CMFC�򵥻�ͼView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC�򵥻�ͼDoc)));
	return (CMFC�򵥻�ͼDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFC�򵥻�ͼView ��Ϣ�������


void CMFC�򵥻�ͼView::On32771()//������
{
	caozuo = 1;
	//Invalidate();
	// TODO: �ڴ���������������
}


void CMFC�򵥻�ͼView::On32772()//������
{
	caozuo = 2;
	//Invalidate();
	// TODO: �ڴ���������������
}


void CMFC�򵥻�ͼView::On32773()//����Բ
{
	caozuo = 3;
	//Invalidate();
	// TODO: �ڴ���������������
}


void CMFC�򵥻�ͼView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	point1.x = point.x;
	point1.y = point.y;
	//Invalidate();
	CView::OnLButtonDown(nFlags, point);
}


void CMFC�򵥻�ͼView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	point2.x = point.x;
	point2.y = point.y;
	Invalidate(NULL);
	CView::OnLButtonUp(nFlags, point);
}
