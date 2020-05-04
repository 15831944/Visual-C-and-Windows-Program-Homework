
// Library_0View.h : CLibrary_0View 类的接口
//

#pragma once


class CLibrary_0View : public CView
{
protected: // 仅从序列化创建
	CLibrary_0View();
	DECLARE_DYNCREATE(CLibrary_0View)

// 特性
public:
	CLibrary_0Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CLibrary_0View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Library_0View.cpp 中的调试版本
inline CLibrary_0Doc* CLibrary_0View::GetDocument() const
   { return reinterpret_cast<CLibrary_0Doc*>(m_pDocument); }
#endif

