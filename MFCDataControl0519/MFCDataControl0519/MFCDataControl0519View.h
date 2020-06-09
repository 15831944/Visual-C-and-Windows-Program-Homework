
// MFCDataControl0519View.h : CMFCDataControl0519View 类的接口
//

#pragma once

class CMFCDataControl0519Set;

class CMFCDataControl0519View : public CRecordView
{
protected: // 仅从序列化创建
	CMFCDataControl0519View();
	DECLARE_DYNCREATE(CMFCDataControl0519View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MFCDATACONTROL0519_FORM };
#endif
	CMFCDataControl0519Set* m_pSet;

// 特性
public:
	CMFCDataControl0519Doc* GetDocument() const;

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
	virtual ~CMFCDataControl0519View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long a1;
	long a2;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
};

#ifndef _DEBUG  // MFCDataControl0519View.cpp 中的调试版本
inline CMFCDataControl0519Doc* CMFCDataControl0519View::GetDocument() const
   { return reinterpret_cast<CMFCDataControl0519Doc*>(m_pDocument); }
#endif

