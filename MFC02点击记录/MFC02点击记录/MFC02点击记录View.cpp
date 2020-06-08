
// MFC02�����¼View.cpp : CMFC02�����¼View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC02�����¼.h"
#endif

#include "MFC02�����¼Doc.h"
#include "MFC02�����¼View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC02�����¼View

IMPLEMENT_DYNCREATE(CMFC02�����¼View, CView)

BEGIN_MESSAGE_MAP(CMFC02�����¼View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC02�����¼View ����/����
int flag;
CMFC02�����¼View::CMFC02�����¼View()
{
	// TODO: �ڴ˴���ӹ������
	flag = 0;
}

CMFC02�����¼View::~CMFC02�����¼View()
{
}

BOOL CMFC02�����¼View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC02�����¼View ����

void CMFC02�����¼View::OnDraw(CDC* pDC)
{
	CMFC02�����¼Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString ss = _T("�������������");
	CString s=_T("");
	if (flag)
		s.Format(_T("%d"),pDoc->count);
	ss += s;
	pDC->TextOutW(100,100,ss);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC02�����¼View ���

#ifdef _DEBUG
void CMFC02�����¼View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC02�����¼View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC02�����¼Doc* CMFC02�����¼View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC02�����¼Doc)));
	return (CMFC02�����¼Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC02�����¼View ��Ϣ�������


void CMFC02�����¼View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC02�����¼Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC02�����¼View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 1;
	Invalidate();
	CView::OnRButtonDown(nFlags, point);
}
