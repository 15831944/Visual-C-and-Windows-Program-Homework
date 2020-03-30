
// MFC_ShowJPG_2View.cpp : CMFC_ShowJPG_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_ShowJPG_2.h"
#endif

#include "MFC_ShowJPG_2Doc.h"
#include "MFC_ShowJPG_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_ShowJPG_2View

IMPLEMENT_DYNCREATE(CMFC_ShowJPG_2View, CView)

BEGIN_MESSAGE_MAP(CMFC_ShowJPG_2View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMFC_ShowJPG_2View::OnFileOpen)
END_MESSAGE_MAP()

// CMFC_ShowJPG_2View ����/����

CMFC_ShowJPG_2View::CMFC_ShowJPG_2View()
{
	// TODO: �ڴ˴���ӹ������
	k = 0; a = 0;
	
	
}

CMFC_ShowJPG_2View::~CMFC_ShowJPG_2View()
{
}

BOOL CMFC_ShowJPG_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_ShowJPG_2View ����

void CMFC_ShowJPG_2View::OnDraw(CDC* /*pDC*/)
{
	CMFC_ShowJPG_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	float sx, sy;
	
	if(k!=0)
	{
		filename.Empty();
		img.Destroy();
		CFileDialog cfd(true);//���ļ�
		int r = cfd.DoModal();//�����ĶԻ���	
		if (r == IDOK)
		{
			filename = cfd.GetPathName();	
			img.Load(filename);
		}	
		k--;
	}
	if (a != 0)
	{   dc.TextOutW(0, 0, filename);
		CRect rect;
		GetClientRect(&rect);
		sx = (rect.Width() - img.GetWidth()) / 2;
		sy = (rect.Height() - img.GetHeight()) / 2;
		img.Draw(dc.m_hDC, sx, sy, img.GetWidth(), img.GetHeight());
	}
}


// CMFC_ShowJPG_2View ���

#ifdef _DEBUG
void CMFC_ShowJPG_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_ShowJPG_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_ShowJPG_2Doc* CMFC_ShowJPG_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_ShowJPG_2Doc)));
	return (CMFC_ShowJPG_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_ShowJPG_2View ��Ϣ�������


void CMFC_ShowJPG_2View::OnFileOpen()
{
	// TODO: �ڴ���������������
	k++; a++;// img.ReleaseDC();
	Invalidate();
}
