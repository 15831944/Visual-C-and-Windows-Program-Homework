
// MFC20200316View.cpp : CMFC20200316View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC20200316.h"
#endif

#include "MFC20200316Doc.h"
#include "MFC20200316View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC20200316View

IMPLEMENT_DYNCREATE(CMFC20200316View, CView)

BEGIN_MESSAGE_MAP(CMFC20200316View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMFC20200316View ����/����

CMFC20200316View::CMFC20200316View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC20200316View::~CMFC20200316View()
{
}

BOOL CMFC20200316View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC20200316View ����

void CMFC20200316View::OnDraw(CDC* pDC)
{
	CMFC20200316Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->m_crlRect);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC20200316View ���

#ifdef _DEBUG
void CMFC20200316View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC20200316View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC20200316Doc* CMFC20200316View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC20200316Doc)));
	return (CMFC20200316Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC20200316View ��Ϣ�������


void CMFC20200316View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC20200316Doc* pDoc = GetDocument();
	pDoc->m_crlRect.left = point.x;
	pDoc->m_crlRect.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC20200316View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC20200316Doc* pDoc = GetDocument();
	pDoc->m_crlRect.right = point.x;
	pDoc->m_crlRect.bottom = point.y;
	InvalidateRect(NULL, FALSE);
	CView::OnLButtonUp(nFlags, point);
}


void CMFC20200316View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString s = _T("");
	s.Format(s + "���λ�ã�X: %d    Y: %d��", point.x, point.y);
	dc.TextOut(30, 30, s);
	CView::OnMouseMove(nFlags, point);
}
