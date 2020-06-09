
// MFC200511_1View.cpp : CMFC200511_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CMFC200511_1View ����/����

CMFC200511_1View::CMFC200511_1View()
	: CRecordView(IDD_MFC200511_1_FORM)
	, sname(_T(""))
	, sno(_T(""))
	, age(0)
	, sphone(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CMFC200511_1View::~CMFC200511_1View()
{
}

void CMFC200511_1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, );
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column4);
}

BOOL CMFC200511_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMFC200511_1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_MFC200511_1Set;
	CRecordView::OnInitialUpdate();

}


// CMFC200511_1View ���

#ifdef _DEBUG
void CMFC200511_1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMFC200511_1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMFC200511_1Doc* CMFC200511_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC200511_1Doc)));
	return (CMFC200511_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC200511_1View ���ݿ�֧��
CRecordset* CMFC200511_1View::OnGetRecordset()
{
	return m_pSet;
}



// CMFC200511_1View ��Ϣ�������


void CMFC200511_1View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	
	CString s;
	m_pSet->GetFieldValue(short(4), s);
	CClientDC dc(this);
	CImage img;
	CRect rect;
	img.Load(s);
	GetDlgItem(IDC_STATIC2)->GetClientRect(&rect);
	CDC *pDC = GetDlgItem(IDC_STATIC2)->GetDC();
	SetStretchBltMode(pDC->m_hDC, STRETCH_HALFTONE);
	SetStretchBltMode(pDC->m_hDC, STRETCH_HALFTONE);//��ʧ��
	img.Draw(pDC->m_hDC,rect);


}


void CMFC200511_1View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
}
