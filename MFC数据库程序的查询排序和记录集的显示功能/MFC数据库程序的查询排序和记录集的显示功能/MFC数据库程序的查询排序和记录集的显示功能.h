
// MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����.h : MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ���� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����App:
// �йش����ʵ�֣������ MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����.cpp
//

class CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����App : public CWinApp
{
public:
	CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����App theApp;
