
// MFC20200310-2View.h : CMFC202003102View 类的接口
//

#pragma once


class CMFC202003102View : public CView
{
protected: // 仅从序列化创建
	CMFC202003102View();
	DECLARE_DYNCREATE(CMFC202003102View)

// 特性
public:
	CMFC202003102Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC202003102View();
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
};

#ifndef _DEBUG  // MFC20200310-2View.cpp 中的调试版本
inline CMFC202003102Doc* CMFC202003102View::GetDocument() const
   { return reinterpret_cast<CMFC202003102Doc*>(m_pDocument); }
#endif

