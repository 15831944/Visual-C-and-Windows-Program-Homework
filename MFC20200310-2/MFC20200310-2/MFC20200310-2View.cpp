
// MFC20200310-2View.cpp : CMFC202003102View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC20200310-2.h"
#endif

#include "MFC20200310-2Doc.h"
#include "MFC20200310-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC202003102View

IMPLEMENT_DYNCREATE(CMFC202003102View, CView)

BEGIN_MESSAGE_MAP(CMFC202003102View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC202003102View ����/����

CMFC202003102View::CMFC202003102View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC202003102View::~CMFC202003102View()
{
}

BOOL CMFC202003102View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC202003102View ����

void CMFC202003102View::OnDraw(CDC* /*pDC*/)
{
	CMFC202003102Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC202003102View ���

#ifdef _DEBUG
void CMFC202003102View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC202003102View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC202003102Doc* CMFC202003102View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC202003102Doc)));
	return (CMFC202003102Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC202003102View ��Ϣ�������


void CMFC202003102View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s = _T("");
	CMFC202003102Doc* pDoc = GetDocument();
	s.Format(s + "%d+%d=%d", pDoc->A, pDoc->B, pDoc->A + pDoc->B);

	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
	CView::OnLButtonDown(nFlags, point);
}
