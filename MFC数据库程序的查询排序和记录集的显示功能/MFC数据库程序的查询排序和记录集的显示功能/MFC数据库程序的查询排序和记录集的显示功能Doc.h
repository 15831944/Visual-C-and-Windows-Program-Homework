
// MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc.h : CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc ��Ľӿ�
//


#pragma once
#include "MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set.h"


class CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc : public CDocument
{
protected: // �������л�����
	CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc();
	DECLARE_DYNCREATE(CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc)

// ����
public:
	CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set m_MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set;

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
	virtual ~CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Doc();
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
