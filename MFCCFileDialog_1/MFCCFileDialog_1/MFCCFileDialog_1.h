
// MFCCFileDialog_1.h : MFCCFileDialog_1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCCFileDialog_1App:
// �йش����ʵ�֣������ MFCCFileDialog_1.cpp
//

class CMFCCFileDialog_1App : public CWinApp
{
public:
	CMFCCFileDialog_1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCCFileDialog_1App theApp;
