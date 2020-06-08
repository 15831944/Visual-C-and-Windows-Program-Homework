
// MFC椭圆绘制保存显示View.cpp : CMFC椭圆绘制保存显示View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC椭圆绘制保存显示.h"
#endif

#include "MFC椭圆绘制保存显示Doc.h"
#include "MFC椭圆绘制保存显示View.h"
#include "iostream"
#include "string"
#include "fstream"
using namespace std;
int flag;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC椭圆绘制保存显示View

IMPLEMENT_DYNCREATE(CMFC椭圆绘制保存显示View, CView)

BEGIN_MESSAGE_MAP(CMFC椭圆绘制保存显示View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMFC椭圆绘制保存显示View::OnFileOpen)
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMFC椭圆绘制保存显示View 构造/析构

CMFC椭圆绘制保存显示View::CMFC椭圆绘制保存显示View()
{
	// TODO: 在此处添加构造代码

}

CMFC椭圆绘制保存显示View::~CMFC椭圆绘制保存显示View()
{
}

BOOL CMFC椭圆绘制保存显示View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC椭圆绘制保存显示View 绘制

void CMFC椭圆绘制保存显示View::OnDraw(CDC* pDC)
{
	CMFC椭圆绘制保存显示Doc* pDoc = GetDocument();
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
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC椭圆绘制保存显示View 诊断

#ifdef _DEBUG
void CMFC椭圆绘制保存显示View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC椭圆绘制保存显示View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC椭圆绘制保存显示Doc* CMFC椭圆绘制保存显示View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC椭圆绘制保存显示Doc)));
	return (CMFC椭圆绘制保存显示Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC椭圆绘制保存显示View 消息处理程序


void CMFC椭圆绘制保存显示View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
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


void CMFC椭圆绘制保存显示View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 0;
	p_cr.Add(cr);
	count++;
	CView::OnLButtonUp(nFlags, point);
}


void CMFC椭圆绘制保存显示View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 1;
	cr.left = point.x;
	cr.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC椭圆绘制保存显示View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (flag == 1)
	{
		cr.right = point.x;
		cr.bottom = point.y;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}
