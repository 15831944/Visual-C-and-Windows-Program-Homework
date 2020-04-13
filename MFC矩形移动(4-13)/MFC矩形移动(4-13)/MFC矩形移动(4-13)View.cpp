
// MFC�����ƶ�(4-13)View.cpp : CMFC�����ƶ�413View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC�����ƶ�(4-13).h"
#endif

#include "MFC�����ƶ�(4-13)Doc.h"
#include "MFC�����ƶ�(4-13)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC�����ƶ�413View

IMPLEMENT_DYNCREATE(CMFC�����ƶ�413View, CView)

BEGIN_MESSAGE_MAP(CMFC�����ƶ�413View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CMFC�����ƶ�413View ����/����

CMFC�����ƶ�413View::CMFC�����ƶ�413View()
{
	// TODO: �ڴ˴���ӹ������
	m_bLButtonDown = false;
	m_ptMouse.x = 100;
	m_ptMouse.y = 100;
	rect.top = m_ptMouse.y - 50;
	rect.left = m_ptMouse.x - 50;
	rect.bottom = rect.top + 120;
	rect.right = rect.left + 120;
}

CMFC�����ƶ�413View::~CMFC�����ƶ�413View()
{
}




BOOL CMFC�����ƶ�413View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC�����ƶ�413View ����

void CMFC�����ƶ�413View::OnDraw(CDC* pDC)
{
	CMFC�����ƶ�413Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC�����ƶ�413View ��ӡ

BOOL CMFC�����ƶ�413View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFC�����ƶ�413View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFC�����ƶ�413View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFC�����ƶ�413View ���

#ifdef _DEBUG
void CMFC�����ƶ�413View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC�����ƶ�413View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC�����ƶ�413Doc* CMFC�����ƶ�413View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC�����ƶ�413Doc)));
	return (CMFC�����ƶ�413Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC�����ƶ�413View ��Ϣ�������


void CMFC�����ƶ�413View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	m_bLButtonDown = true;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC�����ƶ�413View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	m_bLButtonDown = false;
	CView::OnLButtonUp(nFlags, point);
}


void CMFC�����ƶ�413View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (m_bLButtonDown == true)
	{
		if(rect.PtInRect(point))
		{
			m_ptMouse = point;
			Invalidate();
		}
	}
	CView::OnMouseMove(nFlags, point);
}


void CMFC�����ƶ�413View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CView::OnPaint()
	rect.top = m_ptMouse.y - 50;
	rect.left = m_ptMouse.x - 50;
	rect.bottom = rect.top + 120;
	rect.right = rect.left + 120;
	dc.Rectangle(&rect);
}
