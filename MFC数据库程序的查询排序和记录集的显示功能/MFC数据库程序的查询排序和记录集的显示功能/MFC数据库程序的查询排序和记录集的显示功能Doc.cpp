
// MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc.cpp : CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����.h"
#endif

#include "MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set.h"
#include "MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc

IMPLEMENT_DYNCREATE(CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc, CDocument)
END_MESSAGE_MAP()


// CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc ����/����

CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc::CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc()
{
	// TODO: �ڴ����һ���Թ������

}

CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc::~CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc()
{
}

BOOL CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}



#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc::SetSearchContent(const CString& value)
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

// CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc ���

#ifdef _DEBUG
void CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc ����
