
// Mfc_Stu_Photo_Big_Show.h : Mfc_Stu_Photo_Big_Show Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMfc_Stu_Photo_Big_ShowApp:
// �йش����ʵ�֣������ Mfc_Stu_Photo_Big_Show.cpp
//

class CMfc_Stu_Photo_Big_ShowApp : public CWinApp
{
public:
	CMfc_Stu_Photo_Big_ShowApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMfc_Stu_Photo_Big_ShowApp theApp;
