
// MFC圆反弹View.h : CMFC圆反弹View 类的接口
//

#pragma once


class CMFC圆反弹View : public CView
{
protected: // 仅从序列化创建
	CMFC圆反弹View();
	DECLARE_DYNCREATE(CMFC圆反弹View)

// 特性
public:
	CMFC圆反弹Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC圆反弹View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC圆反弹View.cpp 中的调试版本
inline CMFC圆反弹Doc* CMFC圆反弹View::GetDocument() const
   { return reinterpret_cast<CMFC圆反弹Doc*>(m_pDocument); }
#endif

