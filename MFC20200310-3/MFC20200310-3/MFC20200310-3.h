
// MFC20200310-3.h : MFC20200310-3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC202003103App:
// �йش����ʵ�֣������ MFC20200310-3.cpp
//

class CMFC202003103App : public CWinApp
{
public:
	CMFC202003103App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC202003103App theApp;
