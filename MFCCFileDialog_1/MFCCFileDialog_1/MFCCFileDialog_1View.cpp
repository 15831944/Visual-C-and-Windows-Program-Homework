
// MFCCFileDialog_1View.cpp : CMFCCFileDialog_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CMFCCFileDialog_1View 构造/析构

CMFCCFileDialog_1View::CMFCCFileDialog_1View()
{
	// TODO: 在此处添加构造代码
	a = 123;
	s = _T("");
}

CMFCCFileDialog_1View::~CMFCCFileDialog_1View()
{
}

BOOL CMFCCFileDialog_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCCFileDialog_1View 绘制

void CMFCCFileDialog_1View::OnDraw(CDC* /*pDC*/)
{
	CMFCCFileDialog_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCCFileDialog_1View 诊断

#ifdef _DEBUG
void CMFCCFileDialog_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCCFileDialog_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCCFileDialog_1Doc* CMFCCFileDialog_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCCFileDialog_1Doc)));
	return (CMFCCFileDialog_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCCFileDialog_1View 消息处理程序


void CMFCCFileDialog_1View::OnFileOpen()
{

	// TODO: 在此添加命令处理程序代码
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
