
// MFC�򵥻�ͼ.h : MFC�򵥻�ͼ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC�򵥻�ͼApp:
// �йش����ʵ�֣������ MFC�򵥻�ͼ.cpp
//

class CMFC�򵥻�ͼApp : public CWinApp
{
public:
	CMFC�򵥻�ͼApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC�򵥻�ͼApp theApp;
