
// MFC20200316View.h : CMFC20200316View 类的接口
//

#pragma once


class CMFC20200316View : public CView
{
protected: // 仅从序列化创建
	CMFC20200316View();
	DECLARE_DYNCREATE(CMFC20200316View)

// 特性
public:
	CMFC20200316Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC20200316View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC20200316View.cpp 中的调试版本
inline CMFC20200316Doc* CMFC20200316View::GetDocument() const
   { return reinterpret_cast<CMFC20200316Doc*>(m_pDocument); }
#endif

