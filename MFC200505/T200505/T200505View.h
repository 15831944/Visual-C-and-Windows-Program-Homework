
// T200505View.h : CT200505View 类的接口
//

#pragma once

class CT200505Set;

class CT200505View : public CRecordView
{
protected: // 仅从序列化创建
	CT200505View();
	DECLARE_DYNCREATE(CT200505View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_T200505_FORM };
#endif
	CT200505Set* m_pSet;

// 特性
public:
	CT200505Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CT200505View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString name;
	CString sno;
	CString age;
	CString phone;
};

#ifndef _DEBUG  // T200505View.cpp 中的调试版本
inline CT200505Doc* CT200505View::GetDocument() const
   { return reinterpret_cast<CT200505Doc*>(m_pDocument); }
#endif

