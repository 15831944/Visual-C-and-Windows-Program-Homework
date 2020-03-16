
// MFC03View.cpp : CMFC03View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC03.h"
#endif

#include "MFC03Doc.h"
#include "MFC03View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC03View

IMPLEMENT_DYNCREATE(CMFC03View, CView)

BEGIN_MESSAGE_MAP(CMFC03View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC03View ����/����

CMFC03View::CMFC03View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC03View::~CMFC03View()
{
}

BOOL CMFC03View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC03View ����

void CMFC03View::OnDraw(CDC* /*pDC*/)
{
	CMFC03Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC03View ���

#ifdef _DEBUG
void CMFC03View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC03View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC03Doc* CMFC03View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC03Doc)));
	return (CMFC03Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC03View ��Ϣ�������


void CMFC03View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC03Doc* pDoc = GetDocument();
	pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC03View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC03Doc* pDoc = GetDocument();
	CString s= _T("");
	s.Format(s+"%d", pDoc->count);
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
	CView::OnRButtonDown(nFlags, point);
}
