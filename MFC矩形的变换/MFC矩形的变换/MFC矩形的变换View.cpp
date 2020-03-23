
// MFC���εı任View.cpp : CMFC���εı任View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC���εı任.h"
#endif

#include "MFC���εı任Doc.h"
#include "MFC���εı任View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC���εı任View

IMPLEMENT_DYNCREATE(CMFC���εı任View, CView)

BEGIN_MESSAGE_MAP(CMFC���εı任View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC���εı任View ����/����

CMFC���εı任View::CMFC���εı任View()
{
	// TODO: �ڴ˴���ӹ������
	rect.top = 300;
	rect.bottom = 200;
	rect.right = 300;
	rect.left = 200;
}

CMFC���εı任View::~CMFC���εı任View()
{
}

BOOL CMFC���εı任View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC���εı任View ����

void CMFC���εı任View::OnDraw(CDC* pDC)
{
	CMFC���εı任Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(&rect);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC���εı任View ���

#ifdef _DEBUG
void CMFC���εı任View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC���εı任View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC���εı任Doc* CMFC���εı任View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC���εı任Doc)));
	return (CMFC���εı任Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC���εı任View ��Ϣ�������


void CMFC���εı任View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect clientRec;
	switch (nChar)
	{
	case VK_LEFT:
		
		rect.right -= 10;
		rect.left -= 10;
		break;
	case VK_RIGHT:
		rect.right += 10;
		rect.left += 10;
		break;
	case VK_UP:
		rect.bottom -= 10;
		rect.top -= 10;
		break;
	case VK_DOWN:
		rect.bottom += 10;
		rect.top += 10;
		break;
	case VK_HOME:
		rect.bottom -= 5;
		rect.left -= 5;
		break;
	case VK_END:
		if (rect.bottom + 5 < rect.top)
		{
			rect.bottom += 5;
			rect.left += 5;
		}
		else
			rect.bottom = rect.left =rect.right=rect.top;
		break;
	}
	InvalidateRect(NULL, true);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CMFC���εı任View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	rect.top = 300;
	rect.bottom = 200;
	rect.right = 300;
	rect.left = 200;
	InvalidateRect(NULL, true);
	CView::OnLButtonDown(nFlags, point);
}
