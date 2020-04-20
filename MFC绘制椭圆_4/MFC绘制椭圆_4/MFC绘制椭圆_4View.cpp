
// MFC������Բ_4View.cpp : CMFC������Բ_4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC������Բ_4.h"
#endif

#include "MFC������Բ_4Doc.h"
#include "MFC������Բ_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC������Բ_4View

IMPLEMENT_DYNCREATE(CMFC������Բ_4View, CView)

BEGIN_MESSAGE_MAP(CMFC������Բ_4View, CView)
	ON_COMMAND(ID_Show, &CMFC������Բ_4View::OnShow)
END_MESSAGE_MAP()

// CMFC������Բ_4View ����/����

CMFC������Բ_4View::CMFC������Բ_4View()
{
	// TODO: �ڴ˴���ӹ������
	rect.top=10, rect.bottom=300, rect.left=200, rect.right =600 ;
	red = green = blue = 0;
	flag = false;
}

CMFC������Բ_4View::~CMFC������Բ_4View()
{
}

BOOL CMFC������Բ_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC������Բ_4View ����

void CMFC������Բ_4View::OnDraw(CDC* pDC)
{
	CMFC������Բ_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(rect);
	if (flag) {
	int color = RGB(red, green, blue);
	CBrush brush(color);
	CBrush *oldbrush;
	oldbrush = pDC->SelectObject(&brush);//ѡ�µĻ�ˢ
	pDC->Ellipse(rect);
	pDC->SelectObject(oldbrush);//��ԭ���Ļ�ˢѡ��ȥ
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC������Բ_4View ���

#ifdef _DEBUG
void CMFC������Բ_4View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC������Բ_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC������Բ_4Doc* CMFC������Բ_4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC������Բ_4Doc)));
	return (CMFC������Բ_4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC������Բ_4View ��Ϣ�������
#include"MyDlg.h"
MyDlg dlg;
void CMFC������Բ_4View::OnShow()
{
	// TODO: �ڴ���������������
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		flag = true;
		red = dlg.red;
		green = dlg.green;
		blue = dlg.blue;
		Invalidate();
	}
}
