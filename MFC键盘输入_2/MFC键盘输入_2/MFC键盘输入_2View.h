
// MFC键盘输入_2View.h : CMFC键盘输入_2View 类的接口
//

#pragma once


class CMFC键盘输入_2View : public CView
{
protected: // 仅从序列化创建
	CMFC键盘输入_2View();
	DECLARE_DYNCREATE(CMFC键盘输入_2View)

// 特性
public:
	CMFC键盘输入_2Doc* GetDocument() const;

// 操作
public:
	CString s;
	CPoint p;
	CRect r, r1;
	int c_width, c_height;
	int flag, line;
	int h, l;
	int num, min, left, leftNum;
	int mo;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC键盘输入_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC键盘输入_2View.cpp 中的调试版本
inline CMFC键盘输入_2Doc* CMFC键盘输入_2View::GetDocument() const
   { return reinterpret_cast<CMFC键盘输入_2Doc*>(m_pDocument); }
#endif

