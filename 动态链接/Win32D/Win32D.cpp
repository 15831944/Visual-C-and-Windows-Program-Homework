// Win32D.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "Win32D.h"


// ���ǵ���������һ��ʾ��
WIN32D_API int nWin32D=0;

// ���ǵ���������һ��ʾ����
WIN32D_API int fnWin32D(void)
{
    return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� Win32D.h
CWin32D::CWin32D()
{
    return;
}


int factorial(int n)
{
	if (n < 0 || n>12) return 0;
	int sum = 1;
	for (int i = 1; i <= n; i++)
		sum = sum*i;
	return sum;
}


 float WIN32D_API FAC::convert(float deg) {
	return deg / (float)Rad_to_deg;
}