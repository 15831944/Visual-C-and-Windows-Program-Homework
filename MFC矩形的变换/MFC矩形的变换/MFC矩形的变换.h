
// MFC���εı任.h : MFC���εı任 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC���εı任App:
// �йش����ʵ�֣������ MFC���εı任.cpp
//

class CMFC���εı任App : public CWinApp
{
public:
	CMFC���εı任App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC���εı任App theApp;
