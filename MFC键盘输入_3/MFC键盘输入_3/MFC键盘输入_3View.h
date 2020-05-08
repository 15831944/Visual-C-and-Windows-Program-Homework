
// MFC键盘输入_3View.h : CMFC键盘输入_3View 类的接口
//

#pragma once


class CMFC键盘输入_3View : public CView
{
protected: // 仅从序列化创建
	CMFC键盘输入_3View();
	DECLARE_DYNCREATE(CMFC键盘输入_3View)

// 特性
public:
	CMFC键盘输入_3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC键盘输入_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int mo;
	CString s;
	CPoint p;
	CRect r,r1;
	int c_width , c_height ;
	int flag, line;
	int h, l;
	int num, min, left, leftNum;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC键盘输入_3View.cpp 中的调试版本
inline CMFC键盘输入_3Doc* CMFC键盘输入_3View::GetDocument() const
   { return reinterpret_cast<CMFC键盘输入_3Doc*>(m_pDocument); }
#endif

