
// �����Բ2.h : �����Բ2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�����Բ2App:
// �йش����ʵ�֣������ �����Բ2.cpp
//

class C�����Բ2App : public CWinApp
{
public:
	C�����Բ2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�����Բ2App theApp;
