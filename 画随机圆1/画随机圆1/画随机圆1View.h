
// 画随机圆1View.h : C画随机圆1View 类的接口
//

#pragma once


class C画随机圆1View : public CView
{
protected: // 仅从序列化创建
	C画随机圆1View();
	DECLARE_DYNCREATE(C画随机圆1View)

// 特性
public:
	C画随机圆1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C画随机圆1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 画随机圆1View.cpp 中的调试版本
inline C画随机圆1Doc* C画随机圆1View::GetDocument() const
   { return reinterpret_cast<C画随机圆1Doc*>(m_pDocument); }
#endif

