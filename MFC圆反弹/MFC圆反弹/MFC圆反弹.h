
// MFCԲ����.h : MFCԲ���� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCԲ����App:
// �йش����ʵ�֣������ MFCԲ����.cpp
//

class CMFCԲ����App : public CWinApp
{
public:
	CMFCԲ����App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCԲ����App theApp;
