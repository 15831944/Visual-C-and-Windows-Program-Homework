
// MFC200511_2View.h : CMFC200511_2View 类的接口
//

#pragma once

class CMFC200511_2Set;

class CMFC200511_2View : public CRecordView
{
protected: // 仅从序列化创建
	CMFC200511_2View();
	DECLARE_DYNCREATE(CMFC200511_2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MFC200511_2_FORM };
#endif
	CMFC200511_2Set* m_pSet;

// 特性
public:
	CMFC200511_2Doc* GetDocument() const;

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
	virtual ~CMFC200511_2View();
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
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
};

#ifndef _DEBUG  // MFC200511_2View.cpp 中的调试版本
inline CMFC200511_2Doc* CMFC200511_2View::GetDocument() const
   { return reinterpret_cast<CMFC200511_2Doc*>(m_pDocument); }
#endif

