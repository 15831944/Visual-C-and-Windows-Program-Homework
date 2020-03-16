
// 画随机圆2.h : 画随机圆2 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// C画随机圆2App:
// 有关此类的实现，请参阅 画随机圆2.cpp
//

class C画随机圆2App : public CWinApp
{
public:
	C画随机圆2App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C画随机圆2App theApp;
