
// MFC01��ʾѧ������View.cpp : CMFC01��ʾѧ������View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC01��ʾѧ������.h"
#endif

#include "MFC01��ʾѧ������Doc.h"
#include "MFC01��ʾѧ������View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC01��ʾѧ������View

IMPLEMENT_DYNCREATE(CMFC01��ʾѧ������View, CView)

BEGIN_MESSAGE_MAP(CMFC01��ʾѧ������View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC01��ʾѧ������View ����/����
int flag;
CMFC01��ʾѧ������View::CMFC01��ʾѧ������View()
{
	// TODO: �ڴ˴���ӹ������
	flag = 0;
}

CMFC01��ʾѧ������View::~CMFC01��ʾѧ������View()
{
}

BOOL CMFC01��ʾѧ������View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC01��ʾѧ������View ����

void CMFC01��ʾѧ������View::OnDraw(CDC* pDC)
{
	CMFC01��ʾѧ������Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s=_T("�ҵ������ǣ�");
	if (flag)
	{
		s+=pDoc->name;
	}
	pDC->TextOutW(200, 200, s);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC01��ʾѧ������View ���

#ifdef _DEBUG
void CMFC01��ʾѧ������View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC01��ʾѧ������View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC01��ʾѧ������Doc* CMFC01��ʾѧ������View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC01��ʾѧ������Doc)));
	return (CMFC01��ʾѧ������Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC01��ʾѧ������View ��Ϣ�������


void CMFC01��ʾѧ������View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 1;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
