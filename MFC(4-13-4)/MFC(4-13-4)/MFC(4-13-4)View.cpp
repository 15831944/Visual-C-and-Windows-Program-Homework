
// MFC(4-13-4)View.cpp : CMFC4134View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC(4-13-4).h"
#endif

#include "MFC(4-13-4)Doc.h"
#include "MFC(4-13-4)View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC4134View

IMPLEMENT_DYNCREATE(CMFC4134View, CView)

BEGIN_MESSAGE_MAP(CMFC4134View, CView)
	ON_COMMAND(ID_SH, &CMFC4134View::OnSh)
END_MESSAGE_MAP()

// CMFC4134View ����/����

CMFC4134View::CMFC4134View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC4134View::~CMFC4134View()
{
}

BOOL CMFC4134View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC4134View ����

void CMFC4134View::OnDraw(CDC* /*pDC*/)
{
	CMFC4134Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC4134View ���

#ifdef _DEBUG
void CMFC4134View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC4134View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC4134Doc* CMFC4134View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC4134Doc)));
	return (CMFC4134Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC4134View ��Ϣ�������


void CMFC4134View::OnSh()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
	}
}
