
// MFC菜单栏t1(不变颜色版)View.h : CMFC菜单栏t1不变颜色版View 类的接口
//

#pragma once


class CMFC菜单栏t1不变颜色版View : public CView
{
protected: // 仅从序列化创建
	CMFC菜单栏t1不变颜色版View();
	DECLARE_DYNCREATE(CMFC菜单栏t1不变颜色版View)

// 特性
public:
	CMFC菜单栏t1不变颜色版Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC菜单栏t1不变颜色版View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int x, y;
	CRect cr1;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShow();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // MFC菜单栏t1(不变颜色版)View.cpp 中的调试版本
inline CMFC菜单栏t1不变颜色版Doc* CMFC菜单栏t1不变颜色版View::GetDocument() const
   { return reinterpret_cast<CMFC菜单栏t1不变颜色版Doc*>(m_pDocument); }
#endif

