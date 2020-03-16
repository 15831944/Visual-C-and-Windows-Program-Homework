
// MFC01View.cpp : CMFC01View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC01.h"
#endif

#include "MFC01Doc.h"
#include "MFC01View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC01View

IMPLEMENT_DYNCREATE(CMFC01View, CView)

BEGIN_MESSAGE_MAP(CMFC01View, CView)
END_MESSAGE_MAP()

// CMFC01View ����/����

CMFC01View::CMFC01View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC01View::~CMFC01View()
{
}

BOOL CMFC01View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC01View ����

void CMFC01View::OnDraw(CDC* pDC)
{
	CMFC01Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString S = _T("����***");
	int A = 0;
	S.Format(S + "%d", A);
	pDC->TextOutW(200, 200, S);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC01View ���

#ifdef _DEBUG
void CMFC01View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC01View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC01Doc* CMFC01View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC01Doc)));
	return (CMFC01Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC01View ��Ϣ�������
