
// MFCDataControl0519View.cpp : CMFCDataControl0519View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CMFCDataControl0519View ����/����

CMFCDataControl0519View::CMFCDataControl0519View()
	: CRecordView(IDD_MFCDATACONTROL0519_FORM)
	, a1(0)
	, a2(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CMFCDataControl0519View::~CMFCDataControl0519View()
{
}

void CMFCDataControl0519View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_sno);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_point);
}

BOOL CMFCDataControl0519View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMFCDataControl0519View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_MFCDataControl0519Set;
	CRecordView::OnInitialUpdate();

}


// CMFCDataControl0519View ���

#ifdef _DEBUG
void CMFCDataControl0519View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMFCDataControl0519View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMFCDataControl0519Doc* CMFCDataControl0519View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCDataControl0519Doc)));
	return (CMFCDataControl0519Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCDataControl0519View ���ݿ�֧��
CRecordset* CMFCDataControl0519View::OnGetRecordset()
{
	return m_pSet;
}



// CMFCDataControl0519View ��Ϣ�������


void CMFCDataControl0519View::OnBnClickedButton1()//ɾ��
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}

#include "ADD_DLG.h"
void CMFCDataControl0519View::OnBnClickedButton2()//���
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
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
void CMFCDataControl0519View::OnBnClickedButton3()//�޸�
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
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
