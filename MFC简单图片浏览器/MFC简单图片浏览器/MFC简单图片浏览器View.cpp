
// MFC��ͼƬ�����View.cpp : CMFC��ͼƬ�����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC��ͼƬ�����.h"
#endif

#include "MFC��ͼƬ�����Set.h"
#include "MFC��ͼƬ�����Doc.h"
#include "MFC��ͼƬ�����View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC��ͼƬ�����View

IMPLEMENT_DYNCREATE(CMFC��ͼƬ�����View, CRecordView)

BEGIN_MESSAGE_MAP(CMFC��ͼƬ�����View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CMFC��ͼƬ�����View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CMFC��ͼƬ�����View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CMFC��ͼƬ�����View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CMFC��ͼƬ�����View::OnRecordLast)
	ON_WM_PAINT()
	ON_EN_CHANGE(IDC_EDIT1, &CMFC��ͼƬ�����View::OnEnChangeEdit1)
END_MESSAGE_MAP()

// CMFC��ͼƬ�����View ����/����

CMFC��ͼƬ�����View::CMFC��ͼƬ�����View()
	: CRecordView(IDD_MFC_FORM)
	, address(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	ad = _T("D:\\Data\\ͼƬ\\�����\\");
}

CMFC��ͼƬ�����View::~CMFC��ͼƬ�����View()
{
}

void CMFC��ͼƬ�����View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
}

BOOL CMFC��ͼƬ�����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMFC��ͼƬ�����View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_MFC��ͼƬ�����Set;
	CRecordView::OnInitialUpdate();

}


// CMFC��ͼƬ�����View ���

#ifdef _DEBUG
void CMFC��ͼƬ�����View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMFC��ͼƬ�����View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMFC��ͼƬ�����Doc* CMFC��ͼƬ�����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC��ͼƬ�����Doc)));
	return (CMFC��ͼƬ�����Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC��ͼƬ�����View ���ݿ�֧��
CRecordset* CMFC��ͼƬ�����View::OnGetRecordset()
{
	return m_pSet;
}



// CMFC��ͼƬ�����View ��Ϣ�������


void CMFC��ͼƬ�����View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	OnPaint();
}


void CMFC��ͼƬ�����View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	OnPaint();
}


void CMFC��ͼƬ�����View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	OnPaint();
}


void CMFC��ͼƬ�����View::OnRecordLast()
{
	m_pSet->MoveLast();
	UpdateData(false);
	OnPaint();
	// TODO: �ڴ���������������
}


void CMFC��ͼƬ�����View::OnPaint()
{
	Invalidate();
	CPaintDC dc(this); 
	CImage img;
	CString s=ad + m_pSet->column1;
	img.Load(s);

	CDC* pDC = GetDlgItem(IDC_STATIC1)->GetDC();
	CRect rect;
	GetDlgItem(IDC_STATIC1)->GetClientRect(&rect);
	SetStretchBltMode(pDC->m_hDC, STRETCH_HALFTONE);//��ʧ����ʾ
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

}


void CMFC��ͼƬ�����View::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
