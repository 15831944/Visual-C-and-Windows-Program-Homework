
// T200505View.cpp : CT200505View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CT200505View ����/����

CT200505View::CT200505View()
	: CRecordView(IDD_T200505_FORM)
	, name(_T(""))
	, sno(_T(""))
	, age(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CT200505View::~CT200505View()
{
}

void CT200505View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column4);
}

BOOL CT200505View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CT200505View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_T200505Set;
	CRecordView::OnInitialUpdate();

}


// CT200505View ���

#ifdef _DEBUG
void CT200505View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CT200505View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CT200505Doc* CT200505View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CT200505Doc)));
	return (CT200505Doc*)m_pDocument;
}
#endif //_DEBUG


// CT200505View ���ݿ�֧��
CRecordset* CT200505View::OnGetRecordset()
{
	return m_pSet;
}



// CT200505View ��Ϣ�������
