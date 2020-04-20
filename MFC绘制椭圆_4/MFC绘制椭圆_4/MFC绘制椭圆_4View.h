
// MFC绘制椭圆_4View.h : CMFC绘制椭圆_4View 类的接口
//

#pragma once


class CMFC绘制椭圆_4View : public CView
{
protected: // 仅从序列化创建
	CMFC绘制椭圆_4View();
	DECLARE_DYNCREATE(CMFC绘制椭圆_4View)

// 特性
public:
	CMFC绘制椭圆_4Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC绘制椭圆_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect rect;
	int red, green, blue;
	bool flag;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShow();
};

#ifndef _DEBUG  // MFC绘制椭圆_4View.cpp 中的调试版本
inline CMFC绘制椭圆_4Doc* CMFC绘制椭圆_4View::GetDocument() const
   { return reinterpret_cast<CMFC绘制椭圆_4Doc*>(m_pDocument); }
#endif

