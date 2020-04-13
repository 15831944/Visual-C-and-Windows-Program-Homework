
// MFC小球运动(4-13-3)View.h : CMFC小球运动4133View 类的接口
//

#pragma once


class CMFC小球运动4133View : public CView
{
protected: // 仅从序列化创建
	CMFC小球运动4133View();
	DECLARE_DYNCREATE(CMFC小球运动4133View)

// 特性
public:
	CMFC小球运动4133Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC小球运动4133View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect cr;
	CRect rc;
	int i;
	int st;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC小球运动(4-13-3)View.cpp 中的调试版本
inline CMFC小球运动4133Doc* CMFC小球运动4133View::GetDocument() const
   { return reinterpret_cast<CMFC小球运动4133Doc*>(m_pDocument); }
#endif

