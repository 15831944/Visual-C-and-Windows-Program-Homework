
// MFC��������_3.h : MFC��������_3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC��������_3App:
// �йش����ʵ�֣������ MFC��������_3.cpp
//

class CMFC��������_3App : public CWinApp
{
public:
	CMFC��������_3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC��������_3App theApp;
