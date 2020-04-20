
// MFC绘制椭圆_3View.h : CMFC绘制椭圆_3View 类的接口
//

#pragma once


class CMFC绘制椭圆_3View : public CView
{
protected: // 仅从序列化创建
	CMFC绘制椭圆_3View();
	DECLARE_DYNCREATE(CMFC绘制椭圆_3View)

// 特性
public:
	CMFC绘制椭圆_3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC绘制椭圆_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect rect1;
	CArray<CRect, CRect&> ca;
	CPoint m_ptMouse;
	int f;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC绘制椭圆_3View.cpp 中的调试版本
inline CMFC绘制椭圆_3Doc* CMFC绘制椭圆_3View::GetDocument() const
   { return reinterpret_cast<CMFC绘制椭圆_3Doc*>(m_pDocument); }
#endif

