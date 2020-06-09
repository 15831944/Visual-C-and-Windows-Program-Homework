
// 学生信息管理系统View.h : C学生信息管理系统View 类的接口
//

#pragma once

class C学生信息管理系统Set;

class C学生信息管理系统View : public CRecordView
{
protected: // 仅从序列化创建
	C学生信息管理系统View();
	DECLARE_DYNCREATE(C学生信息管理系统View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY_FORM };
#endif
	C学生信息管理系统Set* m_pSet;

// 特性
public:
	C学生信息管理系统Doc* GetDocument() const;

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
	virtual ~C学生信息管理系统View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString a1;
	long a2;
	CString a3;
	CString a4;
	CString a5;
	CString a6;
	CString a7;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnPaint();
	CString a8;
	CString a9;
	CString path;
	CString picname;
	afx_msg void On32771();
	afx_msg void On32772();
	afx_msg void On32773();
	afx_msg void On32774();
	afx_msg void On32775();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
};

#ifndef _DEBUG  // 学生信息管理系统View.cpp 中的调试版本
inline C学生信息管理系统Doc* C学生信息管理系统View::GetDocument() const
   { return reinterpret_cast<C学生信息管理系统Doc*>(m_pDocument); }
#endif

