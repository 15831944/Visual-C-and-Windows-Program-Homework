
// MFC��������_1View.cpp : CMFC��������_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC��������_1.h"
#endif

#include "MFC��������_1Doc.h"
#include "MFC��������_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC��������_1View

IMPLEMENT_DYNCREATE(CMFC��������_1View, CView)

BEGIN_MESSAGE_MAP(CMFC��������_1View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CMFC��������_1View ����/����

CMFC��������_1View::CMFC��������_1View()
{
	// TODO: �ڴ˴���ӹ������
	s = "";
	r.left = 20; r.right = 290;
	r.top = 20; r.bottom = 60;
	p.x = 30; p.y=30;
}

CMFC��������_1View::~CMFC��������_1View()
{
}

BOOL CMFC��������_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC��������_1View ����

void CMFC��������_1View::OnDraw(CDC* pDC)
{
	CMFC��������_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(r);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC��������_1View ��ӡ

BOOL CMFC��������_1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFC��������_1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFC��������_1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFC��������_1View ���

#ifdef _DEBUG
void CMFC��������_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC��������_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC��������_1Doc* CMFC��������_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC��������_1Doc)));
	return (CMFC��������_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC��������_1View ��Ϣ�������


void CMFC��������_1View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	TEXTMETRIC t;
	dc.GetTextMetrics(&t);
	CSize sz = dc.GetTextExtent(s);
	CPoint pt;
	pt.x = p.x + sz.cx;
	pt.y = p.y + sz.cy;
	SetCaretPos(pt);
	if (pt.x<r.right-15)
	if (0x08 == nChar)//�˸����ɾ������
	{
		COLORREF clr = dc.SetTextColor(dc.GetBkColor());
		dc.TextOutW(p.x, p.y, s);
		s = s.Left(s.GetLength() - 1);
		dc.SetTextColor(clr);
	}
	else
	{
		s += (TCHAR)nChar;
	}	
	dc.TextOutW(p.x, p.y, s);
	CView::OnChar(nChar, nRepCnt, nFlags);
}
