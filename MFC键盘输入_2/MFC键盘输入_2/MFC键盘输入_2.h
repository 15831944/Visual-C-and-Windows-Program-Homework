
// MFC��������_2.h : MFC��������_2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC��������_2App:
// �йش����ʵ�֣������ MFC��������_2.cpp
//

class CMFC��������_2App : public CWinApp
{
public:
	CMFC��������_2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC��������_2App theApp;
