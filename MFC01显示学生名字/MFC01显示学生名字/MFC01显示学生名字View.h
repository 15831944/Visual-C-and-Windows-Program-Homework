
// MFC01显示学生名字View.h : CMFC01显示学生名字View 类的接口
//

#pragma once


class CMFC01显示学生名字View : public CView
{
protected: // 仅从序列化创建
	CMFC01显示学生名字View();
	DECLARE_DYNCREATE(CMFC01显示学生名字View)

// 特性
public:
	CMFC01显示学生名字Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC01显示学生名字View();
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

#ifndef _DEBUG  // MFC01显示学生名字View.cpp 中的调试版本
inline CMFC01显示学生名字Doc* CMFC01显示学生名字View::GetDocument() const
   { return reinterpret_cast<CMFC01显示学生名字Doc*>(m_pDocument); }
#endif

