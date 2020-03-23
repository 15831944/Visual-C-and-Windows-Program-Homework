
// MFC矩形的变换View.h : CMFC矩形的变换View 类的接口
//

#pragma once


class CMFC矩形的变换View : public CView
{
protected: // 仅从序列化创建
	CMFC矩形的变换View();
	DECLARE_DYNCREATE(CMFC矩形的变换View)

// 特性
public:
	CMFC矩形的变换Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC矩形的变换View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect rect;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC矩形的变换View.cpp 中的调试版本
inline CMFC矩形的变换Doc* CMFC矩形的变换View::GetDocument() const
   { return reinterpret_cast<CMFC矩形的变换Doc*>(m_pDocument); }
#endif

