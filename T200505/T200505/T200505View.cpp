
// T200505View.cpp : CT200505View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "T200505.h"
#endif

#include "T200505Set.h"
#include "T200505Doc.h"
#include "T200505View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CT200505View

IMPLEMENT_DYNCREATE(CT200505View, CRecordView)

BEGIN_MESSAGE_MAP(CT200505View, CRecordView)
END_MESSAGE_MAP()

// CT200505View 构造/析构

CT200505View::CT200505View()
	: CRecordView(IDD_T200505_FORM)
	, name(_T(""))
	, sno(_T(""))
	, age(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CT200505View::~CT200505View()
{
}

void CT200505View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column4);
}

BOOL CT200505View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CT200505View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_T200505Set;
	CRecordView::OnInitialUpdate();

}


// CT200505View 诊断

#ifdef _DEBUG
void CT200505View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CT200505View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CT200505Doc* CT200505View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CT200505Doc)));
	return (CT200505Doc*)m_pDocument;
}
#endif //_DEBUG


// CT200505View 数据库支持
CRecordset* CT200505View::OnGetRecordset()
{
	return m_pSet;
}



// CT200505View 消息处理程序
