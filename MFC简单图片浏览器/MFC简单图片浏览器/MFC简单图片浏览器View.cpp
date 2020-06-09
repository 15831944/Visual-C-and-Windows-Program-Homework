
// MFC简单图片浏览器View.cpp : CMFC简单图片浏览器View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC简单图片浏览器.h"
#endif

#include "MFC简单图片浏览器Set.h"
#include "MFC简单图片浏览器Doc.h"
#include "MFC简单图片浏览器View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC简单图片浏览器View

IMPLEMENT_DYNCREATE(CMFC简单图片浏览器View, CRecordView)

BEGIN_MESSAGE_MAP(CMFC简单图片浏览器View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CMFC简单图片浏览器View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CMFC简单图片浏览器View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CMFC简单图片浏览器View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CMFC简单图片浏览器View::OnRecordLast)
	ON_WM_PAINT()
	ON_EN_CHANGE(IDC_EDIT1, &CMFC简单图片浏览器View::OnEnChangeEdit1)
END_MESSAGE_MAP()

// CMFC简单图片浏览器View 构造/析构

CMFC简单图片浏览器View::CMFC简单图片浏览器View()
	: CRecordView(IDD_MFC_FORM)
	, address(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码
	ad = _T("D:\\Data\\图片\\表情包\\");
}

CMFC简单图片浏览器View::~CMFC简单图片浏览器View()
{
}

void CMFC简单图片浏览器View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
}

BOOL CMFC简单图片浏览器View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CMFC简单图片浏览器View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_MFC简单图片浏览器Set;
	CRecordView::OnInitialUpdate();

}


// CMFC简单图片浏览器View 诊断

#ifdef _DEBUG
void CMFC简单图片浏览器View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMFC简单图片浏览器View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMFC简单图片浏览器Doc* CMFC简单图片浏览器View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC简单图片浏览器Doc)));
	return (CMFC简单图片浏览器Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC简单图片浏览器View 数据库支持
CRecordset* CMFC简单图片浏览器View::OnGetRecordset()
{
	return m_pSet;
}



// CMFC简单图片浏览器View 消息处理程序


void CMFC简单图片浏览器View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	OnPaint();
}


void CMFC简单图片浏览器View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	OnPaint();
}


void CMFC简单图片浏览器View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	OnPaint();
}


void CMFC简单图片浏览器View::OnRecordLast()
{
	m_pSet->MoveLast();
	UpdateData(false);
	OnPaint();
	// TODO: 在此添加命令处理程序代码
}


void CMFC简单图片浏览器View::OnPaint()
{
	Invalidate();
	CPaintDC dc(this); 
	CImage img;
	CString s=ad + m_pSet->column1;
	img.Load(s);

	CDC* pDC = GetDlgItem(IDC_STATIC1)->GetDC();
	CRect rect;
	GetDlgItem(IDC_STATIC1)->GetClientRect(&rect);
	SetStretchBltMode(pDC->m_hDC, STRETCH_HALFTONE);//不失真显示
	int sx, sy, w, h;
	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	img.Draw(pDC->m_hDC, sx, sy, w, h);

}


void CMFC简单图片浏览器View::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
