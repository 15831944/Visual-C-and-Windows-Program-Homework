
// MFC20200310-3View.h : CMFC202003103View 类的接口
//

#pragma once


class CMFC202003103View : public CView
{
protected: // 仅从序列化创建
	CMFC202003103View();
	DECLARE_DYNCREATE(CMFC202003103View)

// 特性
public:
	CMFC202003103Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC202003103View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect cr1 = CRect(100, 70, 300, 200);
	CRect cr2 = CRect(500, 50, 700, 200);
	CRect cr3 = CRect(800, 90, 1000, 300);
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC20200310-3View.cpp 中的调试版本
inline CMFC202003103Doc* CMFC202003103View::GetDocument() const
   { return reinterpret_cast<CMFC202003103Doc*>(m_pDocument); }
#endif

