
// MFC03�κ���ҵView.cpp : CMFC03�κ���ҵView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC03�κ���ҵ.h"
#endif

#include "MFC03�κ���ҵDoc.h"
#include "MFC03�κ���ҵView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC03�κ���ҵView

IMPLEMENT_DYNCREATE(CMFC03�κ���ҵView, CView)

BEGIN_MESSAGE_MAP(CMFC03�κ���ҵView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC03�κ���ҵView ����/����
int flag;
CMFC03�κ���ҵView::CMFC03�κ���ҵView()
{
	// TODO: �ڴ˴���ӹ������
	flag = 0;
	v = _T("����view�����:v");
}

CMFC03�κ���ҵView::~CMFC03�κ���ҵView()
{
}

BOOL CMFC03�κ���ҵView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC03�κ���ҵView ����

void CMFC03�κ���ҵView::OnDraw(CDC* pDC)
{
	CMFC03�κ���ҵDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s = _T("�������������ʾ����:d,v");
	pDC->TextOutW(100,100,s);
	if (flag)
	{
		CString ss = v + pDoc->d;
		pDC->TextOutW(100, 150, ss);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC03�κ���ҵView ���

#ifdef _DEBUG
void CMFC03�κ���ҵView::AssertValid() const
{
	CView::AssertValid();
}

void CMFC03�κ���ҵView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC03�κ���ҵDoc* CMFC03�κ���ҵView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC03�κ���ҵDoc)));
	return (CMFC03�κ���ҵDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFC03�κ���ҵView ��Ϣ�������


void CMFC03�κ���ҵView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 1;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
