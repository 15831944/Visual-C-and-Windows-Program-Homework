
// MFC简单绘图View.h : CMFC简单绘图View 类的接口
//

#pragma once


class CMFC简单绘图View : public CView
{
protected: // 仅从序列化创建
	CMFC简单绘图View();
	DECLARE_DYNCREATE(CMFC简单绘图View)

// 特性
public:
	CMFC简单绘图Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC简单绘图View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int caozuo;
	CPoint point1;
	CPoint point2;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
	afx_msg void On32772();
	afx_msg void On32773();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC简单绘图View.cpp 中的调试版本
inline CMFC简单绘图Doc* CMFC简单绘图View::GetDocument() const
   { return reinterpret_cast<CMFC简单绘图Doc*>(m_pDocument); }
#endif

