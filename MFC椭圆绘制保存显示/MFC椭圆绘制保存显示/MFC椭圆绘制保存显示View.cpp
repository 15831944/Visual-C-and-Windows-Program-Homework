
// MFC��Բ���Ʊ�����ʾView.cpp : CMFC��Բ���Ʊ�����ʾView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC��Բ���Ʊ�����ʾ.h"
#endif

#include "MFC��Բ���Ʊ�����ʾDoc.h"
#include "MFC��Բ���Ʊ�����ʾView.h"
#include "iostream"
#include "string"
#include "fstream"
using namespace std;
int flag;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC��Բ���Ʊ�����ʾView

IMPLEMENT_DYNCREATE(CMFC��Բ���Ʊ�����ʾView, CView)

BEGIN_MESSAGE_MAP(CMFC��Բ���Ʊ�����ʾView, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMFC��Բ���Ʊ�����ʾView::OnFileOpen)
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMFC��Բ���Ʊ�����ʾView ����/����

CMFC��Բ���Ʊ�����ʾView::CMFC��Բ���Ʊ�����ʾView()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC��Բ���Ʊ�����ʾView::~CMFC��Բ���Ʊ�����ʾView()
{
}

BOOL CMFC��Բ���Ʊ�����ʾView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC��Բ���Ʊ�����ʾView ����

void CMFC��Բ���Ʊ�����ʾView::OnDraw(CDC* pDC)
{
	CMFC��Բ���Ʊ�����ʾDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(cr);
	if (count != 0)
	{
		int i;
		CString filename = _T("D:\\Ellipse.txt");
		ofstream of(filename);
		for (i = 0; i < count; i++)
		{
			pDC->Ellipse(p_cr[i]);
			of << p_cr[i].left << ' ' << p_cr[i].top << ' ' << p_cr[i].right << ' ' << p_cr[i].bottom << endl;
		}
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC��Բ���Ʊ�����ʾView ���

#ifdef _DEBUG
void CMFC��Բ���Ʊ�����ʾView::AssertValid() const
{
	CView::AssertValid();
}

void CMFC��Բ���Ʊ�����ʾView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC��Բ���Ʊ�����ʾDoc* CMFC��Բ���Ʊ�����ʾView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC��Բ���Ʊ�����ʾDoc)));
	return (CMFC��Բ���Ʊ�����ʾDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFC��Բ���Ʊ�����ʾView ��Ϣ�������


void CMFC��Բ���Ʊ�����ʾView::OnFileOpen()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	CString filename = _T("D:\\Ellipse.txt");
	//AfxGetApp()->OpenDocumentFile(filename);
	ifstream ifs(filename);
	string s;
	int count = 0, i = 0;
	int num[4];
	while (ifs >> s)
	{
		num[i] = atoi(s.c_str());
		i++;
		count++;
		if (count % 4 == 0)
		{
			CRect cr(num[0], num[1], num[2], num[3]);
			dc.Ellipse(cr);
			i = 0;
		}
	}
}


void CMFC��Բ���Ʊ�����ʾView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 0;
	p_cr.Add(cr);
	count++;
	CView::OnLButtonUp(nFlags, point);
}


void CMFC��Բ���Ʊ�����ʾView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 1;
	cr.left = point.x;
	cr.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC��Բ���Ʊ�����ʾView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag == 1)
	{
		cr.right = point.x;
		cr.bottom = point.y;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}
