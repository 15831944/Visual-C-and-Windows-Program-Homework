
// MFC��ͼƬ�����Set.cpp : CMFC��ͼƬ�����Set ���ʵ��
//

#include "stdafx.h"
#include "MFC��ͼƬ�����.h"
#include "MFC��ͼƬ�����Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC��ͼƬ�����Set ʵ��

// ���������� 2020��5��18��, 14:45

IMPLEMENT_DYNAMIC(CMFC��ͼƬ�����Set, CRecordset)

CMFC��ͼƬ�����Set::CMFC��ͼƬ�����Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0.0;
	column1 = L"";
	m_nFields = 2;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CMFC��ͼƬ�����Set::GetDefaultConnect()
{
	return _T("DBQ=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\pic_0512.xls;DefaultDir=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1;Driver={Microsoft Excel Driver (*.xls)};DriverId=790;FIL=excel 8.0;FILEDSN=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\pic_0512.xls.dsn;MaxBufferSize=2048;MaxScanRows=8;PageTimeout=5;ReadOnly=0;SafeTransactions=0;Threads=3;UID=admin;UserCommitSync=Yes;");
}

CString CMFC��ͼƬ�����Set::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void CMFC��ͼƬ�����Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Double(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[ͼƬ��]"), column1);

}
/////////////////////////////////////////////////////////////////////////////
// CMFC��ͼƬ�����Set ���

#ifdef _DEBUG
void CMFC��ͼƬ�����Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMFC��ͼƬ�����Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

