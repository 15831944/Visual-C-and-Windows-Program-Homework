
// MFC������Բ_1.h : MFC������Բ_1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC������Բ_1App:
// �йش����ʵ�֣������ MFC������Բ_1.cpp
//

class CMFC������Բ_1App : public CWinApp
{
public:
	CMFC������Բ_1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC������Բ_1App theApp;
