
// MFCDataControl0519Doc.h : CMFCDataControl0519Doc ��Ľӿ�
//


#pragma once
#include "MFCDataControl0519Set.h"


class CMFCDataControl0519Doc : public CDocument
{
protected: // �������л�����
	CMFCDataControl0519Doc();
	DECLARE_DYNCREATE(CMFCDataControl0519Doc)

// ����
public:
	CMFCDataControl0519Set m_MFCDataControl0519Set;

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
	virtual ~CMFCDataControl0519Doc();
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
