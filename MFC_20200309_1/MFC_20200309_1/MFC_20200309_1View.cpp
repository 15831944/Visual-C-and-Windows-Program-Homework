
// MFC_20200309_1View.cpp : CMFC_20200309_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_20200309_1.h"
#endif

#include "MFC_20200309_1Doc.h"
#include "MFC_20200309_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_20200309_1View

IMPLEMENT_DYNCREATE(CMFC_20200309_1View, CView)

BEGIN_MESSAGE_MAP(CMFC_20200309_1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC_20200309_1View ����/����

CMFC_20200309_1View::CMFC_20200309_1View()
{
	// TODO: �ڴ˴���ӹ������


}

CMFC_20200309_1View::~CMFC_20200309_1View()
{
}

BOOL CMFC_20200309_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_20200309_1View ����

void CMFC_20200309_1View::OnDraw(CDC* pDC)
{
	CMFC_20200309_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_20200309_1View ���

#ifdef _DEBUG
void CMFC_20200309_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_20200309_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_20200309_1Doc* CMFC_20200309_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_20200309_1Doc)));
	return (CMFC_20200309_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_20200309_1View ��Ϣ�������


void CMFC_20200309_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	//CRect cr;
	this->GetClientRect(&cr);
	this->Invalidate();
	//CClientDC dc(this);
	//dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
}
