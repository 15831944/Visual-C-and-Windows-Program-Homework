
// MFC200511_1View.cpp : CMFC200511_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC200511_1.h"
#endif

#include "MFC200511_1Set.h"
#include "MFC200511_1Doc.h"
#include "MFC200511_1View.h"
#include "Dlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC200511_1View

IMPLEMENT_DYNCREATE(CMFC200511_1View, CRecordView)

BEGIN_MESSAGE_MAP(CMFC200511_1View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &CMFC200511_1View::OnBnClickedButton1)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CMFC200511_1View 构造/析构

CMFC200511_1View::CMFC200511_1View()
	: CRecordView(IDD_MFC200511_1_FORM)
	, sname(_T(""))
	, sno(_T(""))
	, age(0)
	, sphone(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CMFC200511_1View::~CMFC200511_1View()
{
}

void CMFC200511_1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, );
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column4);
}

BOOL CMFC200511_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CMFC200511_1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_MFC200511_1Set;
	CRecordView::OnInitialUpdate();

}


// CMFC200511_1View 诊断

#ifdef _DEBUG
void CMFC200511_1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMFC200511_1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMFC200511_1Doc* CMFC200511_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC200511_1Doc)));
	return (CMFC200511_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC200511_1View 数据库支持
CRecordset* CMFC200511_1View::OnGetRecordset()
{
	return m_pSet;
}



// CMFC200511_1View 消息处理程序


void CMFC200511_1View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	
	CString s;
	m_pSet->GetFieldValue(short(4), s);
	CClientDC dc(this);
	CImage img;
	CRect rect;
	img.Load(s);
	GetDlgItem(IDC_STATIC2)->GetClientRect(&rect);
	CDC *pDC = GetDlgItem(IDC_STATIC2)->GetDC();
	SetStretchBltMode(pDC->m_hDC, STRETCH_HALFTONE);
	SetStretchBltMode(pDC->m_hDC, STRETCH_HALFTONE);//不失真
	img.Draw(pDC->m_hDC,rect);


}


void CMFC200511_1View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
}
