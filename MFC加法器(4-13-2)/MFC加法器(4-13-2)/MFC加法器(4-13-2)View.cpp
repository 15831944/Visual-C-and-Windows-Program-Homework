
// MFC�ӷ���(4-13-2)View.cpp : CMFC�ӷ���4132View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC�ӷ���(4-13-2).h"
#endif

#include "MFC�ӷ���(4-13-2)Doc.h"
#include "MFC�ӷ���(4-13-2)View.h"
#include"MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC�ӷ���4132View

IMPLEMENT_DYNCREATE(CMFC�ӷ���4132View, CView)

BEGIN_MESSAGE_MAP(CMFC�ӷ���4132View, CView)
	ON_COMMAND(ID_Shown, &CMFC�ӷ���4132View::OnShown)
END_MESSAGE_MAP()

// CMFC�ӷ���4132View ����/����

CMFC�ӷ���4132View::CMFC�ӷ���4132View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC�ӷ���4132View::~CMFC�ӷ���4132View()
{
}

BOOL CMFC�ӷ���4132View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC�ӷ���4132View ����

void CMFC�ӷ���4132View::OnDraw(CDC* /*pDC*/)
{
	CMFC�ӷ���4132Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC�ӷ���4132View ���

#ifdef _DEBUG
void CMFC�ӷ���4132View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC�ӷ���4132View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC�ӷ���4132Doc* CMFC�ӷ���4132View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC�ӷ���4132Doc)));
	return (CMFC�ӷ���4132Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC�ӷ���4132View ��Ϣ�������


void CMFC�ӷ���4132View::OnShown()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
	}
}
