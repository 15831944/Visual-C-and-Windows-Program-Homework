
// T200505View.h : CT200505View ��Ľӿ�
//

#pragma once

class CT200505Set;

class CT200505View : public CRecordView
{
protected: // �������л�����
	CT200505View();
	DECLARE_DYNCREATE(CT200505View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_T200505_FORM };
#endif
	CT200505Set* m_pSet;

// ����
public:
	CT200505Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CT200505View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString name;
	CString sno;
	CString age;
	CString phone;
};

#ifndef _DEBUG  // T200505View.cpp �еĵ��԰汾
inline CT200505Doc* CT200505View::GetDocument() const
   { return reinterpret_cast<CT200505Doc*>(m_pDocument); }
#endif

