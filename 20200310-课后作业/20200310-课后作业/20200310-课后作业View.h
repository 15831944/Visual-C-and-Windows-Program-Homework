
// 20200310-课后作业View.h : CMy20200310课后作业View 类的接口
//

#pragma once


class CMy20200310课后作业View : public CView
{
protected: // 仅从序列化创建
	CMy20200310课后作业View();
	DECLARE_DYNCREATE(CMy20200310课后作业View)

// 特性
public:
	CMy20200310课后作业Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy20200310课后作业View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect cr1 = CRect(100, 70, 300, 200);
	CRect cr2 = CRect(500, 50, 700, 200);
	CRect cr3 = CRect(800, 90, 1000, 300);
	CRect cr4 = CRect(1100, 90, 1300,300);
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 20200310-课后作业View.cpp 中的调试版本
inline CMy20200310课后作业Doc* CMy20200310课后作业View::GetDocument() const
   { return reinterpret_cast<CMy20200310课后作业Doc*>(m_pDocument); }
#endif

