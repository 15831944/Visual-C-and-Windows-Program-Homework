
// MFC�Ի���_2View.cpp : CMFC�Ի���_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC�Ի���_2.h"
#endif

#include "MFC�Ի���_2Doc.h"
#include "MFC�Ի���_2View.h"
#include"MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC�Ի���_2View

IMPLEMENT_DYNCREATE(CMFC�Ի���_2View, CView)

BEGIN_MESSAGE_MAP(CMFC�Ի���_2View, CView)
	ON_COMMAND(ID_Shown, &CMFC�Ի���_2View::OnShown)
END_MESSAGE_MAP()

// CMFC�Ի���_2View ����/����

CMFC�Ի���_2View::CMFC�Ի���_2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC�Ի���_2View::~CMFC�Ի���_2View()
{
}

BOOL CMFC�Ի���_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC�Ի���_2View ����

void CMFC�Ի���_2View::OnDraw(CDC* /*pDC*/)
{
	CMFC�Ի���_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC�Ի���_2View ���

#ifdef _DEBUG
void CMFC�Ի���_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC�Ի���_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC�Ի���_2Doc* CMFC�Ի���_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC�Ի���_2Doc)));
	return (CMFC�Ի���_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC�Ի���_2View ��Ϣ�������


void CMFC�Ի���_2View::OnShown()
{
	// TODO: �ڴ���������������
	// TODO: �ڴ���������������
	MyDlg dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
	}
}
