
// MFCDataControl0519.h : MFCDataControl0519 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCDataControl0519App:
// �йش����ʵ�֣������ MFCDataControl0519.cpp
//

class CMFCDataControl0519App : public CWinApp
{
public:
	CMFCDataControl0519App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCDataControl0519App theApp;
