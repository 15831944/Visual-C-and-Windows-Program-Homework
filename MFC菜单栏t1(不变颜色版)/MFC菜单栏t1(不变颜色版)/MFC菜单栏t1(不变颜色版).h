
// MFC�˵���t1(������ɫ��).h : MFC�˵���t1(������ɫ��) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC�˵���t1������ɫ��App:
// �йش����ʵ�֣������ MFC�˵���t1(������ɫ��).cpp
//

class CMFC�˵���t1������ɫ��App : public CWinApp
{
public:
	CMFC�˵���t1������ɫ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC�˵���t1������ɫ��App theApp;
