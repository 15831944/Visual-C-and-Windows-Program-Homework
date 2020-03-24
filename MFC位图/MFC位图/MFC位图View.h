
// MFC位图View.h : CMFC位图View 类的接口
//

#pragma once


class CMFC位图View : public CView
{
protected: // 仅从序列化创建
	CMFC位图View();
	DECLARE_DYNCREATE(CMFC位图View)

// 特性
public:
	CMFC位图Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC位图View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC位图View.cpp 中的调试版本
inline CMFC位图Doc* CMFC位图View::GetDocument() const
   { return reinterpret_cast<CMFC位图Doc*>(m_pDocument); }
#endif

