
// MFCMouseMoveͳ��.h : MFCMouseMoveͳ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCMouseMoveͳ��App:
// �йش����ʵ�֣������ MFCMouseMoveͳ��.cpp
//

class CMFCMouseMoveͳ��App : public CWinApp
{
public:
	CMFCMouseMoveͳ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCMouseMoveͳ��App theApp;
