
// MFC��ͼƬ�����.h : MFC��ͼƬ����� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC��ͼƬ�����App:
// �йش����ʵ�֣������ MFC��ͼƬ�����.cpp
//

class CMFC��ͼƬ�����App : public CWinApp
{
public:
	CMFC��ͼƬ�����App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC��ͼƬ�����App theApp;
