
// MFCMouseMoveͳ��View.cpp : CMFCMouseMoveͳ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCMouseMoveͳ��.h"
#endif

#include "MFCMouseMoveͳ��Doc.h"
#include "MFCMouseMoveͳ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCMouseMoveͳ��View

IMPLEMENT_DYNCREATE(CMFCMouseMoveͳ��View, CView)

BEGIN_MESSAGE_MAP(CMFCMouseMoveͳ��View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMFCMouseMoveͳ��View ����/����

CMFCMouseMoveͳ��View::CMFCMouseMoveͳ��View()
{
	// TODO: �ڴ˴���ӹ������
	x0 = x1 = y0 = y1 = 0;
	count = 0;
	set = false;
}

CMFCMouseMoveͳ��View::~CMFCMouseMoveͳ��View()
{
}

BOOL CMFCMouseMoveͳ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCMouseMoveͳ��View ����

void CMFCMouseMoveͳ��View::OnDraw(CDC* /*pDC*/)
{
	CMFCMouseMoveͳ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCMouseMoveͳ��View ���

#ifdef _DEBUG
void CMFCMouseMoveͳ��View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCMouseMoveͳ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCMouseMoveͳ��Doc* CMFCMouseMoveͳ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCMouseMoveͳ��Doc)));
	return (CMFCMouseMoveͳ��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCMouseMoveͳ��View ��Ϣ�������


void CMFCMouseMoveͳ��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString s;
	set = true;
	x0 = point.x;
	y0 = point.y;
	s.Format(_T("���λ�� X: %d Y: %d"), x0, y0);//���Ե���ĸ�ֵ
	dc.TextOutW(30, 30, s);
	CView::OnLButtonDown(nFlags, point);
}


void CMFCMouseMoveͳ��View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString a; CString b; CString s;
	x1 = point.x;
	y1 = point.y;
	int distance = sqrt((x1 - x0)*(x1 - x0) + (y1 - y0)*(y1 - y0));
	a.Format(_T("̧��λ�� X: %d Y: %d"), x1, y1);//����̧��ĸ�ֵ
	dc.TextOutW(30, 30, a);
	b.Format(_T("�������룺 %d"), distance);
	double ans = (double)distance / count;
	s.Format(_T("MouseMove������%d�Σ������ƶ�%.6f�����ط���һ��"),count,ans);
	dc.TextOutW(200, 500, s);
	CView::OnLButtonUp(nFlags, point);
}


void CMFCMouseMoveͳ��View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (set)
		count++;
	CView::OnMouseMove(nFlags, point);
}
