
// MFC�Ի����ļ�����ʾ_1.h : MFC�Ի����ļ�����ʾ_1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC�Ի����ļ�����ʾ_1App:
// �йش����ʵ�֣������ MFC�Ի����ļ�����ʾ_1.cpp
//

class CMFC�Ի����ļ�����ʾ_1App : public CWinApp
{
public:
	CMFC�Ի����ļ�����ʾ_1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC�Ի����ļ�����ʾ_1App theApp;
