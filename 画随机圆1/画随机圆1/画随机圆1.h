
// �����Բ1.h : �����Բ1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�����Բ1App:
// �йش����ʵ�֣������ �����Բ1.cpp
//

class C�����Բ1App : public CWinApp
{
public:
	C�����Բ1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�����Բ1App theApp;
