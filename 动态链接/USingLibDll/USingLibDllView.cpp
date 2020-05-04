
// USingLibDllView.cpp : CUSingLibDllView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "USingLibDll.h"
#endif

#include "USingLibDllDoc.h"
#include "USingLibDllView.h"
#include "Win32D.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUSingLibDllView

IMPLEMENT_DYNCREATE(CUSingLibDllView, CView)

BEGIN_MESSAGE_MAP(CUSingLibDllView, CView)
END_MESSAGE_MAP()

// CUSingLibDllView ����/����

CUSingLibDllView::CUSingLibDllView()
{
	// TODO: �ڴ˴���ӹ������

}

CUSingLibDllView::~CUSingLibDllView()
{
}

BOOL CUSingLibDllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUSingLibDllView ����

void CUSingLibDllView::OnDraw(CDC* pDC)
{
	CUSingLibDllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s;
	int n = 5;
	int a = factorial(n);
	if (a>0)
		s.Format(_T("%d�Ľ׳�Ϊ��%d"), n, a);
	else
		s.Format(_T("%d��ֵ���ڱ��㷨���巶Χ"), n);
	pDC->TextOutW(100, 200, s);


	CString s2;
	float edg = 30.0;
	FAC a1;
	float ans = a1.convert(edg);
	s2.Format(_T("convert(30.0) ��ֵ:%f"), a1.convert(edg));
	pDC->TextOutW(100, 300, s2);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CUSingLibDllView ���

#ifdef _DEBUG
void CUSingLibDllView::AssertValid() const
{
	CView::AssertValid();
}

void CUSingLibDllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUSingLibDllDoc* CUSingLibDllView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUSingLibDllDoc)));
	return (CUSingLibDllDoc*)m_pDocument;
}
#endif //_DEBUG


// CUSingLibDllView ��Ϣ�������
