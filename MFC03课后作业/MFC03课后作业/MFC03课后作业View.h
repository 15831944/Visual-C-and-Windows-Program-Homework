
// MFC03课后作业View.h : CMFC03课后作业View 类的接口
//

#pragma once


class CMFC03课后作业View : public CView
{
protected: // 仅从序列化创建
	CMFC03课后作业View();
	DECLARE_DYNCREATE(CMFC03课后作业View)

// 特性
public:
	CMFC03课后作业Doc* GetDocument() const;

// 操作
public:
	CString v;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC03课后作业View();
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

#ifndef _DEBUG  // MFC03课后作业View.cpp 中的调试版本
inline CMFC03课后作业Doc* CMFC03课后作业View::GetDocument() const
   { return reinterpret_cast<CMFC03课后作业Doc*>(m_pDocument); }
#endif

