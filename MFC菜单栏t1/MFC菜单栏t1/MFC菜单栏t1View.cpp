
// MFC�˵���t1View.cpp : CMFC�˵���t1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC�˵���t1.h"
#endif

#include "MFC�˵���t1Doc.h"
#include "MFC�˵���t1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC�˵���t1View

IMPLEMENT_DYNCREATE(CMFC�˵���t1View, CView)

BEGIN_MESSAGE_MAP(CMFC�˵���t1View, CView)
	ON_COMMAND(ID_SHOWNUMBER, &CMFC�˵���t1View::OnShownumber)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMFC�˵���t1View ����/����

CMFC�˵���t1View::CMFC�˵���t1View()
{
	// TODO: �ڴ˴���ӹ������
}

CMFC�˵���t1View::~CMFC�˵���t1View()
{
}

BOOL CMFC�˵���t1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC�˵���t1View ����

void CMFC�˵���t1View::OnDraw(CDC* pDC)
{
	CMFC�˵���t1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
}


// CMFC�˵���t1View ���

#ifdef _DEBUG
void CMFC�˵���t1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC�˵���t1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC�˵���t1Doc* CMFC�˵���t1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC�˵���t1Doc)));
	return (CMFC�˵���t1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC�˵���t1View ��Ϣ�������


void CMFC�˵���t1View::OnShownumber()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	CRect cr;
	this->GetClientRect(&cr);
	x = (cr.left+cr.right )/2;
	y = (cr.bottom + cr.top) / 2;
	cr1.left=x- 10;
	cr1.right=x+ 10;
	cr1.bottom=y+10;
	cr1.top=y-10;
	dc.Ellipse(cr1);
	SetTimer(0, rand() % 300 + 100, NULL);
    Invalidate();
}


void CMFC�˵���t1View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	cr1.left -= 10;
	cr1.right += 10;
	cr1.bottom +=10;
	cr1.top -= 10;
	CPen pen(PS_SOLID, 5, RGB(rand() % 300, rand() % 300, rand() % 300));
	CPen *color;
	color = dc.SelectObject(&pen);
	dc.Ellipse(cr1);
	CView::OnTimer(nIDEvent);
}
