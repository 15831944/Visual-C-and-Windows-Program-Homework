
// MFC03�κ���ҵ.h : MFC03�κ���ҵ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC03�κ���ҵApp:
// �йش����ʵ�֣������ MFC03�κ���ҵ.cpp
//

class CMFC03�κ���ҵApp : public CWinApp
{
public:
	CMFC03�κ���ҵApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC03�κ���ҵApp theApp;
