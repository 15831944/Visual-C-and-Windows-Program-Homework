
// �Կͻ�������ΪԲ�ĵ���ԲDoc.cpp : C�Կͻ�������ΪԲ�ĵ���ԲDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�Կͻ�������ΪԲ�ĵ���Բ.h"
#endif

#include "�Կͻ�������ΪԲ�ĵ���ԲDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C�Կͻ�������ΪԲ�ĵ���ԲDoc

IMPLEMENT_DYNCREATE(C�Կͻ�������ΪԲ�ĵ���ԲDoc, CDocument)

BEGIN_MESSAGE_MAP(C�Կͻ�������ΪԲ�ĵ���ԲDoc, CDocument)
END_MESSAGE_MAP()


// C�Կͻ�������ΪԲ�ĵ���ԲDoc ����/����

C�Կͻ�������ΪԲ�ĵ���ԲDoc::C�Կͻ�������ΪԲ�ĵ���ԲDoc()
{
	// TODO: �ڴ����һ���Թ������

}

C�Կͻ�������ΪԲ�ĵ���ԲDoc::~C�Կͻ�������ΪԲ�ĵ���ԲDoc()
{
}

BOOL C�Կͻ�������ΪԲ�ĵ���ԲDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// C�Կͻ�������ΪԲ�ĵ���ԲDoc ���л�

void C�Կͻ�������ΪԲ�ĵ���ԲDoc::Serialize(CArchive& ar)
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
void C�Կͻ�������ΪԲ�ĵ���ԲDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void C�Կͻ�������ΪԲ�ĵ���ԲDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void C�Կͻ�������ΪԲ�ĵ���ԲDoc::SetSearchContent(const CString& value)
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

// C�Կͻ�������ΪԲ�ĵ���ԲDoc ���

#ifdef _DEBUG
void C�Կͻ�������ΪԲ�ĵ���ԲDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void C�Կͻ�������ΪԲ�ĵ���ԲDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C�Կͻ�������ΪԲ�ĵ���ԲDoc ����
