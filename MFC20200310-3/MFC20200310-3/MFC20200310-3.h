
// MFC20200310-3.h : MFC20200310-3 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMFC202003103App:
// 有关此类的实现，请参阅 MFC20200310-3.cpp
//

class CMFC202003103App : public CWinApp
{
public:
	CMFC202003103App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC202003103App theApp;
