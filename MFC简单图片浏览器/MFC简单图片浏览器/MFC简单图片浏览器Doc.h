
// MFC��ͼƬ�����Doc.h : CMFC��ͼƬ�����Doc ��Ľӿ�
//


#pragma once
#include "MFC��ͼƬ�����Set.h"


class CMFC��ͼƬ�����Doc : public CDocument
{
protected: // �������л�����
	CMFC��ͼƬ�����Doc();
	DECLARE_DYNCREATE(CMFC��ͼƬ�����Doc)

// ����
public:
	CMFC��ͼƬ�����Set m_MFC��ͼƬ�����Set;

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
	virtual ~CMFC��ͼƬ�����Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ�����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
