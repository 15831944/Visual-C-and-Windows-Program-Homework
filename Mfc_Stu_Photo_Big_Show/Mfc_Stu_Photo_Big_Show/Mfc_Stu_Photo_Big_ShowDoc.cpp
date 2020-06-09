
// Mfc_Stu_Photo_Big_ShowDoc.cpp : CMfc_Stu_Photo_Big_ShowDoc 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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


// CMfc_Stu_Photo_Big_ShowDoc 构造/析构

CMfc_Stu_Photo_Big_ShowDoc::CMfc_Stu_Photo_Big_ShowDoc()
{
	// TODO: 在此添加一次性构造代码

}

CMfc_Stu_Photo_Big_ShowDoc::~CMfc_Stu_Photo_Big_ShowDoc()
{
}

BOOL CMfc_Stu_Photo_Big_ShowDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 在此添加重新初始化代码
	// (SDI 文档将重用该文档)

	return TRUE;
}



#ifdef SHARED_HANDLERS

// 缩略图的支持
void CMfc_Stu_Photo_Big_ShowDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// 修改此代码以绘制文档数据
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

// 搜索处理程序的支持
void CMfc_Stu_Photo_Big_ShowDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// 从文档数据设置搜索内容。
	// 内容部分应由“;”分隔

	// 例如:     strSearchContent = _T("point;rectangle;circle;ole object;")；
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

// CMfc_Stu_Photo_Big_ShowDoc 诊断

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


// CMfc_Stu_Photo_Big_ShowDoc 命令
