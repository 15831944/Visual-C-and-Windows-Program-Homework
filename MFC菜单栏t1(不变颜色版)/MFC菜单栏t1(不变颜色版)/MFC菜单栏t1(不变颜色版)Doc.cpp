
// MFC�˵���t1(������ɫ��)Doc.cpp : CMFC�˵���t1������ɫ��Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC�˵���t1(������ɫ��).h"
#endif

#include "MFC�˵���t1(������ɫ��)Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMFC�˵���t1������ɫ��Doc

IMPLEMENT_DYNCREATE(CMFC�˵���t1������ɫ��Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFC�˵���t1������ɫ��Doc, CDocument)
END_MESSAGE_MAP()


// CMFC�˵���t1������ɫ��Doc ����/����

CMFC�˵���t1������ɫ��Doc::CMFC�˵���t1������ɫ��Doc()
{
	// TODO: �ڴ����һ���Թ������

}

CMFC�˵���t1������ɫ��Doc::~CMFC�˵���t1������ɫ��Doc()
{
}

BOOL CMFC�˵���t1������ɫ��Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CMFC�˵���t1������ɫ��Doc ���л�

void CMFC�˵���t1������ɫ��Doc::Serialize(CArchive& ar)
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
void CMFC�˵���t1������ɫ��Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CMFC�˵���t1������ɫ��Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CMFC�˵���t1������ɫ��Doc::SetSearchContent(const CString& value)
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

// CMFC�˵���t1������ɫ��Doc ���

#ifdef _DEBUG
void CMFC�˵���t1������ɫ��Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFC�˵���t1������ɫ��Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMFC�˵���t1������ɫ��Doc ����
