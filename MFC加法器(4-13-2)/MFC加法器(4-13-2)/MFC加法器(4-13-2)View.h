
// MFC加法器(4-13-2)View.h : CMFC加法器4132View 类的接口
//

#pragma once


class CMFC加法器4132View : public CView
{
protected: // 仅从序列化创建
	CMFC加法器4132View();
	DECLARE_DYNCREATE(CMFC加法器4132View)

// 特性
public:
	CMFC加法器4132Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC加法器4132View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShown();
};

#ifndef _DEBUG  // MFC加法器(4-13-2)View.cpp 中的调试版本
inline CMFC加法器4132Doc* CMFC加法器4132View::GetDocument() const
   { return reinterpret_cast<CMFC加法器4132Doc*>(m_pDocument); }
#endif

