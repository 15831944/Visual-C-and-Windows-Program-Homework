
// MFC_ShowJPG_1View.cpp : CMFC_ShowJPG_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_ShowJPG_1.h"
#endif

#include "MFC_ShowJPG_1Doc.h"
#include "MFC_ShowJPG_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_ShowJPG_1View

IMPLEMENT_DYNCREATE(CMFC_ShowJPG_1View, CView)

BEGIN_MESSAGE_MAP(CMFC_ShowJPG_1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMFC_ShowJPG_1View::OnFileOpen)
END_MESSAGE_MAP()

// CMFC_ShowJPG_1View ����/����

CMFC_ShowJPG_1View::CMFC_ShowJPG_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC_ShowJPG_1View::~CMFC_ShowJPG_1View()
{
}

BOOL CMFC_ShowJPG_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_ShowJPG_1View ����

void CMFC_ShowJPG_1View::OnDraw(CDC* /*pDC*/)
{
	CMFC_ShowJPG_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_ShowJPG_1View ���

#ifdef _DEBUG
void CMFC_ShowJPG_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_ShowJPG_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_ShowJPG_1Doc* CMFC_ShowJPG_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_ShowJPG_1Doc)));
	return (CMFC_ShowJPG_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_ShowJPG_1View ��Ϣ�������


void CMFC_ShowJPG_1View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);//���ļ�
	int r = cfd.DoModal();//�����ĶԻ���
	CClientDC dc(this);
	if (r == IDOK)//
	{
		CString filename = cfd.GetPathName();
		dc.TextOutW(0, 0, filename);
		CImage img;
		img.Load(filename);
		float w, h, sx, sy;
		CRect rect;
		GetClientRect(&rect);
		sx = (rect.Width()- img.GetWidth())/2;
		sy = (rect.Height() - img.GetHeight())/2;		
		img.Draw(dc.m_hDC, sx, sy, img.GetWidth(),img.GetHeight());
	}
}
