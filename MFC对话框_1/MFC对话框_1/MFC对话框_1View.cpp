
// MFC�Ի���_1View.cpp : CMFC�Ի���_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC�Ի���_1.h"
#endif

#include "MFC�Ի���_1Doc.h"
#include "MFC�Ի���_1View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC�Ի���_1View

IMPLEMENT_DYNCREATE(CMFC�Ի���_1View, CView)

BEGIN_MESSAGE_MAP(CMFC�Ի���_1View, CView)
	ON_COMMAND(ID_SHOWN, &CMFC�Ի���_1View::OnShown)
END_MESSAGE_MAP()

// CMFC�Ի���_1View ����/����

CMFC�Ի���_1View::CMFC�Ի���_1View()
{
	// TODO: �ڴ˴���ӹ������
	q = 0;
}

CMFC�Ի���_1View::~CMFC�Ի���_1View()
{
}

BOOL CMFC�Ի���_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC�Ի���_1View ����

void CMFC�Ի���_1View::OnDraw(CDC* pDC)
{
	CMFC�Ի���_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	CString s;
	s.Format(_T("�����˳��Ի���"));
	if (q == 1)
		dc.TextOutW(200, 200, s);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC�Ի���_1View ���

#ifdef _DEBUG
void CMFC�Ի���_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC�Ի���_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC�Ի���_1Doc* CMFC�Ի���_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC�Ի���_1Doc)));
	return (CMFC�Ի���_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC�Ի���_1View ��Ϣ�������


void CMFC�Ի���_1View::OnShown()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	q = 0;
	Invalidate();
	int t = dlg.DoModal();
	if (t == IDOK)
	{}
	q = 1;
	Invalidate();
}
