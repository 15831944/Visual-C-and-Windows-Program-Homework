
// �Բ�ɫ�����Բ�ڲ�View.cpp : C�Բ�ɫ�����Բ�ڲ�View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�Բ�ɫ�����Բ�ڲ�.h"
#endif

#include "�Բ�ɫ�����Բ�ڲ�Doc.h"
#include "�Բ�ɫ�����Բ�ڲ�View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�Բ�ɫ�����Բ�ڲ�View

IMPLEMENT_DYNCREATE(C�Բ�ɫ�����Բ�ڲ�View, CView)

BEGIN_MESSAGE_MAP(C�Բ�ɫ�����Բ�ڲ�View, CView)
END_MESSAGE_MAP()

// C�Բ�ɫ�����Բ�ڲ�View ����/����

C�Բ�ɫ�����Բ�ڲ�View::C�Բ�ɫ�����Բ�ڲ�View()
{
	// TODO: �ڴ˴���ӹ������

}

C�Բ�ɫ�����Բ�ڲ�View::~C�Բ�ɫ�����Բ�ڲ�View()
{
}

BOOL C�Բ�ɫ�����Բ�ڲ�View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�Բ�ɫ�����Բ�ڲ�View ����

void C�Բ�ɫ�����Բ�ڲ�View::OnDraw(CDC* pDC)
{
	C�Բ�ɫ�����Բ�ڲ�Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	int red = 0,green=0,blue=1000;
	int width = 2; int row = 20;
	int color = RGB(red, green, blue);

	CBrush brush(color);
	CBrush *oldbrush;
	oldbrush = pDC->SelectObject(&brush);//ѡ�µĻ�ˢ
	
	this->GetClientRect(&cr);
	pDC->Ellipse(cr);
	pDC->SelectObject(oldbrush);//��ԭ���Ļ�ˢѡ��ȥ
	if (!pDoc)
		return;
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�Բ�ɫ�����Բ�ڲ�View ���

#ifdef _DEBUG
void C�Բ�ɫ�����Բ�ڲ�View::AssertValid() const
{
	CView::AssertValid();
}

void C�Բ�ɫ�����Բ�ڲ�View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�Բ�ɫ�����Բ�ڲ�Doc* C�Բ�ɫ�����Բ�ڲ�View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�Բ�ɫ�����Բ�ڲ�Doc)));
	return (C�Բ�ɫ�����Բ�ڲ�Doc*)m_pDocument;
}
#endif //_DEBUG


// C�Բ�ɫ�����Բ�ڲ�View ��Ϣ�������
