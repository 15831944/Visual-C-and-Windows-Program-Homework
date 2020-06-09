
// MFC200511_2View.cpp : CMFC200511_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC200511_2.h"
#endif

#include "MFC200511_2Set.h"
#include "MFC200511_2Doc.h"
#include "MFC200511_2View.h"
#include "dlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC200511_2View

IMPLEMENT_DYNCREATE(CMFC200511_2View, CRecordView)

BEGIN_MESSAGE_MAP(CMFC200511_2View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &CMFC200511_2View::OnBnClickedButton1)
	ON_WM_PAINT()
	ON_COMMAND(ID_RECORD_FIRST, &CMFC200511_2View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CMFC200511_2View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CMFC200511_2View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CMFC200511_2View::OnRecordLast)
END_MESSAGE_MAP()

// CMFC200511_2View ����/����

CMFC200511_2View::CMFC200511_2View()
	: CRecordView(IDD_MFC200511_2_FORM)
	, sname(_T(""))
	, sno(_T(""))
	, age(0)
	, sphone(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CMFC200511_2View::~CMFC200511_2View()
{
}

void CMFC200511_2View::DoDataExchange(CDataExchange* pDX)
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

BOOL CMFC200511_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMFC200511_2View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_MFC200511_2Set;
	CRecordView::OnInitialUpdate();

}


// CMFC200511_2View ���

#ifdef _DEBUG
void CMFC200511_2View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMFC200511_2View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMFC200511_2Doc* CMFC200511_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC200511_2Doc)));
	return (CMFC200511_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC200511_2View ���ݿ�֧��
CRecordset* CMFC200511_2View::OnGetRecordset()
{
	return m_pSet;
}



// CMFC200511_2View ��Ϣ�������


void CMFC200511_2View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString s;
	m_pSet->GetFieldValue(short(4), s);
	CImage img;
	img.Load(s);
	CRect rect;
	GetDlgItem(IDC_STATIC2)->GetClientRect(&rect);
	CDC *pDC = GetDlgItem(IDC_STATIC2)->GetDC();
	SetStretchBltMode(pDC->m_hDC, STRETCH_HALFTONE);//��ʧ��
	img.Draw(pDC->m_hDC, rect);
}


void CMFC200511_2View::OnPaint()
{
	
	CPaintDC dc(this);
	CImage img;
	img.Load(m_pSet->column5);
	CDC* pDC = GetDlgItem(IDC_STATIC2)->GetDC();
	CRect rect;
	GetDlgItem(IDC_STATIC2)->GetClientRect(&rect);
	SetStretchBltMode(pDC->m_hDC, STRETCH_HALFTONE);//��ʧ��
	img.Draw(pDC->m_hDC, rect);
}


void CMFC200511_2View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	OnPaint();
	//Invalidate();
}


void CMFC200511_2View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	OnPaint();
	//Invalidate();
}


void CMFC200511_2View::OnRecordNext()
{
	// TODO: �ڴ���������������
	
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	else
	    m_pSet->MoveNext();
	UpdateData(false);
	OnPaint();
	//Invalidate();
}


void CMFC200511_2View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	OnPaint();
	//Invalidate();
}
