
// MFC��������_3View.cpp : CMFC��������_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC��������_3.h"
#endif

#include "MFC��������_3Doc.h"
#include "MFC��������_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC��������_3View

IMPLEMENT_DYNCREATE(CMFC��������_3View, CView)

BEGIN_MESSAGE_MAP(CMFC��������_3View, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC��������_3View ����/����

CMFC��������_3View::CMFC��������_3View()
{
	// TODO: �ڴ˴���ӹ������
	mo = 504;
	c_width = c_height = 0;
	flag = 0; 
	line = 1;
	h=l=0;
	num = min = left = leftNum = 0;
	r.left = 20; r.right = mo+20;
	r.top = 60; r.bottom = 80;
	p.SetPoint(-1, -1);
}

CMFC��������_3View::~CMFC��������_3View()
{
}

BOOL CMFC��������_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC��������_3View ����

void CMFC��������_3View::OnDraw(CDC* pDC)
{
	CMFC��������_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(r);
	CClientDC dc(this);
	CSize size = dc.GetTextExtent(s);
	c_width = size.cx, c_height = size.cy;
	CString s0 = _T("�����������ѣ���ʹ��ʱȫ����������(��������ͬ���ַ�)ʱ��ʵ��,������ز�ͬ���ַ�����һ������");
	CString s1 = _T("����������в��롢�����Ҽ��ָ���������");
	dc.TextOutW(0, 0, s0);
	dc.TextOutW(0, 20, s1);
	if (!s.IsEmpty()) {
		line = c_width / mo;
		min = c_width / s.GetLength();
		left = c_width % mo;
		leftNum = left / min;
		num = mo / min;
		if (left != 0) line++;
		if (c_width < mo) {
			dc.TextOutW(20, 60, s);
		}
		else {
			for (int i = 1; i <= line; i++) {
				if (i == 1) {
					CString ss = s.Left(num);
					dc.TextOutW(20, 60 + (i - 1)*c_height, ss);
				}
				else if(i<line){
					CString ss = s.Mid(num*(i - 1), num);
					dc.TextOutW(20, 60 + (i - 1)*c_height, ss);
				}
				else {
					CString ss;
					if (leftNum == 0)
						ss = s.Right(num);
					else
						ss = s.Right(leftNum);
					dc.TextOutW(20, 60 + (i - 1)*c_height, ss);
				}
			}
		}
		r.SetRect(20, 60, mo+20, 60 + c_height*line);
		CBrush *OldBrush;
		OldBrush = (CBrush*)dc.SelectStockObject(NULL_BRUSH);//����һ�������Ļ�ˢ
		dc.Rectangle(r);
		dc.SelectObject(OldBrush);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC��������_3View ���

#ifdef _DEBUG
void CMFC��������_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC��������_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC��������_3Doc* CMFC��������_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC��������_3Doc)));
	return (CMFC��������_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC��������_3View ��Ϣ�������


void CMFC��������_3View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	char ch = (char)nChar;
	if (flag == 0)
		s.AppendChar(ch);
	else {
		s.Insert(h*num + l, ch);
	}
	Invalidate();
	CView::OnChar(nChar, nRepCnt, nFlags);
}


void CMFC��������_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 1;
	CPoint insert = point;
	int len = s.GetLength();
	h = (insert.y - 60) / c_height;//�����е�λ��
	l = (insert.x - 20) / (c_width / len); //�����еĵ�λ��
	CView::OnLButtonDown(nFlags, point);
}


void CMFC��������_3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 0;
	CView::OnRButtonDown(nFlags, point);
}
