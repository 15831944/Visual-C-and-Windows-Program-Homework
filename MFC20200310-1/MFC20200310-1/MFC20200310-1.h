
// MFC20200310-1.h : MFC20200310-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC202003101App:
// �йش����ʵ�֣������ MFC20200310-1.cpp
//

class CMFC202003101App : public CWinApp
{
public:
	CMFC202003101App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC202003101App theApp;
