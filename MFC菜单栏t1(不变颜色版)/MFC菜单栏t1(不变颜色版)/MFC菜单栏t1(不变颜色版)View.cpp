
// MFC�˵���t1(������ɫ��)View.cpp : CMFC�˵���t1������ɫ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC�˵���t1(������ɫ��).h"
#endif

#include "MFC�˵���t1(������ɫ��)Doc.h"
#include "MFC�˵���t1(������ɫ��)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC�˵���t1������ɫ��View

IMPLEMENT_DYNCREATE(CMFC�˵���t1������ɫ��View, CView)

BEGIN_MESSAGE_MAP(CMFC�˵���t1������ɫ��View, CView)
	ON_COMMAND(ID_SHOW, &CMFC�˵���t1������ɫ��View::OnShow)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMFC�˵���t1������ɫ��View ����/����

CMFC�˵���t1������ɫ��View::CMFC�˵���t1������ɫ��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC�˵���t1������ɫ��View::~CMFC�˵���t1������ɫ��View()
{
}

BOOL CMFC�˵���t1������ɫ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC�˵���t1������ɫ��View ����

void CMFC�˵���t1������ɫ��View::OnDraw(CDC* /*pDC*/)
{
	CMFC�˵���t1������ɫ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC�˵���t1������ɫ��View ���

#ifdef _DEBUG
void CMFC�˵���t1������ɫ��View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC�˵���t1������ɫ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC�˵���t1������ɫ��Doc* CMFC�˵���t1������ɫ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC�˵���t1������ɫ��Doc)));
	return (CMFC�˵���t1������ɫ��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC�˵���t1������ɫ��View ��Ϣ�������


void CMFC�˵���t1������ɫ��View::OnShow()
{
	CClientDC dc(this);
	CRect cr;
	this->GetClientRect(&cr);
	x = (cr.left + cr.right) / 2;
	y = (cr.bottom + cr.top) / 2;
	cr1.left = x - 10;
	cr1.right = x + 10;
	cr1.bottom = y + 10;
	cr1.top = y - 10;
	dc.Ellipse(cr1);
	SetTimer(0, rand() % 300 + 100, NULL);
	Invalidate();
}


void CMFC�˵���t1������ɫ��View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	cr1.left -= 10;
	cr1.right += 10;
	cr1.bottom += 10;
	cr1.top -= 10;
	dc.Ellipse(cr1);
	CView::OnTimer(nIDEvent);
}
