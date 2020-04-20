
// MFC������Բ_1View.cpp : CMFC������Բ_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC������Բ_1.h"
#endif

#include "MFC������Բ_1Doc.h"
#include "MFC������Բ_1View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC������Բ_1View

IMPLEMENT_DYNCREATE(CMFC������Բ_1View, CView)

BEGIN_MESSAGE_MAP(CMFC������Բ_1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_PAINT()
	ON_COMMAND(ID_SHOWN_1, &CMFC������Բ_1View::OnShown1)
	ON_BN_CLICKED(IDOK, &CMFC������Բ_1View::OnBnClickedOk)
END_MESSAGE_MAP()

// CMFC������Բ_1View ����/����

CMFC������Բ_1View::CMFC������Բ_1View()
{
	// TODO: �ڴ˴���ӹ������
	point1.x = point1.y = 0;
	point2.x = point2.y = 0;
	m_bLButtonDown = false;
	ca.bottom = ca.top = ca.right = ca.left = 0;
	f = 0;
	r.bottom = r.top = r.right = r.left = 0;
}

CMFC������Բ_1View::~CMFC������Բ_1View()
{
}

BOOL CMFC������Բ_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC������Բ_1View ����

void CMFC������Բ_1View::OnDraw(CDC* pDC)
{
	CMFC������Բ_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if(f)
		pDC->Ellipse(r);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC������Բ_1View ���

#ifdef _DEBUG
void CMFC������Բ_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC������Բ_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC������Բ_1Doc* CMFC������Բ_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC������Բ_1Doc)));
	return (CMFC������Բ_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC������Բ_1View ��Ϣ�������


void CMFC������Բ_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	point1 = point;
	m_bLButtonDown = true;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC������Բ_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	point2 = point;
	m_bLButtonDown = false;
	CView::OnLButtonUp(nFlags, point);
}


void CMFC������Բ_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	point2 = point;
	if (m_bLButtonDown == true)
	{
		CClientDC dc(this);
		ca.bottom = point2.y;
		ca.top = point1.y;
		ca.left = point1.x;
		ca.right = point2.x;
		dc.Ellipse(ca);
		Invalidate();
	}

	CView::OnMouseMove(nFlags, point);
}


void CMFC������Բ_1View::OnPaint()
{
	CPaintDC dc(this); 
	ca.bottom = point2.y;
	ca.top = point1.y;
	ca.left = point1.x;
	ca.right = point2.x;
	dc.Ellipse(ca);				   
}

MyDlg dlg;
void CMFC������Բ_1View::OnShown1()
{
	// TODO: �ڴ���������������
	int t = dlg.DoModal();
	if (t == IDOK)
	{
	}
}


void CMFC������Բ_1View::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	/*
	f=1;
	r.bottom = dlg.cre_bottom;
	r.top = dlg.cre_top;
	r.left = dlg.cre_left;
	r.right = dlg.cre_right;
	CClientDC dc(this);
	CString s;
	s.Format(_T("��%d", r.bottom));
	dc.TextOutW(200, 200, s);
	Invalidate();
	*/
}
