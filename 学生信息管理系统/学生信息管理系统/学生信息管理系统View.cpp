
// 学生信息管理系统View.cpp : C学生信息管理系统View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "学生信息管理系统.h"
#endif

#include "学生信息管理系统Set.h"
#include "学生信息管理系统Doc.h"
#include "学生信息管理系统View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C学生信息管理系统View

IMPLEMENT_DYNCREATE(C学生信息管理系统View, CRecordView)

BEGIN_MESSAGE_MAP(C学生信息管理系统View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &C学生信息管理系统View::OnBnClickedButton1)
	ON_COMMAND(ID_RECORD_FIRST, &C学生信息管理系统View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &C学生信息管理系统View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &C学生信息管理系统View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &C学生信息管理系统View::OnRecordLast)
	ON_WM_PAINT()
	ON_COMMAND(ID_32771, &C学生信息管理系统View::On32771)
	ON_COMMAND(ID_32772, &C学生信息管理系统View::On32772)
	ON_COMMAND(ID_32773, &C学生信息管理系统View::On32773)
	ON_COMMAND(ID_32774, &C学生信息管理系统View::On32774)
	ON_COMMAND(ID_32775, &C学生信息管理系统View::On32775)
	ON_BN_CLICKED(IDC_BUTTON2, &C学生信息管理系统View::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &C学生信息管理系统View::OnBnClickedButton3)
END_MESSAGE_MAP()

// C学生信息管理系统View 构造/析构

C学生信息管理系统View::C学生信息管理系统View()
	: CRecordView(IDD_MY_FORM)
	, a1(_T(""))
	, a2(0)
	, a3(_T(""))
	, a4(_T(""))
	, a5(_T(""))
	, a6(_T(""))
	, a7(_T(""))
	, a8(_T(""))
	, a9(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

C学生信息管理系统View::~C学生信息管理系统View()
{
}

void C学生信息管理系统View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column4);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->column5);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column6);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->column7);
	DDX_Text(pDX, IDC_EDIT8, m_pSet->column8);
	DDX_Text(pDX, IDC_EDIT9, m_pSet->column9);
}

BOOL C学生信息管理系统View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void C学生信息管理系统View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_学生信息管理系统Set;
	CRecordView::OnInitialUpdate();

}


// C学生信息管理系统View 诊断

#ifdef _DEBUG
void C学生信息管理系统View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C学生信息管理系统View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C学生信息管理系统Doc* C学生信息管理系统View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C学生信息管理系统Doc)));
	return (C学生信息管理系统Doc*)m_pDocument;
}
#endif //_DEBUG


// C学生信息管理系统View 数据库支持
CRecordset* C学生信息管理系统View::OnGetRecordset()
{
	return m_pSet;
}



// C学生信息管理系统View 消息处理程序

#include "DLG_Showpic.h"
void C学生信息管理系统View::OnBnClickedButton1()//放大显示
{
	// TODO: 在此添加控件通知处理程序代码
	DLG_Showpic dlg;
	if (dlg.DoModal() == IDOK)
	{

	}
}


void C学生信息管理系统View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	Invalidate();
	OnPaint();
}


void C学生信息管理系统View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	Invalidate();
	OnPaint();
}


void C学生信息管理系统View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	Invalidate();
	OnPaint();
}


void C学生信息管理系统View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	Invalidate();
	OnPaint();
}


void C学生信息管理系统View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	path = m_pSet->column9;
	picname = m_pSet->column8;
	CString s = path + "\\\\"+ picname;
	//dc.TextOutW(299, 200, s);
	CImage img;
	img.Load(s);
	CDC* pDC = GetDlgItem(IDC_Show)->GetDC();
	CRect rect;
	GetDlgItem(IDC_Show)->GetClientRect(&rect);
	SetStretchBltMode(pDC->m_hDC, STRETCH_HALFTONE);

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
	img.Destroy();				   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
}

#include "DLG_order.h"
void C学生信息管理系统View::On32771()//排序
{
	// TODO: 在此添加命令处理程序代码
	DLG_order dlg;
	if (dlg.DoModal()==IDOK)
	{
		m_pSet->m_strSort = dlg.order;//m_strSort
		m_pSet->Requery();
	}
	Invalidate();
}

#include "DLG_select.h"
void C学生信息管理系统View::On32772()//查询
{
	// TODO: 在此添加命令处理程序代码
	DLG_select dlg;
	if (dlg.DoModal() == IDOK)
	{
		m_pSet->m_strFilter = dlg.select;//m_strFilter
		m_pSet->Requery();

	}
	Invalidate();
}

#include "DLG_add.h"
void C学生信息管理系统View::On32773()//增加
{
	// TODO: 在此添加命令处理程序代码
	DLG_add dlg;
	if (dlg.DoModal() == IDOK)
	{

	}
}


void C学生信息管理系统View::On32774()//删除
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}

#include "DLG_change.h"
void C学生信息管理系统View::On32775()//修改
{
	// TODO: 在此添加命令处理程序代码
	DLG_change dlg;
	if (dlg.DoModal() == IDOK)
	{

	}
}


void C学生信息管理系统View::OnBnClickedButton2()//恢复
{
	// TODO: 在此添加控件通知处理程序代码
	m_pSet->m_strFilter = _T("");

	m_pSet->Requery();
	Invalidate();
}

#include "DLG_show.h"
void C学生信息管理系统View::OnBnClickedButton3()//显示记录集
{
	// TODO: 在此添加控件通知处理程序代码
	CString ss = _T("");
	m_pSet->MoveFirst();
	while (!m_pSet->IsEOF())
	{
		CString s;
		int n = m_pSet->GetODBCFieldCount();
		for (int i = 0; i < n; i++)
		{
			m_pSet->GetFieldValue((short)i, s);
			ss += s + _T(" ");

		}
		ss += _T("\r\n");
		m_pSet->MoveNext();

	}
	//CClientDC dc(this);
	//dc.TextOutW(700, 100, ss);
	DLG_show dlg;
	dlg.out = ss;
	if (dlg.DoModal() == IDOK)
	{

	}
}
