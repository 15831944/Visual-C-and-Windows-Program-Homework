
// MFC��Բ���Ʊ�����ʾDoc.cpp : CMFC��Բ���Ʊ�����ʾDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC��Բ���Ʊ�����ʾ.h"
#endif

#include "MFC��Բ���Ʊ�����ʾDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMFC��Բ���Ʊ�����ʾDoc

IMPLEMENT_DYNCREATE(CMFC��Բ���Ʊ�����ʾDoc, CDocument)

BEGIN_MESSAGE_MAP(CMFC��Բ���Ʊ�����ʾDoc, CDocument)
END_MESSAGE_MAP()


// CMFC��Բ���Ʊ�����ʾDoc ����/����

CMFC��Բ���Ʊ�����ʾDoc::CMFC��Բ���Ʊ�����ʾDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CMFC��Բ���Ʊ�����ʾDoc::~CMFC��Բ���Ʊ�����ʾDoc()
{
}

BOOL CMFC��Բ���Ʊ�����ʾDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CMFC��Բ���Ʊ�����ʾDoc ���л�

void CMFC��Բ���Ʊ�����ʾDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CMFC��Բ���Ʊ�����ʾDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// ������������֧��
void CMFC��Բ���Ʊ�����ʾDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CMFC��Բ���Ʊ�����ʾDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CMFC��Բ���Ʊ�����ʾDoc ���

#ifdef _DEBUG
void CMFC��Բ���Ʊ�����ʾDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFC��Բ���Ʊ�����ʾDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMFC��Բ���Ʊ�����ʾDoc ����
