
// MFC�Ի���_1.h : MFC�Ի���_1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC�Ի���_1App:
// �йش����ʵ�֣������ MFC�Ի���_1.cpp
//

class CMFC�Ի���_1App : public CWinApp
{
public:
	CMFC�Ի���_1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC�Ի���_1App theApp;
