
// MFC02点击记录View.h : CMFC02点击记录View 类的接口
//

#pragma once


class CMFC02点击记录View : public CView
{
protected: // 仅从序列化创建
	CMFC02点击记录View();
	DECLARE_DYNCREATE(CMFC02点击记录View)

// 特性
public:
	CMFC02点击记录Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC02点击记录View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC02点击记录View.cpp 中的调试版本
inline CMFC02点击记录Doc* CMFC02点击记录View::GetDocument() const
   { return reinterpret_cast<CMFC02点击记录Doc*>(m_pDocument); }
#endif

