
// �Բ�ɫ�����Բ�ڲ�Doc.cpp : C�Բ�ɫ�����Բ�ڲ�Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�Բ�ɫ�����Բ�ڲ�.h"
#endif

#include "�Բ�ɫ�����Բ�ڲ�Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C�Բ�ɫ�����Բ�ڲ�Doc

IMPLEMENT_DYNCREATE(C�Բ�ɫ�����Բ�ڲ�Doc, CDocument)

BEGIN_MESSAGE_MAP(C�Բ�ɫ�����Բ�ڲ�Doc, CDocument)
END_MESSAGE_MAP()


// C�Բ�ɫ�����Բ�ڲ�Doc ����/����

C�Բ�ɫ�����Բ�ڲ�Doc::C�Բ�ɫ�����Բ�ڲ�Doc()
{
	// TODO: �ڴ����һ���Թ������

}

C�Բ�ɫ�����Բ�ڲ�Doc::~C�Բ�ɫ�����Բ�ڲ�Doc()
{
}

BOOL C�Բ�ɫ�����Բ�ڲ�Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// C�Բ�ɫ�����Բ�ڲ�Doc ���л�

void C�Բ�ɫ�����Բ�ڲ�Doc::Serialize(CArchive& ar)
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
void C�Բ�ɫ�����Բ�ڲ�Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void C�Բ�ɫ�����Բ�ڲ�Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void C�Բ�ɫ�����Բ�ڲ�Doc::SetSearchContent(const CString& value)
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

// C�Բ�ɫ�����Բ�ڲ�Doc ���

#ifdef _DEBUG
void C�Բ�ɫ�����Բ�ڲ�Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void C�Բ�ɫ�����Բ�ڲ�Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C�Բ�ɫ�����Բ�ڲ�Doc ����
