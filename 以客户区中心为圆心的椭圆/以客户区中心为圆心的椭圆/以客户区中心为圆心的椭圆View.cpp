
// �Կͻ�������ΪԲ�ĵ���ԲView.cpp : C�Կͻ�������ΪԲ�ĵ���ԲView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�Կͻ�������ΪԲ�ĵ���Բ.h"
#endif

#include "�Կͻ�������ΪԲ�ĵ���ԲDoc.h"
#include "�Կͻ�������ΪԲ�ĵ���ԲView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�Կͻ�������ΪԲ�ĵ���ԲView

IMPLEMENT_DYNCREATE(C�Կͻ�������ΪԲ�ĵ���ԲView, CView)

BEGIN_MESSAGE_MAP(C�Կͻ�������ΪԲ�ĵ���ԲView, CView)
END_MESSAGE_MAP()

// C�Կͻ�������ΪԲ�ĵ���ԲView ����/����

C�Կͻ�������ΪԲ�ĵ���ԲView::C�Կͻ�������ΪԲ�ĵ���ԲView()
{
	// TODO: �ڴ˴���ӹ������

}

C�Կͻ�������ΪԲ�ĵ���ԲView::~C�Կͻ�������ΪԲ�ĵ���ԲView()
{
}

BOOL C�Կͻ�������ΪԲ�ĵ���ԲView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�Կͻ�������ΪԲ�ĵ���ԲView ����

void C�Կͻ�������ΪԲ�ĵ���ԲView::OnDraw(CDC* pDC)
{
	C�Կͻ�������ΪԲ�ĵ���ԲDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	this->GetClientRect(&cr);
	pDC->Ellipse(cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�Կͻ�������ΪԲ�ĵ���ԲView ���

#ifdef _DEBUG
void C�Կͻ�������ΪԲ�ĵ���ԲView::AssertValid() const
{
	CView::AssertValid();
}

void C�Կͻ�������ΪԲ�ĵ���ԲView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�Կͻ�������ΪԲ�ĵ���ԲDoc* C�Կͻ�������ΪԲ�ĵ���ԲView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�Կͻ�������ΪԲ�ĵ���ԲDoc)));
	return (C�Կͻ�������ΪԲ�ĵ���ԲDoc*)m_pDocument;
}
#endif //_DEBUG


// C�Կͻ�������ΪԲ�ĵ���ԲView ��Ϣ�������
