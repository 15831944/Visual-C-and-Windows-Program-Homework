// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� WIN32D_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// WIN32D_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef WIN32D_EXPORTS
#define WIN32D_API __declspec(dllexport)
#else
#define WIN32D_API __declspec(dllimport)
#endif

// �����Ǵ� Win32D.dll ������
class WIN32D_API CWin32D {
public:
	CWin32D(void);
	// TODO:  �ڴ�������ķ�����
};
extern WIN32D_API int nWin32D;
WIN32D_API int fnWin32D(void);

#include"math.h"
 class WIN32D_API FAC {
	double Rad_to_deg = 45.0 / atan(1.0);
public:
	FAC() {  }
	float convert(float deg);

};
 WIN32D_API int factorial(int n);