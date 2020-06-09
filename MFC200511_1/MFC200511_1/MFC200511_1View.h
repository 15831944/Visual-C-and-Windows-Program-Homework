
// MFC200511_1View.h : CMFC200511_1View 类的接口
//

#pragma once

class CMFC200511_1Set;

class CMFC200511_1View : public CRecordView
{
protected: // 仅从序列化创建
	CMFC200511_1View();
	DECLARE_DYNCREATE(CMFC200511_1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MFC200511_1_FORM };
#endif
	CMFC200511_1Set* m_pSet;

// 特性
public:
	CMFC200511_1Doc* GetDocument() const;

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
	virtual ~CMFC200511_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString sname;
	CString sno;
	int age;
	CString sphone;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // MFC200511_1View.cpp 中的调试版本
inline CMFC200511_1Doc* CMFC200511_1View::GetDocument() const
   { return reinterpret_cast<CMFC200511_1Doc*>(m_pDocument); }
#endif

