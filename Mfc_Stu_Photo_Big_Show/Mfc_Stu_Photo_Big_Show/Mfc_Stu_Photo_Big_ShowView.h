
// Mfc_Stu_Photo_Big_ShowView.h : CMfc_Stu_Photo_Big_ShowView 类的接口
//

#pragma once
#include "Mfc_Stu_Photo_Big_ShowDoc.h"
class CMfc_Stu_Photo_Big_ShowSet;

class CMfc_Stu_Photo_Big_ShowView : public CRecordView
{
protected: // 仅从序列化创建
	CMfc_Stu_Photo_Big_ShowView();
	DECLARE_DYNCREATE(CMfc_Stu_Photo_Big_ShowView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MFC_STU_PHOTO_BIG_SHOW_FORM };
#endif
	CMfc_Stu_Photo_Big_ShowSet* m_pSet;

// 特性
public:
	CMfc_Stu_Photo_Big_ShowDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CMfc_Stu_Photo_Big_ShowView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CString path;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString a1;
	CString a2;
	CString a3;
	CString a4;
	afx_msg void OnPaint();
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // Mfc_Stu_Photo_Big_ShowView.cpp 中的调试版本
inline CMfc_Stu_Photo_Big_ShowDoc* CMfc_Stu_Photo_Big_ShowView::GetDocument() const
   { return reinterpret_cast<CMfc_Stu_Photo_Big_ShowDoc*>(m_pDocument); }
#endif

