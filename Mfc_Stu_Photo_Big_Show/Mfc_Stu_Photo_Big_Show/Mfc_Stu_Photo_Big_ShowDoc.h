
// Mfc_Stu_Photo_Big_ShowDoc.h : CMfc_Stu_Photo_Big_ShowDoc ��Ľӿ�
//


#pragma once
#include "Mfc_Stu_Photo_Big_ShowSet.h"


class CMfc_Stu_Photo_Big_ShowDoc : public CDocument
{
protected: // �������л�����
	CMfc_Stu_Photo_Big_ShowDoc();
	DECLARE_DYNCREATE(CMfc_Stu_Photo_Big_ShowDoc)

// ����
public:
	CMfc_Stu_Photo_Big_ShowSet m_Mfc_Stu_Photo_Big_ShowSet;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMfc_Stu_Photo_Big_ShowDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
