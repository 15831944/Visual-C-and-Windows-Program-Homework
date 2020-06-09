
// Mfc_Stu_Photo_Big_ShowDoc.cpp : CMfc_Stu_Photo_Big_ShowDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Mfc_Stu_Photo_Big_Show.h"
#endif

#include "Mfc_Stu_Photo_Big_ShowSet.h"
#include "Mfc_Stu_Photo_Big_ShowDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMfc_Stu_Photo_Big_ShowDoc

IMPLEMENT_DYNCREATE(CMfc_Stu_Photo_Big_ShowDoc, CDocument)

BEGIN_MESSAGE_MAP(CMfc_Stu_Photo_Big_ShowDoc, CDocument)
END_MESSAGE_MAP()


// CMfc_Stu_Photo_Big_ShowDoc ����/����

CMfc_Stu_Photo_Big_ShowDoc::CMfc_Stu_Photo_Big_ShowDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CMfc_Stu_Photo_Big_ShowDoc::~CMfc_Stu_Photo_Big_ShowDoc()
{
}

BOOL CMfc_Stu_Photo_Big_ShowDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}



#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CMfc_Stu_Photo_Big_ShowDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CMfc_Stu_Photo_Big_ShowDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CMfc_Stu_Photo_Big_ShowDoc::SetSearchContent(const CString& value)
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

// CMfc_Stu_Photo_Big_ShowDoc ���

#ifdef _DEBUG
void CMfc_Stu_Photo_Big_ShowDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMfc_Stu_Photo_Big_ShowDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMfc_Stu_Photo_Big_ShowDoc ����
