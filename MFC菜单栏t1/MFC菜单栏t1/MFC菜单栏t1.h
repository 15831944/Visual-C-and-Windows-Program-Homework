
// MFC�˵���t1.h : MFC�˵���t1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC�˵���t1App:
// �йش����ʵ�֣������ MFC�˵���t1.cpp
//

class CMFC�˵���t1App : public CWinApp
{
public:
	CMFC�˵���t1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC�˵���t1App theApp;
