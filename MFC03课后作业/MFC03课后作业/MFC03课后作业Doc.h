
// MFC03�κ���ҵDoc.h : CMFC03�κ���ҵDoc ��Ľӿ�
//


#pragma once


class CMFC03�κ���ҵDoc : public CDocument
{
protected: // �������л�����
	CMFC03�κ���ҵDoc();
	DECLARE_DYNCREATE(CMFC03�κ���ҵDoc)

// ����
public:

// ����
public:
	CString d;
// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMFC03�κ���ҵDoc();
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
