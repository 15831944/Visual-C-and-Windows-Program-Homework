
// MFCС���˶�(4-13-3)View.cpp : CMFCС���˶�4133View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCС���˶�(4-13-3).h"
#endif

#include "MFCС���˶�(4-13-3)Doc.h"
#include "MFCС���˶�(4-13-3)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCС���˶�4133View

IMPLEMENT_DYNCREATE(CMFCС���˶�4133View, CView)

BEGIN_MESSAGE_MAP(CMFCС���˶�4133View, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMFCС���˶�4133View ����/����

CMFCС���˶�4133View::CMFCС���˶�4133View()
{
	// TODO: �ڴ˴���ӹ������
	cr.top = 0;
	cr.bottom = 120;
	cr.left = 0;
	cr.right = 0 + 120;
	i = 1;
	st = 0;
}

CMFCС���˶�4133View::~CMFCС���˶�4133View()
{
}

BOOL CMFCС���˶�4133View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCС���˶�4133View ����

void CMFCС���˶�4133View::OnDraw(CDC* pDC)
{
	CMFCС���˶�4133Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	this->GetClientRect(&rc);
	cr.top = (rc.bottom + rc.top) / 2-60;
	cr.bottom=cr.top+ 120;
	CPen pen(PS_SOLID, 5, RGB(rand() % 300, rand() % 300, rand() % 300));
	CPen *color;
	color = dc.SelectObject(&pen);
	dc.Ellipse(cr);
	//pDC->Ellipse(rc);
	SetTimer(0, rand() % 30 + 40, NULL);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCС���˶�4133View ���

#ifdef _DEBUG
void CMFCС���˶�4133View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCС���˶�4133View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCС���˶�4133Doc* CMFCС���˶�4133View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCС���˶�4133Doc)));
	return (CMFCС���˶�4133Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCС���˶�4133View ��Ϣ�������


void CMFCС���˶�4133View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (st == 1)
	{
    if (cr.left+120 >= rc.right || cr.left == 0)
		i++;
	if (i % 2 == 0)
	{
		cr.left += 10;
		cr.right += 10;
	}
	else
	{
		cr.left -= 10;
		cr.right -= 10;
	}
	}
	
	Invalidate();
	CView::OnTimer(nIDEvent);
}


void CMFCС���˶�4133View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	st=1;
	CView::OnLButtonDown(nFlags, point);
}


void CMFCС���˶�4133View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	st = 0;
	CView::OnLButtonDblClk(nFlags, point);
}
