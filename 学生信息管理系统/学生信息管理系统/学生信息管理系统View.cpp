
// ѧ����Ϣ����ϵͳView.cpp : Cѧ����Ϣ����ϵͳView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ѧ����Ϣ����ϵͳ.h"
#endif

#include "ѧ����Ϣ����ϵͳSet.h"
#include "ѧ����Ϣ����ϵͳDoc.h"
#include "ѧ����Ϣ����ϵͳView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cѧ����Ϣ����ϵͳView

IMPLEMENT_DYNCREATE(Cѧ����Ϣ����ϵͳView, CRecordView)

BEGIN_MESSAGE_MAP(Cѧ����Ϣ����ϵͳView, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &Cѧ����Ϣ����ϵͳView::OnBnClickedButton1)
	ON_COMMAND(ID_RECORD_FIRST, &Cѧ����Ϣ����ϵͳView::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &Cѧ����Ϣ����ϵͳView::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &Cѧ����Ϣ����ϵͳView::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &Cѧ����Ϣ����ϵͳView::OnRecordLast)
	ON_WM_PAINT()
	ON_COMMAND(ID_32771, &Cѧ����Ϣ����ϵͳView::On32771)
	ON_COMMAND(ID_32772, &Cѧ����Ϣ����ϵͳView::On32772)
	ON_COMMAND(ID_32773, &Cѧ����Ϣ����ϵͳView::On32773)
	ON_COMMAND(ID_32774, &Cѧ����Ϣ����ϵͳView::On32774)
	ON_COMMAND(ID_32775, &Cѧ����Ϣ����ϵͳView::On32775)
	ON_BN_CLICKED(IDC_BUTTON2, &Cѧ����Ϣ����ϵͳView::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &Cѧ����Ϣ����ϵͳView::OnBnClickedButton3)
END_MESSAGE_MAP()

// Cѧ����Ϣ����ϵͳView ����/����

Cѧ����Ϣ����ϵͳView::Cѧ����Ϣ����ϵͳView()
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
	// TODO: �ڴ˴���ӹ������

}

Cѧ����Ϣ����ϵͳView::~Cѧ����Ϣ����ϵͳView()
{
}

void Cѧ����Ϣ����ϵͳView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
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

BOOL Cѧ����Ϣ����ϵͳView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Cѧ����Ϣ����ϵͳView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_ѧ����Ϣ����ϵͳSet;
	CRecordView::OnInitialUpdate();

}


// Cѧ����Ϣ����ϵͳView ���

#ifdef _DEBUG
void Cѧ����Ϣ����ϵͳView::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cѧ����Ϣ����ϵͳView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cѧ����Ϣ����ϵͳDoc* Cѧ����Ϣ����ϵͳView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cѧ����Ϣ����ϵͳDoc)));
	return (Cѧ����Ϣ����ϵͳDoc*)m_pDocument;
}
#endif //_DEBUG


// Cѧ����Ϣ����ϵͳView ���ݿ�֧��
CRecordset* Cѧ����Ϣ����ϵͳView::OnGetRecordset()
{
	return m_pSet;
}



// Cѧ����Ϣ����ϵͳView ��Ϣ�������

#include "DLG_Showpic.h"
void Cѧ����Ϣ����ϵͳView::OnBnClickedButton1()//�Ŵ���ʾ
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	DLG_Showpic dlg;
	if (dlg.DoModal() == IDOK)
	{

	}
}


void Cѧ����Ϣ����ϵͳView::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	Invalidate();
	OnPaint();
}


void Cѧ����Ϣ����ϵͳView::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	Invalidate();
	OnPaint();
}


void Cѧ����Ϣ����ϵͳView::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	Invalidate();
	OnPaint();
}


void Cѧ����Ϣ����ϵͳView::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	Invalidate();
	OnPaint();
}


void Cѧ����Ϣ����ϵͳView::OnPaint()
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
	img.Destroy();				   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
}

#include "DLG_order.h"
void Cѧ����Ϣ����ϵͳView::On32771()//����
{
	// TODO: �ڴ���������������
	DLG_order dlg;
	if (dlg.DoModal()==IDOK)
	{
		m_pSet->m_strSort = dlg.order;//m_strSort
		m_pSet->Requery();
	}
	Invalidate();
}

#include "DLG_select.h"
void Cѧ����Ϣ����ϵͳView::On32772()//��ѯ
{
	// TODO: �ڴ���������������
	DLG_select dlg;
	if (dlg.DoModal() == IDOK)
	{
		m_pSet->m_strFilter = dlg.select;//m_strFilter
		m_pSet->Requery();

	}
	Invalidate();
}

#include "DLG_add.h"
void Cѧ����Ϣ����ϵͳView::On32773()//����
{
	// TODO: �ڴ���������������
	DLG_add dlg;
	if (dlg.DoModal() == IDOK)
	{

	}
}


void Cѧ����Ϣ����ϵͳView::On32774()//ɾ��
{
	// TODO: �ڴ���������������
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}

#include "DLG_change.h"
void Cѧ����Ϣ����ϵͳView::On32775()//�޸�
{
	// TODO: �ڴ���������������
	DLG_change dlg;
	if (dlg.DoModal() == IDOK)
	{

	}
}


void Cѧ����Ϣ����ϵͳView::OnBnClickedButton2()//�ָ�
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->m_strFilter = _T("");

	m_pSet->Requery();
	Invalidate();
}

#include "DLG_show.h"
void Cѧ����Ϣ����ϵͳView::OnBnClickedButton3()//��ʾ��¼��
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
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
