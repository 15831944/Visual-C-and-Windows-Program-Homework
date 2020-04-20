
// MFC������Բ_3View.cpp : CMFC������Բ_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC������Բ_3.h"
#endif

#include "MFC������Բ_3Doc.h"
#include "MFC������Բ_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC������Բ_3View

IMPLEMENT_DYNCREATE(CMFC������Բ_3View, CView)

BEGIN_MESSAGE_MAP(CMFC������Բ_3View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC������Բ_3View ����/����

CMFC������Բ_3View::CMFC������Բ_3View()
{
	// TODO: �ڴ˴���ӹ������
	rect1.bottom = 420; rect1.top = 120; rect1.left = 450; rect1.right = 920;
	m_ptMouse.x = m_ptMouse.y = 0;
	ca.SetSize(300);
	f = 0;
}

CMFC������Բ_3View::~CMFC������Բ_3View()
{
}

BOOL CMFC������Բ_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC������Բ_3View ����

void CMFC������Բ_3View::OnDraw(CDC* pDC)
{
	CMFC������Բ_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(rect1);
	if (f)
	for (int i = 0; i < ca.GetSize(); i++)
	{
		CDC * dc = GetDC();
		CPen * pOldPen = NULL;
		CPen pen;
		pen.CreatePen(PS_DASH, 1, RGB(255,0 , 0));//����
		//pen.CreatePen(PS_DASHDOT, 1, RGB(0, 0, 255));//�㻭��
		pOldPen = dc->SelectObject(&pen);
		CBrush * pOldBrush = NULL;
		CBrush * pBrush = CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));//����͸��Ч��
		pOldBrush = dc->SelectObject(pBrush);
		dc->Rectangle(&ca.GetAt(i));
		dc->SelectObject(pOldPen);
		pen.DeleteObject();
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC������Բ_3View ���

#ifdef _DEBUG
void CMFC������Բ_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC������Բ_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC������Բ_3Doc* CMFC������Բ_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC������Բ_3Doc)));
	return (CMFC������Բ_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC������Բ_3View ��Ϣ�������


void CMFC������Բ_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (rect1.PtInRect(point))
	{
		CRect r;
		f++;
		r.bottom = rect1.bottom, r.top = rect1.top;
		r.left = rect1.left,r.right=rect1.right;
		ca.Add(r);	
		Invalidate();
	}
	
	CView::OnLButtonDown(nFlags, point);
}
