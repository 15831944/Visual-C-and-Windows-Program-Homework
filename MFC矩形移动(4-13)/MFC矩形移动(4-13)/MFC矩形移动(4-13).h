
// MFC�����ƶ�(4-13).h : MFC�����ƶ�(4-13) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC�����ƶ�413App:
// �йش����ʵ�֣������ MFC�����ƶ�(4-13).cpp
//

class CMFC�����ƶ�413App : public CWinAppEx
{
public:
	CMFC�����ƶ�413App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC�����ƶ�413App theApp;
