
// Library_0View.cpp : CLibrary_0View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Library_0.h"
#endif

#include "Library_0Doc.h"
#include "Library_0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CLibrary_0View

IMPLEMENT_DYNCREATE(CLibrary_0View, CView)

BEGIN_MESSAGE_MAP(CLibrary_0View, CView)
END_MESSAGE_MAP()

// CLibrary_0View ����/����

CLibrary_0View::CLibrary_0View()
{
	// TODO: �ڴ˴���ӹ������

}

CLibrary_0View::~CLibrary_0View()
{
}

BOOL CLibrary_0View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CLibrary_0View ����

void CLibrary_0View::OnDraw(CDC* /*pDC*/)
{
	CLibrary_0Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CLibrary_0View ���

#ifdef _DEBUG
void CLibrary_0View::AssertValid() const
{
	CView::AssertValid();
}

void CLibrary_0View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CLibrary_0Doc* CLibrary_0View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CLibrary_0Doc)));
	return (CLibrary_0Doc*)m_pDocument;
}
#endif //_DEBUG


// CLibrary_0View ��Ϣ�������
