
// MFC键盘输入_1View.h : CMFC键盘输入_1View 类的接口
//

#pragma once


class CMFC键盘输入_1View : public CView
{
protected: // 仅从序列化创建
	CMFC键盘输入_1View();
	DECLARE_DYNCREATE(CMFC键盘输入_1View)

// 特性
public:
	CMFC键盘输入_1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CMFC键盘输入_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CString s;
	CPoint p;
	CRect r;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // MFC键盘输入_1View.cpp 中的调试版本
inline CMFC键盘输入_1Doc* CMFC键盘输入_1View::GetDocument() const
   { return reinterpret_cast<CMFC键盘输入_1Doc*>(m_pDocument); }
#endif

