
// MFC������Բ_3.h : MFC������Բ_3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC������Բ_3App:
// �йش����ʵ�֣������ MFC������Բ_3.cpp
//

class CMFC������Բ_3App : public CWinApp
{
public:
	CMFC������Բ_3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC������Բ_3App theApp;
