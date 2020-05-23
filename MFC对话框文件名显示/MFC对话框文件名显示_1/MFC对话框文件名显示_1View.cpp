
// MFC�Ի����ļ�����ʾ_1View.cpp : CMFC�Ի����ļ�����ʾ_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC�Ի����ļ�����ʾ_1.h"
#endif

#include "MFC�Ի����ļ�����ʾ_1Doc.h"
#include "MFC�Ի����ļ�����ʾ_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC�Ի����ļ�����ʾ_1View

IMPLEMENT_DYNCREATE(CMFC�Ի����ļ�����ʾ_1View, CView)

BEGIN_MESSAGE_MAP(CMFC�Ի����ļ�����ʾ_1View, CView)
	ON_COMMAND(ID_Show_1, &CMFC�Ի����ļ�����ʾ_1View::OnShow1)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMFC�Ի����ļ�����ʾ_1View ����/����

CMFC�Ի����ļ�����ʾ_1View::CMFC�Ի����ļ�����ʾ_1View()
{
	// TODO: �ڴ˴���ӹ������
	fileName=_T("");
}

CMFC�Ի����ļ�����ʾ_1View::~CMFC�Ի����ļ�����ʾ_1View()
{
}

BOOL CMFC�Ի����ļ�����ʾ_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC�Ի����ļ�����ʾ_1View ����

void CMFC�Ի����ļ�����ʾ_1View::OnDraw(CDC* /*pDC*/)
{
	CMFC�Ի����ļ�����ʾ_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC�Ի����ļ�����ʾ_1View ���

#ifdef _DEBUG
void CMFC�Ի����ļ�����ʾ_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC�Ի����ļ�����ʾ_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC�Ի����ļ�����ʾ_1Doc* CMFC�Ի����ļ�����ʾ_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC�Ի����ļ�����ʾ_1Doc)));
	return (CMFC�Ի����ļ�����ʾ_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC�Ի����ļ�����ʾ_1View ��Ϣ�������

#include "Dlg1.h"
void CMFC�Ի����ļ�����ʾ_1View::OnShow1()
{
	// TODO: �ڴ���������������
	Dlg1 dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		dlg.path = fileName;
	}
}


void CMFC�Ի����ļ�����ʾ_1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Invalidate();
	CString szFilters = _T("Doc Files (*.doc)|*.doc|All Files (*.*)|*.*||");
	CFileDialog fileDlg(TRUE, NULL, NULL, OFN_FILEMUSTEXIST | OFN_HIDEREADONLY, szFilters, this);
	if (fileDlg.DoModal() == IDOK)

	{

		fileName = fileDlg.GetFileTitle();//����ǰ���ڵı�������Ϊ���ļ�������
		GetDC()->TextOutW(200, 200, fileName);

	}
	CView::OnLButtonDblClk(nFlags, point);
}
