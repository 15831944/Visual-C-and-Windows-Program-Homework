
// MFC������Բ_4.h : MFC������Բ_4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC������Բ_4App:
// �йش����ʵ�֣������ MFC������Բ_4.cpp
//

class CMFC������Բ_4App : public CWinApp
{
public:
	CMFC������Բ_4App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC������Բ_4App theApp;
