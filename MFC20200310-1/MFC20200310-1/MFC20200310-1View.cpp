
// MFC20200310-1View.cpp : CMFC202003101View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC20200310-1.h"
#endif

#include "MFC20200310-1Doc.h"
#include "MFC20200310-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC202003101View

IMPLEMENT_DYNCREATE(CMFC202003101View, CView)

BEGIN_MESSAGE_MAP(CMFC202003101View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFC202003101View ����/����

CMFC202003101View::CMFC202003101View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC202003101View::~CMFC202003101View()
{
}

BOOL CMFC202003101View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC202003101View ����

void CMFC202003101View::OnDraw(CDC* /*pDC*/)
{
	CMFC202003101Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC202003101View ���

#ifdef _DEBUG
void CMFC202003101View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC202003101View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC202003101Doc* CMFC202003101View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC202003101Doc)));
	return (CMFC202003101Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC202003101View ��Ϣ�������


void CMFC202003101View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString S= _T("�����������");
	CClientDC dc(this);
	dc.TextOutW(200, 200, S);
	CView::OnLButtonDown(nFlags, point);
}


void CMFC202003101View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString S = _T("�������̧��");
	CClientDC dc(this);
	dc.TextOutW(200, 200, S);
	CView::OnLButtonUp(nFlags, point);
}
