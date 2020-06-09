
// MFC数据库程序的查询排序和记录集的显示功能View.cpp : CMFC数据库程序的查询排序和记录集的显示功能View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC数据库程序的查询排序和记录集的显示功能.h"
#endif
#include <afxdb.h>
#include "MFC数据库程序的查询排序和记录集的显示功能Set.h"
#include "MFC数据库程序的查询排序和记录集的显示功能Doc.h"
#include "MFC数据库程序的查询排序和记录集的显示功能View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC数据库程序的查询排序和记录集的显示功能View

IMPLEMENT_DYNCREATE(CMFC数据库程序的查询排序和记录集的显示功能View, CRecordView)

BEGIN_MESSAGE_MAP(CMFC数据库程序的查询排序和记录集的显示功能View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFC数据库程序的查询排序和记录集的显示功能View::OnBnClickedButton_showpic)
	ON_WM_PAINT()
	ON_COMMAND(ID_RECORD_FIRST, &CMFC数据库程序的查询排序和记录集的显示功能View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CMFC数据库程序的查询排序和记录集的显示功能View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CMFC数据库程序的查询排序和记录集的显示功能View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CMFC数据库程序的查询排序和记录集的显示功能View::OnRecordLast)
	ON_COMMAND(ID_32771, &CMFC数据库程序的查询排序和记录集的显示功能View::On32771)
	ON_COMMAND(ID_32772, &CMFC数据库程序的查询排序和记录集的显示功能View::On32772)
	ON_COMMAND(ID_32776, &CMFC数据库程序的查询排序和记录集的显示功能View::On32776)
	ON_COMMAND(ID_32773, &CMFC数据库程序的查询排序和记录集的显示功能View::On32773)
	ON_COMMAND(ID_32775, &CMFC数据库程序的查询排序和记录集的显示功能View::On32775)
	ON_COMMAND(ID_32774, &CMFC数据库程序的查询排序和记录集的显示功能View::On32774)
	ON_BN_CLICKED(IDC_BUTTON1, &CMFC数据库程序的查询排序和记录集的显示功能View::OnBnClickedButton1)
END_MESSAGE_MAP()

// CMFC数据库程序的查询排序和记录集的显示功能View 构造/析构

CMFC数据库程序的查询排序和记录集的显示功能View::CMFC数据库程序的查询排序和记录集的显示功能View()
	: CRecordView(IDD_MFC_FORM)
	, a1(0)
	, a2(_T(""))
	, a3(_T(""))
	, a4(0)
	, a5(_T(""))
	, a7(_T(""))
{
	m_pSet = NULL;
	path = _T("");
	
	// TODO: 在此处添加构造代码

}

CMFC数据库程序的查询排序和记录集的显示功能View::~CMFC数据库程序的查询排序和记录集的显示功能View()
{
}

void CMFC数据库程序的查询排序和记录集的显示功能View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	//a1
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	//a2
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column3);//a3
	
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column4);//a4
	//a5										 
	DDX_Text(pDX, IDC_EDIT6, m_pSet->column5); //m_pSet->column5   pic_address;
    DDX_Text(pDX, IDC_EDIT3, m_pSet->column6);


}

BOOL CMFC数据库程序的查询排序和记录集的显示功能View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CMFC数据库程序的查询排序和记录集的显示功能View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_MFC数据库程序的查询排序和记录集的显示功能Set;
	CRecordView::OnInitialUpdate();

}


// CMFC数据库程序的查询排序和记录集的显示功能View 诊断

#ifdef _DEBUG
void CMFC数据库程序的查询排序和记录集的显示功能View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMFC数据库程序的查询排序和记录集的显示功能View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMFC数据库程序的查询排序和记录集的显示功能Doc* CMFC数据库程序的查询排序和记录集的显示功能View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC数据库程序的查询排序和记录集的显示功能Doc)));
	return (CMFC数据库程序的查询排序和记录集的显示功能Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC数据库程序的查询排序和记录集的显示功能View 数据库支持
CRecordset* CMFC数据库程序的查询排序和记录集的显示功能View::OnGetRecordset()
{
	return m_pSet;
}



// CMFC数据库程序的查询排序和记录集的显示功能View 消息处理程序

#include "Show_dlg.h"
void CMFC数据库程序的查询排序和记录集的显示功能View::OnBnClickedButton_showpic()
{
	// TODO: 在此添加控件通知处理程序代码
	Show_dlg dlg;
	if (dlg.DoModal() == IDOK)
	{

	}
}


void CMFC数据库程序的查询排序和记录集的显示功能View::OnPaint()
{
	
	path = m_pSet->column5;

	
	CPaintDC dc(this);
	CImage img;
	img.Load(m_pSet->column5);
	CDC* pDC = GetDlgItem(IDC_STATIC_show)->GetDC();
	CRect rect;
	GetDlgItem(IDC_STATIC_show)->GetClientRect(&rect);
	SetStretchBltMode(pDC->m_hDC, STRETCH_HALFTONE);
	
	

	/**/
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
	img.Destroy();
    
}


void CMFC数据库程序的查询排序和记录集的显示功能View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	Invalidate();
	OnPaint();
}


void CMFC数据库程序的查询排序和记录集的显示功能View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	Invalidate();
	OnPaint();
}


void CMFC数据库程序的查询排序和记录集的显示功能View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	Invalidate();
	OnPaint();
}


void CMFC数据库程序的查询排序和记录集的显示功能View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	Invalidate();
	OnPaint();
}

#include "Order_dlg.h"
void CMFC数据库程序的查询排序和记录集的显示功能View::On32771()//排序
{
	// TODO: 在此添加命令处理程序代码
	Order_dlg dlg;
	if (dlg.DoModal() == IDOK)
	{
		m_pSet->m_strSort = dlg.order;//m_strSort
		m_pSet->Requery();
	}
	Invalidate();
}

#include "Select_dlg.h"
void CMFC数据库程序的查询排序和记录集的显示功能View::On32772()//查询
{
	// TODO: 在此添加命令处理程序代码
	Select_dlg dlg;
	if (dlg.DoModal() == IDOK)
	{
		m_pSet->m_strFilter = dlg.selec;//m_strFilter
		m_pSet->Requery();
		
	}
	Invalidate();
}

#include "ShowWord_dlg.h"
void CMFC数据库程序的查询排序和记录集的显示功能View::On32776()//记录集
{
	// TODO: 在此添加命令处理程序代码
	//CMFC数据库程序的查询排序和记录集的显示功能Set cSet;
	ss = _T("");
    m_pSet->MoveFirst();
	while (!m_pSet->IsEOF())
	{   CString s;
		int n =m_pSet->GetODBCFieldCount();
		for (int i = 0; i < n; i++)
		{
			m_pSet->GetFieldValue((short)i, s);
			ss += s + _T(" ");
		   
		}
		ss += _T("\r\n");
		m_pSet->MoveNext();
		
	}
	//CClientDC dc(this);
	//dc.TextOutW(100, 100, ss);
    ShowWord_dlg dlg;
	dlg.s = ss;
	dlg.sstr = ss;
	if (dlg.DoModal() == IDOK)
	{
		
	}
}

#include "ADD_dlg.h"
void CMFC数据库程序的查询排序和记录集的显示功能View::On32773()//增加
{
	// TODO: 在此添加命令处理程序代码
	ADD_dlg dlg;
	if (dlg.DoModal())
	{
		m_pSet->AddNew();
		a1 = dlg.num;
		a2 = dlg.name;
		a3 = dlg.sex;
		a4 = dlg.nianxin;
		a5 = dlg.pic_address;
		m_pSet->column1 = a1;
		m_pSet->column2 = a2;
		m_pSet->column3 = a3;
		m_pSet->column4 = a4;
		m_pSet->column5 = a5;
		//m_pSet->column6 = a6;
		m_pSet->Update();
		UpdateData(false);
	}
}

#include "Change_dlg.h"
void CMFC数据库程序的查询排序和记录集的显示功能View::On32775()//修改
{
	// TODO: 在此添加命令处理程序代码
	Change_dlg dlg;
	if (dlg.DoModal()==IDOK)
	{
		/*a1 = m_pSet->column1;
		a2 = m_pSet->column2;
		a3 = m_pSet->column3;
		a4 = m_pSet->column4;
		a5 = m_pSet->column5;*/
		m_pSet->Edit();
		a1 = dlg.num;
		a2 = dlg.name;
		a3 = dlg.sex;
		a4 = dlg.nianxin;
		a5 = dlg.pic_addrress;
		m_pSet->column1 = a1;
		m_pSet->column2 = a2;
		m_pSet->column3 = a3;
		m_pSet->column4 = a4;
		m_pSet->column5 = a5;
		//m_pSet->column6 = a6;
		m_pSet->Update();
		UpdateData(false);
	}
}


void CMFC数据库程序的查询排序和记录集的显示功能View::On32774()//删除
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}


void CMFC数据库程序的查询排序和记录集的显示功能View::OnBnClickedButton1()//恢复
{
	// TODO: 在此添加控件通知处理程序代码
	m_pSet->m_strFilter = _T("");//m_strFilter//m_pSet->m_strSort = _T("");
	
	m_pSet->Requery();
	Invalidate();
}
