
// Library_0.h : Library_0 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CLibrary_0App:
// �йش����ʵ�֣������ Library_0.cpp
//

class CLibrary_0App : public CWinApp
{
public:
	CLibrary_0App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CLibrary_0App theApp;
