
// MFC矩形移动(4-13)View.h : CMFC矩形移动413View 类的接口
//

#pragma once


class CMFC矩形移动413View : public CView
{
protected: // 仅从序列化创建
	CMFC矩形移动413View();
	DECLARE_DYNCREATE(CMFC矩形移动413View)

// 特性
public:
	CMFC矩形移动413Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CMFC矩形移动413View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CPoint m_ptMouse;
	CRect rect;
	bool m_bLButtonDown;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // MFC矩形移动(4-13)View.cpp 中的调试版本
inline CMFC矩形移动413Doc* CMFC矩形移动413View::GetDocument() const
   { return reinterpret_cast<CMFC矩形移动413Doc*>(m_pDocument); }
#endif

