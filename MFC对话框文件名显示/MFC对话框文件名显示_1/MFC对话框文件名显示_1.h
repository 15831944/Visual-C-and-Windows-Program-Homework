
// MFC对话框文件名显示_1.h : MFC对话框文件名显示_1 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMFC对话框文件名显示_1App:
// 有关此类的实现，请参阅 MFC对话框文件名显示_1.cpp
//

class CMFC对话框文件名显示_1App : public CWinApp
{
public:
	CMFC对话框文件名显示_1App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC对话框文件名显示_1App theApp;
