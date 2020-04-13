
// MFC对话框_1View.h : CMFC对话框_1View 类的接口
//

#pragma once


class CMFC对话框_1View : public CView
{
protected: // 仅从序列化创建
	CMFC对话框_1View();
	DECLARE_DYNCREATE(CMFC对话框_1View)

// 特性
public:
	CMFC对话框_1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC对话框_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int q;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShown();
};

#ifndef _DEBUG  // MFC对话框_1View.cpp 中的调试版本
inline CMFC对话框_1Doc* CMFC对话框_1View::GetDocument() const
   { return reinterpret_cast<CMFC对话框_1Doc*>(m_pDocument); }
#endif

