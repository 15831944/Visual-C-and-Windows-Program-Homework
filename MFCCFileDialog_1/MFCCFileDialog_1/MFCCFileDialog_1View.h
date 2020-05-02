
// MFCCFileDialog_1View.h : CMFCCFileDialog_1View 类的接口
//

#pragma once


class CMFCCFileDialog_1View : public CView
{
protected: // 仅从序列化创建
	CMFCCFileDialog_1View();
	DECLARE_DYNCREATE(CMFCCFileDialog_1View)

// 特性
public:
	CMFCCFileDialog_1Doc* GetDocument() const;

// 操作
public:
	int a;
	CString s;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCCFileDialog_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // MFCCFileDialog_1View.cpp 中的调试版本
inline CMFCCFileDialog_1Doc* CMFCCFileDialog_1View::GetDocument() const
   { return reinterpret_cast<CMFCCFileDialog_1Doc*>(m_pDocument); }
#endif

