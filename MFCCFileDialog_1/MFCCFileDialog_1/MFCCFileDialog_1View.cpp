
// MFCCFileDialog_1View.cpp : CMFCCFileDialog_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCCFileDialog_1.h"
#endif

#include "MFCCFileDialog_1Doc.h"
#include "MFCCFileDialog_1View.h"
#include"afxwin.h"
#include <afx.h>
#include <fstream>
#include<string>
#include <cstring>
#include<iostream>
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#define _CRT_SECURE_NO_WARNING
#pragma warning(disable:4996)
// CMFCCFileDialog_1View

IMPLEMENT_DYNCREATE(CMFCCFileDialog_1View, CView)

BEGIN_MESSAGE_MAP(CMFCCFileDialog_1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMFCCFileDialog_1View::OnFileOpen)
END_MESSAGE_MAP()

// CMFCCFileDialog_1View ����/����

CMFCCFileDialog_1View::CMFCCFileDialog_1View()
{
	// TODO: �ڴ˴���ӹ������
	a = 123;
	s = _T("");
}

CMFCCFileDialog_1View::~CMFCCFileDialog_1View()
{
}

BOOL CMFCCFileDialog_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCCFileDialog_1View ����

void CMFCCFileDialog_1View::OnDraw(CDC* /*pDC*/)
{
	CMFCCFileDialog_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCCFileDialog_1View ���

#ifdef _DEBUG
void CMFCCFileDialog_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCCFileDialog_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCCFileDialog_1Doc* CMFCCFileDialog_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCCFileDialog_1Doc)));
	return (CMFCCFileDialog_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCCFileDialog_1View ��Ϣ�������


void CMFCCFileDialog_1View::OnFileOpen()
{

	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString s=cfd.GetPathName();
		CClientDC dc(this);
		ifstream ifs(s);
		dc.TextOutW(20,10, cfd.GetPathName());


		FILE *pt = NULL;
		CString str;
		char buffer[200] = { '\0' };
		str=cfd.GetPathName();
		WideCharToMultiByte(CP_ACP, 0, str.GetBuffer(0), str.GetLength(), buffer, 200, 0, 0);
		pt = fopen("D:\\abc.txt", "a");
		fprintf(pt, "%s", buffer);
		str.ReleaseBuffer();
		fprintf(pt, "\n");
		fclose(pt);

	}
}
