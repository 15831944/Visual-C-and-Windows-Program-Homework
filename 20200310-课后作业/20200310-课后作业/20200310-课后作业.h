
// 20200310-�κ���ҵ.h : 20200310-�κ���ҵ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy20200310�κ���ҵApp:
// �йش����ʵ�֣������ 20200310-�κ���ҵ.cpp
//

class CMy20200310�κ���ҵApp : public CWinApp
{
public:
	CMy20200310�κ���ҵApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy20200310�κ���ҵApp theApp;
