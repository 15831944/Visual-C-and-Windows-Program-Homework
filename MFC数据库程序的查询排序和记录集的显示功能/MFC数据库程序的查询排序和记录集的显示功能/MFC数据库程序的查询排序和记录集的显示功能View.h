
// MFC数据库程序的查询排序和记录集的显示功能View.h : CMFC数据库程序的查询排序和记录集的显示功能View 类的接口
//

#pragma once

class CMFC数据库程序的查询排序和记录集的显示功能Set;

class CMFC数据库程序的查询排序和记录集的显示功能View : public CRecordView
{
protected: // 仅从序列化创建
	CMFC数据库程序的查询排序和记录集的显示功能View();
	DECLARE_DYNCREATE(CMFC数据库程序的查询排序和记录集的显示功能View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MFC_FORM };
#endif
	CMFC数据库程序的查询排序和记录集的显示功能Set* m_pSet;
	CString ss;
// 特性
public:
	CMFC数据库程序的查询排序和记录集的显示功能Doc* GetDocument() const;

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
	virtual ~CMFC数据库程序的查询排序和记录集的显示功能View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CString path;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long a1;
	CString a2;
	CString a3;
	double a4;
	CString a5;
	afx_msg void OnBnClickedButton_showpic();
	afx_msg void OnPaint();
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	CString a7;
	afx_msg void On32771();
	afx_msg void On32772();
	afx_msg void On32776();
	afx_msg void On32773();
	afx_msg void On32775();
	afx_msg void On32774();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // MFC数据库程序的查询排序和记录集的显示功能View.cpp 中的调试版本
inline CMFC数据库程序的查询排序和记录集的显示功能Doc* CMFC数据库程序的查询排序和记录集的显示功能View::GetDocument() const
   { return reinterpret_cast<CMFC数据库程序的查询排序和记录集的显示功能Doc*>(m_pDocument); }
#endif

