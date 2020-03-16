
// MFC20200310-3View.cpp : CMFC202003103View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC20200310-3.h"
#endif

#include "MFC20200310-3Doc.h"
#include "MFC20200310-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC202003103View

IMPLEMENT_DYNCREATE(CMFC202003103View, CView)

BEGIN_MESSAGE_MAP(CMFC202003103View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC202003103View ����/����

CMFC202003103View::CMFC202003103View()
{
	// TODO: �ڴ˴���ӹ������
	

}

CMFC202003103View::~CMFC202003103View()
{
}

BOOL CMFC202003103View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC202003103View ����

void CMFC202003103View::OnDraw(CDC* pDC)
{
	CMFC202003103Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(cr1);
	pDC->Rectangle(cr2);
	pDC->Rectangle(cr3);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC202003103View ���

#ifdef _DEBUG
void CMFC202003103View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC202003103View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC202003103Doc* CMFC202003103View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC202003103Doc)));
	return (CMFC202003103Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC202003103View ��Ϣ�������


void CMFC202003103View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r = rand() % 20;
	CString s;
	CMFC202003103Doc* pDoc = GetDocument();
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
		pDoc->c= (pDoc->a)+(pDoc->b);
		s.Format(_T("%d"), pDoc->c);
		dc.TextOutW(point.x, point.y, s);
	}
	else {
		s = "�����Ч";
		dc.TextOutW(point.x, point.y, s);
	}
	CView::OnLButtonDown(nFlags, point);
}
