
// ѧ����Ϣ����ϵͳSet.cpp : Cѧ����Ϣ����ϵͳSet ���ʵ��
//

#include "stdafx.h"
#include "ѧ����Ϣ����ϵͳ.h"
#include "ѧ����Ϣ����ϵͳSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cѧ����Ϣ����ϵͳSet ʵ��

// ���������� 2020��6��1��, 14:26

IMPLEMENT_DYNAMIC(Cѧ����Ϣ����ϵͳSet, CRecordset)

Cѧ����Ϣ����ϵͳSet::Cѧ����Ϣ����ϵͳSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	column1 = L"";
	column2 = L"";
	column3 = L"";
	column4 = L"";
	column5 = 0.0;
	column6 = 0;
	column7 = L"";
	column8 = L"";
	column9 = L"";
	m_nFields = 10;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString Cѧ����Ϣ����ϵͳSet::GetDefaultConnect()
{
	return _T("DBQ=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\\x6570\x636e\x5e93\\\x5b66\x751f\x4fe1\x606f\x7ba1\x7406\x7cfb\x7edf.mdb;DefaultDir=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\\x6570\x636e\x5e93;Driver={Microsoft Access Driver (*.mdb, *.accdb)};DriverId=25;FIL=MS Access;FILEDSN=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\\x6570\x636e\x5e93\\\x5b66\x751f\x4fe1\x606f\x7ba1\x7406\x7cfb\x7edf.mdb.dsn;MaxBufferSize=2048;MaxScanRows=8;PageTimeout=5;SafeTransactions=0;Threads=3;UID=admin;UserCommitSync=Yes;");
}

CString Cѧ����Ϣ����ϵͳSet::GetDefaultSQL()
{
	return _T("[��1]");
}

void Cѧ����Ϣ����ϵͳSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Text(pFX, _T("[ѧ��]"), column2);
	RFX_Text(pFX, _T("[רҵ]"), column3);
	RFX_Text(pFX, _T("[�Ա�]"), column4);
	RFX_Double(pFX, _T("[��������]"), column5);
	RFX_Long(pFX, _T("[�ֻ�����]"), column6);
	RFX_Text(pFX, _T("[��ͥסַ]"), column7);
	RFX_Text(pFX, _T("[��Ƭ�ļ���]"), column8);
	RFX_Text(pFX, _T("[��Ƭ�ļ���]"), column9);

}
/////////////////////////////////////////////////////////////////////////////
// Cѧ����Ϣ����ϵͳSet ���

#ifdef _DEBUG
void Cѧ����Ϣ����ϵͳSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void Cѧ����Ϣ����ϵͳSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

