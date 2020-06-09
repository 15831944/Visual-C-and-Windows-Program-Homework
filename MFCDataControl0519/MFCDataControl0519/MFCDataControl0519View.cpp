
// MFCDataControl0519View.cpp : CMFCDataControl0519View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCDataControl0519.h"
#endif

#include "MFCDataControl0519Set.h"
#include "MFCDataControl0519Doc.h"
#include "MFCDataControl0519View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCDataControl0519View

IMPLEMENT_DYNCREATE(CMFCDataControl0519View, CRecordView)

BEGIN_MESSAGE_MAP(CMFCDataControl0519View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCDataControl0519View::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCDataControl0519View::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFCDataControl0519View::OnBnClickedButton3)
END_MESSAGE_MAP()

// CMFCDataControl0519View 构造/析构

CMFCDataControl0519View::CMFCDataControl0519View()
	: CRecordView(IDD_MFCDATACONTROL0519_FORM)
	, a1(0)
	, a2(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CMFCDataControl0519View::~CMFCDataControl0519View()
{
}

void CMFCDataControl0519View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_sno);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_point);
}

BOOL CMFCDataControl0519View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CMFCDataControl0519View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_MFCDataControl0519Set;
	CRecordView::OnInitialUpdate();

}


// CMFCDataControl0519View 诊断

#ifdef _DEBUG
void CMFCDataControl0519View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMFCDataControl0519View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMFCDataControl0519Doc* CMFCDataControl0519View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCDataControl0519Doc)));
	return (CMFCDataControl0519Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCDataControl0519View 数据库支持
CRecordset* CMFCDataControl0519View::OnGetRecordset()
{
	return m_pSet;
}



// CMFCDataControl0519View 消息处理程序


void CMFCDataControl0519View::OnBnClickedButton1()//删除
{
	// TODO: 在此添加控件通知处理程序代码
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}

#include "ADD_DLG.h"
void CMFCDataControl0519View::OnBnClickedButton2()//添加
{
	// TODO: 在此添加控件通知处理程序代码
	ADD_DLG dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		long i_1 = dlg.sno;
		long i_2 = dlg.point;
		m_pSet->AddNew();
		m_pSet->m_sno = i_1;
		m_pSet->m_point = i_2;
		m_pSet->Update();
		UpdateData(false);
	}
}

#include "HANGE_DLG.h"
void CMFCDataControl0519View::OnBnClickedButton3()//修改
{
	// TODO: 在此添加控件通知处理程序代码
	CHANGE_DLG dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		long i_1 = dlg.sno;
		long i_2 = dlg.point;
		m_pSet->Edit();
		m_pSet->m_sno = i_1;
		m_pSet->m_point = i_2;
		m_pSet->Update();
		UpdateData(false);
	}
}
