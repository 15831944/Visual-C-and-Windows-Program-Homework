
// Mfc_Stu_Photo_Big_ShowView.cpp : CMfc_Stu_Photo_Big_ShowView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Mfc_Stu_Photo_Big_Show.h"
#endif

#include "Mfc_Stu_Photo_Big_ShowSet.h"
#include "Mfc_Stu_Photo_Big_ShowDoc.h"
#include "Mfc_Stu_Photo_Big_ShowView.h"
#include "SHOW_DLG.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMfc_Stu_Photo_Big_ShowView

IMPLEMENT_DYNCREATE(CMfc_Stu_Photo_Big_ShowView, CRecordView)

BEGIN_MESSAGE_MAP(CMfc_Stu_Photo_Big_ShowView, CRecordView)
	ON_WM_PAINT()
	ON_COMMAND(ID_RECORD_FIRST, &CMfc_Stu_Photo_Big_ShowView::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CMfc_Stu_Photo_Big_ShowView::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CMfc_Stu_Photo_Big_ShowView::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CMfc_Stu_Photo_Big_ShowView::OnRecordLast)
	ON_BN_CLICKED(IDC_BUTTON1, &CMfc_Stu_Photo_Big_ShowView::OnBnClickedButton1)
END_MESSAGE_MAP()

// CMfc_Stu_Photo_Big_ShowView ����/����

CMfc_Stu_Photo_Big_ShowView::CMfc_Stu_Photo_Big_ShowView()
	: CRecordView(IDD_MFC_STU_PHOTO_BIG_SHOW_FORM)
	, a1(_T(""))
	, a2(_T(""))
	, a3(_T(""))
	, a4(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CMfc_Stu_Photo_Big_ShowView::~CMfc_Stu_Photo_Big_ShowView()
{
}

void CMfc_Stu_Photo_Big_ShowView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column4);
	path = _T("");
}

BOOL CMfc_Stu_Photo_Big_ShowView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMfc_Stu_Photo_Big_ShowView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Mfc_Stu_Photo_Big_ShowSet;
	CRecordView::OnInitialUpdate();

}


// CMfc_Stu_Photo_Big_ShowView ���

#ifdef _DEBUG
void CMfc_Stu_Photo_Big_ShowView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMfc_Stu_Photo_Big_ShowView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMfc_Stu_Photo_Big_ShowDoc* CMfc_Stu_Photo_Big_ShowView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMfc_Stu_Photo_Big_ShowDoc)));
	return (CMfc_Stu_Photo_Big_ShowDoc*)m_pDocument;
}
#endif //_DEBUG


// CMfc_Stu_Photo_Big_ShowView ���ݿ�֧��
CRecordset* CMfc_Stu_Photo_Big_ShowView::OnGetRecordset()
{
	return m_pSet;
}



// CMfc_Stu_Photo_Big_ShowView ��Ϣ�������


void CMfc_Stu_Photo_Big_ShowView::OnPaint()
{
	path = m_pSet->column5;
	CPaintDC dc(this); 
	CImage img;
	img.Load(m_pSet->column5);
	CDC* pDC = GetDlgItem(IDC_picshow)->GetDC();
	CRect rect;
	GetDlgItem(IDC_picshow)->GetClientRect(&rect);
	SetStretchBltMode(pDC->m_hDC, STRETCH_HALFTONE);
	img.Draw(pDC->m_hDC, rect);
	img.Destroy();
}


void CMfc_Stu_Photo_Big_ShowView::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	OnPaint();
}


void CMfc_Stu_Photo_Big_ShowView::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	OnPaint();
}


void CMfc_Stu_Photo_Big_ShowView::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if(m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	OnPaint();
}


void CMfc_Stu_Photo_Big_ShowView::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	OnPaint();
}


void CMfc_Stu_Photo_Big_ShowView::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	SHOW_DLG dlg;
	int r = dlg.DoModal();
	
	if (r == IDOK)
	{

	}
}
