
// MFC绘制椭圆_1View.h : CMFC绘制椭圆_1View 类的接口
//

#pragma once


class CMFC绘制椭圆_1View : public CView
{
protected: // 仅从序列化创建
	CMFC绘制椭圆_1View();
	DECLARE_DYNCREATE(CMFC绘制椭圆_1View)

// 特性
public:
	CMFC绘制椭圆_1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC绘制椭圆_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CPoint point1;
	CPoint point2;
	CRect ca;
	bool m_bLButtonDown;
	int f;
	CRect r;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnPaint();
	afx_msg void OnShown1();
	afx_msg void OnBnClickedOk();
};

#ifndef _DEBUG  // MFC绘制椭圆_1View.cpp 中的调试版本
inline CMFC绘制椭圆_1Doc* CMFC绘制椭圆_1View::GetDocument() const
   { return reinterpret_cast<CMFC绘制椭圆_1Doc*>(m_pDocument); }
#endif

