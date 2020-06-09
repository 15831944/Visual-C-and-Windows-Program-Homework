
// Mfc_Stu_Photo_Big_Show.h : Mfc_Stu_Photo_Big_Show 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMfc_Stu_Photo_Big_ShowApp:
// 有关此类的实现，请参阅 Mfc_Stu_Photo_Big_Show.cpp
//

class CMfc_Stu_Photo_Big_ShowApp : public CWinApp
{
public:
	CMfc_Stu_Photo_Big_ShowApp();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMfc_Stu_Photo_Big_ShowApp theApp;
