
// MFC20200310-2.h : MFC20200310-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC202003102App:
// �йش����ʵ�֣������ MFC20200310-2.cpp
//

class CMFC202003102App : public CWinApp
{
public:
	CMFC202003102App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC202003102App theApp;
