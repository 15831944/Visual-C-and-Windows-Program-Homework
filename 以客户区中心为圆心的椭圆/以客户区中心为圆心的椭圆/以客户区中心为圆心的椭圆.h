
// �Կͻ�������ΪԲ�ĵ���Բ.h : �Կͻ�������ΪԲ�ĵ���Բ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�Կͻ�������ΪԲ�ĵ���ԲApp:
// �йش����ʵ�֣������ �Կͻ�������ΪԲ�ĵ���Բ.cpp
//

class C�Կͻ�������ΪԲ�ĵ���ԲApp : public CWinApp
{
public:
	C�Կͻ�������ΪԲ�ĵ���ԲApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�Կͻ�������ΪԲ�ĵ���ԲApp theApp;
