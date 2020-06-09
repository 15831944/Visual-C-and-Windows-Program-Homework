
// MFCDataControl0519.h : MFCDataControl0519 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMFCDataControl0519App:
// 有关此类的实现，请参阅 MFCDataControl0519.cpp
//

class CMFCDataControl0519App : public CWinApp
{
public:
	CMFCDataControl0519App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCDataControl0519App theApp;
