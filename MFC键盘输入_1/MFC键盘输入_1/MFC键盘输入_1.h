
// MFC��������_1.h : MFC��������_1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC��������_1App:
// �йش����ʵ�֣������ MFC��������_1.cpp
//

class CMFC��������_1App : public CWinAppEx
{
public:
	CMFC��������_1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC��������_1App theApp;
