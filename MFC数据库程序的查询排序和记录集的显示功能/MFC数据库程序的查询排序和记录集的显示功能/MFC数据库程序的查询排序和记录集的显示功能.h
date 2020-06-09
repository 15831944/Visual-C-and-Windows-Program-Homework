
// MFC数据库程序的查询排序和记录集的显示功能.h : MFC数据库程序的查询排序和记录集的显示功能 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMFC数据库程序的查询排序和记录集的显示功能App:
// 有关此类的实现，请参阅 MFC数据库程序的查询排序和记录集的显示功能.cpp
//

class CMFC数据库程序的查询排序和记录集的显示功能App : public CWinApp
{
public:
	CMFC数据库程序的查询排序和记录集的显示功能App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC数据库程序的查询排序和记录集的显示功能App theApp;
