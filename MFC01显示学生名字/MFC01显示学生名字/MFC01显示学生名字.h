
// MFC01��ʾѧ������.h : MFC01��ʾѧ������ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC01��ʾѧ������App:
// �йش����ʵ�֣������ MFC01��ʾѧ������.cpp
//

class CMFC01��ʾѧ������App : public CWinApp
{
public:
	CMFC01��ʾѧ������App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC01��ʾѧ������App theApp;
