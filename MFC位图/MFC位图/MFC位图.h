
// MFCλͼ.h : MFCλͼ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCλͼApp:
// �йش����ʵ�֣������ MFCλͼ.cpp
//

class CMFCλͼApp : public CWinApp
{
public:
	CMFCλͼApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCλͼApp theApp;
