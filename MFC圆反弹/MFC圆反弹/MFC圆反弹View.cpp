
// MFCԲ����View.cpp : CMFCԲ����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCԲ����.h"
#endif

#include "MFCԲ����Doc.h"
#include "MFCԲ����View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCԲ����View

IMPLEMENT_DYNCREATE(CMFCԲ����View, CView)

BEGIN_MESSAGE_MAP(CMFCԲ����View, CView)
END_MESSAGE_MAP()

// CMFCԲ����View ����/����

CMFCԲ����View::CMFCԲ����View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCԲ����View::~CMFCԲ����View()
{
}

BOOL CMFCԲ����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCԲ����View ����

void CMFCԲ����View::OnDraw(CDC* /*pDC*/)
{
	CMFCԲ����Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCԲ����View ���

#ifdef _DEBUG
void CMFCԲ����View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCԲ����View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCԲ����Doc* CMFCԲ����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCԲ����Doc)));
	return (CMFCԲ����Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCԲ����View ��Ϣ�������
