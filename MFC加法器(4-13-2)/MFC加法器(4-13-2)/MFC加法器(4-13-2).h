
// MFC�ӷ���(4-13-2).h : MFC�ӷ���(4-13-2) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC�ӷ���4132App:
// �йش����ʵ�֣������ MFC�ӷ���(4-13-2).cpp
//

class CMFC�ӷ���4132App : public CWinApp
{
public:
	CMFC�ӷ���4132App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC�ӷ���4132App theApp;
