
// MFCС���˶�(4-13-3).h : MFCС���˶�(4-13-3) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCС���˶�4133App:
// �йش����ʵ�֣������ MFCС���˶�(4-13-3).cpp
//

class CMFCС���˶�4133App : public CWinApp
{
public:
	CMFCС���˶�4133App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCС���˶�4133App theApp;
