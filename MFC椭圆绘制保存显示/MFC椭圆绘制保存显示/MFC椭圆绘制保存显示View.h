
// MFC椭圆绘制保存显示View.h : CMFC椭圆绘制保存显示View 类的接口
//

#pragma once


class CMFC椭圆绘制保存显示View : public CView
{
protected: // 仅从序列化创建
	CMFC椭圆绘制保存显示View();
	DECLARE_DYNCREATE(CMFC椭圆绘制保存显示View)

// 特性
public:
	CMFC椭圆绘制保存显示Doc* GetDocument() const;

// 操作
public:
	CRect cr;
	CArray<CRect, CRect> p_cr;
	int count = 0;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC椭圆绘制保存显示View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC椭圆绘制保存显示View.cpp 中的调试版本
inline CMFC椭圆绘制保存显示Doc* CMFC椭圆绘制保存显示View::GetDocument() const
   { return reinterpret_cast<CMFC椭圆绘制保存显示Doc*>(m_pDocument); }
#endif

