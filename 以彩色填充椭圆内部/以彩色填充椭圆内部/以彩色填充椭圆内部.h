
// �Բ�ɫ�����Բ�ڲ�.h : �Բ�ɫ�����Բ�ڲ� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�Բ�ɫ�����Բ�ڲ�App:
// �йش����ʵ�֣������ �Բ�ɫ�����Բ�ڲ�.cpp
//

class C�Բ�ɫ�����Բ�ڲ�App : public CWinApp
{
public:
	C�Բ�ɫ�����Բ�ڲ�App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�Բ�ɫ�����Բ�ڲ�App theApp;
