
// MFC20200316.h : MFC20200316 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC20200316App:
// �йش����ʵ�֣������ MFC20200316.cpp
//

class CMFC20200316App : public CWinApp
{
public:
	CMFC20200316App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC20200316App theApp;
