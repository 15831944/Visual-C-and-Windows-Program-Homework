
// MFC�˵���t1(������ɫ��)Doc.h : CMFC�˵���t1������ɫ��Doc ��Ľӿ�
//


#pragma once


class CMFC�˵���t1������ɫ��Doc : public CDocument
{
protected: // �������л�����
	CMFC�˵���t1������ɫ��Doc();
	DECLARE_DYNCREATE(CMFC�˵���t1������ɫ��Doc)

// ����
public:

// ����
public:

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
	virtual ~CMFC�˵���t1������ɫ��Doc();
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
