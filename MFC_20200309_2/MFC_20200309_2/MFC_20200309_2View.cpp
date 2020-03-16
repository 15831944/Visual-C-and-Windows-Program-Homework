
// MFC_20200309_2View.cpp : CMFC_20200309_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_20200309_2.h"
#endif

#include "MFC_20200309_2Doc.h"
#include "MFC_20200309_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_20200309_2View

IMPLEMENT_DYNCREATE(CMFC_20200309_2View, CView)

BEGIN_MESSAGE_MAP(CMFC_20200309_2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC_20200309_2View ����/����

CMFC_20200309_2View::CMFC_20200309_2View()
{
	// TODO: �ڴ˴���ӹ������
	ca.SetSize(300);
}

CMFC_20200309_2View::~CMFC_20200309_2View()
{
}

BOOL CMFC_20200309_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_20200309_2View ����

void CMFC_20200309_2View::OnDraw(CDC* pDC)
{
	CMFC_20200309_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < ca.GetSize(); i++)
		pDC->Ellipse(ca.GetAt(i));
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_20200309_2View ���

#ifdef _DEBUG
void CMFC_20200309_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_20200309_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_20200309_2Doc* CMFC_20200309_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_20200309_2Doc)));
	return (CMFC_20200309_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_20200309_2View ��Ϣ�������


void CMFC_20200309_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r1 = rand() % 60 + 8; int r2 = rand() % 60 + 8;
	CRect cr(point.x - r1, point.y - r2, point.x + r1, point.y + r2);
	ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
