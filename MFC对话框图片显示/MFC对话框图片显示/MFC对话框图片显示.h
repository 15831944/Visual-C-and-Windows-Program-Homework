
// MFC�Ի���ͼƬ��ʾ.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFC�Ի���ͼƬ��ʾApp: 
// �йش����ʵ�֣������ MFC�Ի���ͼƬ��ʾ.cpp
//

class CMFC�Ի���ͼƬ��ʾApp : public CWinApp
{
public:
	CMFC�Ի���ͼƬ��ʾApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFC�Ի���ͼƬ��ʾApp theApp;