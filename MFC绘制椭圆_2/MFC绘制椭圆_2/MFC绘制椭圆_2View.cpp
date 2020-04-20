
// MFC������Բ_2View.cpp : CMFC������Բ_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC������Բ_2.h"
#endif

#include "MFC������Բ_2Doc.h"
#include "MFC������Բ_2View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC������Բ_2View

IMPLEMENT_DYNCREATE(CMFC������Բ_2View, CView)

BEGIN_MESSAGE_MAP(CMFC������Բ_2View, CView)
	ON_COMMAND(ID_Shown, &CMFC������Բ_2View::OnShown)
END_MESSAGE_MAP()

// CMFC������Բ_2View ����/����

CMFC������Բ_2View::CMFC������Բ_2View()
{
	// TODO: �ڴ˴���ӹ������
	top = 0, bottom = 0, right = 0, left = 0,
	flag=0;
}

CMFC������Բ_2View::~CMFC������Բ_2View()
{
}

BOOL CMFC������Բ_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC������Բ_2View ����

void CMFC������Բ_2View::OnDraw(CDC* /*pDC*/)
{
	CMFC������Բ_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (flag)
	{
        CRect rect;
		rect.bottom = bottom;
		rect.top = top;
		rect.right = right;
		rect.left = left;
	    GetDC()->Ellipse(rect);
	}
		
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC������Բ_2View ���

#ifdef _DEBUG
void CMFC������Բ_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC������Բ_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC������Բ_2Doc* CMFC������Բ_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC������Բ_2Doc)));
	return (CMFC������Բ_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC������Բ_2View ��Ϣ�������

MyDlg dlg;
void CMFC������Բ_2View::OnShown()
{
	// TODO: �ڴ���������������
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		flag=1;
		top = dlg.top;
		bottom = dlg.bottom;
		left = dlg.left;
		right = dlg.right;	
	}
	Invalidate();
}
