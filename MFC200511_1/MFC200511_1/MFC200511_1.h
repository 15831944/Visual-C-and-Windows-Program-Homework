
// MFC200511_1.h : MFC200511_1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC200511_1App:
// �йش����ʵ�֣������ MFC200511_1.cpp
//

class CMFC200511_1App : public CWinApp
{
public:
	CMFC200511_1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC200511_1App theApp;
