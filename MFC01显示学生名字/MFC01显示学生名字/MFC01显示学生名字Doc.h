
// MFC01��ʾѧ������Doc.h : CMFC01��ʾѧ������Doc ��Ľӿ�
//


#pragma once


class CMFC01��ʾѧ������Doc : public CDocument
{
protected: // �������л�����
	CMFC01��ʾѧ������Doc();
	DECLARE_DYNCREATE(CMFC01��ʾѧ������Doc)

// ����
public:

// ����
public:
	CString name;
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
	virtual ~CMFC01��ʾѧ������Doc();
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
