
// MFC�˵�����ʾView.cpp : CMFC�˵�����ʾView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC�˵�����ʾ.h"
#endif

#include "MFC�˵�����ʾDoc.h"
#include "MFC�˵�����ʾView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC�˵�����ʾView

IMPLEMENT_DYNCREATE(CMFC�˵�����ʾView, CView)

BEGIN_MESSAGE_MAP(CMFC�˵�����ʾView, CView)
	ON_COMMAND(ID_SHOWNUMBER, &CMFC�˵�����ʾView::OnShownumber)
END_MESSAGE_MAP()

// CMFC�˵�����ʾView ����/����

CMFC�˵�����ʾView::CMFC�˵�����ʾView()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC�˵�����ʾView::~CMFC�˵�����ʾView()
{
}

BOOL CMFC�˵�����ʾView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC�˵�����ʾView ����

void CMFC�˵�����ʾView::OnDraw(CDC* /*pDC*/)
{
	CMFC�˵�����ʾDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC�˵�����ʾView ���

#ifdef _DEBUG
void CMFC�˵�����ʾView::AssertValid() const
{
	CView::AssertValid();
}

void CMFC�˵�����ʾView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC�˵�����ʾDoc* CMFC�˵�����ʾView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC�˵�����ʾDoc)));
	return (CMFC�˵�����ʾDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFC�˵�����ʾView ��Ϣ�������


void CMFC�˵�����ʾView::OnShownumber()
{
	// TODO: �ڴ���������������
	CString S;
	S.Format(_T("���ǳ���"));
	CClientDC dc(this);
	dc.TextOutW(200, 200, S);
}
