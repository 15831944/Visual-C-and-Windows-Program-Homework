
// MFC20200316.h : MFC20200316 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMFC20200316App:
// 有关此类的实现，请参阅 MFC20200316.cpp
//

class CMFC20200316App : public CWinApp
{
public:
	CMFC20200316App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC20200316App theApp;
