
// MFC200511_2.h : MFC200511_2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC200511_2App:
// �йش����ʵ�֣������ MFC200511_2.cpp
//

class CMFC200511_2App : public CWinApp
{
public:
	CMFC200511_2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC200511_2App theApp;
