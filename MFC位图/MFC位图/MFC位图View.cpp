
// MFCλͼView.cpp : CMFCλͼView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCλͼ.h"
#endif

#include "MFCλͼDoc.h"
#include "MFCλͼView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCλͼView

IMPLEMENT_DYNCREATE(CMFCλͼView, CView)

BEGIN_MESSAGE_MAP(CMFCλͼView, CView)
END_MESSAGE_MAP()

// CMFCλͼView ����/����

CMFCλͼView::CMFCλͼView()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadMappedBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CMFCλͼView::~CMFCλͼView()
{
}

BOOL CMFCλͼView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCλͼView ����

void CMFCλͼView::OnDraw(CDC* pDC)
{
	CMFCλͼDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCλͼView ���

#ifdef _DEBUG
void CMFCλͼView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCλͼView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCλͼDoc* CMFCλͼView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCλͼDoc)));
	return (CMFCλͼDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCλͼView ��Ϣ�������
