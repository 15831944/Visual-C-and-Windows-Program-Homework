
// MFC������Բ_2.h : MFC������Բ_2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC������Բ_2App:
// �йش����ʵ�֣������ MFC������Բ_2.cpp
//

class CMFC������Բ_2App : public CWinApp
{
public:
	CMFC������Բ_2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC������Բ_2App theApp;
