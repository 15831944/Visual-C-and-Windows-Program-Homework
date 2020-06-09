
// MFC简单图片浏览器View.h : CMFC简单图片浏览器View 类的接口
//

#pragma once

class CMFC简单图片浏览器Set;

class CMFC简单图片浏览器View : public CRecordView
{
protected: // 仅从序列化创建
	CMFC简单图片浏览器View();
	DECLARE_DYNCREATE(CMFC简单图片浏览器View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MFC_FORM };
#endif
	CMFC简单图片浏览器Set* m_pSet;
	CString ad;
// 特性
public:
	CMFC简单图片浏览器Doc* GetDocument() const;

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
	virtual ~CMFC简单图片浏览器View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
private:
	CString address;
public:
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnPaint();
	afx_msg void OnEnChangeEdit1();
};

#ifndef _DEBUG  // MFC简单图片浏览器View.cpp 中的调试版本
inline CMFC简单图片浏览器Doc* CMFC简单图片浏览器View::GetDocument() const
   { return reinterpret_cast<CMFC简单图片浏览器Doc*>(m_pDocument); }
#endif

