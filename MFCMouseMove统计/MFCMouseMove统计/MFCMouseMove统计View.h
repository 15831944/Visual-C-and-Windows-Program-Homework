
// MFCMouseMove统计View.h : CMFCMouseMove统计View 类的接口
//

#pragma once


class CMFCMouseMove统计View : public CView
{
protected: // 仅从序列化创建
	CMFCMouseMove统计View();
	DECLARE_DYNCREATE(CMFCMouseMove统计View)

// 特性
public:
	CMFCMouseMove统计Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCMouseMove统计View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int x0, x1, y0, y1;
	int count;
	bool set;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCMouseMove统计View.cpp 中的调试版本
inline CMFCMouseMove统计Doc* CMFCMouseMove统计View::GetDocument() const
   { return reinterpret_cast<CMFCMouseMove统计Doc*>(m_pDocument); }
#endif

