
// MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set.cpp : CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set ���ʵ��
//

#include "stdafx.h"
#include "MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����.h"
#include "MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set ʵ��

// ���������� 2020��5��25��, 15:36

IMPLEMENT_DYNAMIC(CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set, CRecordset)

CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set::CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	column1 = 0;
	column2 = L"";
	column3 = L"";
	column4 = 0;
	column5 = L"";
	column6 = L"";
	m_nFields = 7;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set::GetDefaultConnect()
{
	return _T("DBQ=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\\x6570\x636e\x5e93\\\x7528\x6237\x4fe1\x606f_0525.mdb;DefaultDir=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\\x6570\x636e\x5e93;Driver={Microsoft Access Driver (*.mdb, *.accdb)};DriverId=25;FIL=MS Access;FILEDSN=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\\x6570\x636e\x5e93\\\x7528\x6237\x4fe1\x606f_0525.mdb.dsn;MaxBufferSize=2048;MaxScanRows=8;PageTimeout=5;SafeTransactions=0;Threads=3;UID=admin;UserCommitSync=Yes;");
}

CString CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set::GetDefaultSQL()
{
	return _T("[��1]");
}

void CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Long(pFX, _T("[���]"), column1);
	RFX_Text(pFX, _T("[����]"), column2);
	RFX_Text(pFX, _T("[�Ա�]"), column3);
	RFX_Long(pFX, _T("[��н]"), column4);
	RFX_Text(pFX, _T("[ͼƬ]"), column5);
	RFX_Text(pFX, _T("[����]"), column6);

}
/////////////////////////////////////////////////////////////////////////////
// CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set ���

#ifdef _DEBUG
void CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

