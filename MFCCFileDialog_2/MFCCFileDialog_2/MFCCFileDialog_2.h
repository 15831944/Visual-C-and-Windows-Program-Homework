
// MFCCFileDialog_2.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFCCFileDialog_2App: 
// �йش����ʵ�֣������ MFCCFileDialog_2.cpp
//

class CMFCCFileDialog_2App : public CWinApp
{
public:
	CMFCCFileDialog_2App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFCCFileDialog_2App theApp;