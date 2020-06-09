
// MFCDataControl0519Set.cpp : CMFCDataControl0519Set ���ʵ��
//

#include "stdafx.h"
#include "MFCDataControl0519.h"
#include "MFCDataControl0519Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCDataControl0519Set ʵ��

// ���������� 2020��5��21��, 16:53

IMPLEMENT_DYNAMIC(CMFCDataControl0519Set, CRecordset)

CMFCDataControl0519Set::CMFCDataControl0519Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_point = 0;
	m_sno = 0;
	m_nFields = 3;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CMFCDataControl0519Set::GetDefaultConnect()
{
	return _T("DBQ=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\\x6570\x636e\x5e93\\D0521.mdb;DefaultDir=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\\x6570\x636e\x5e93;Driver={Microsoft Access Driver (*.mdb)};DriverId=25;FIL=MS Access;FILEDSN=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\\x6570\x636e\x5e93\\D0521.mdb.dsn;MaxBufferSize=2048;MaxScanRows=8;PageTimeout=5;SafeTransactions=0;Threads=3;UID=admin;UserCommitSync=Yes;");
}

CString CMFCDataControl0519Set::GetDefaultSQL()
{
	return _T("[��1]");
}

void CMFCDataControl0519Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Long(pFX, _T("[point]"), m_point);
	RFX_Long(pFX, _T("[sno]"), m_sno);

}
/////////////////////////////////////////////////////////////////////////////
// CMFCDataControl0519Set ���

#ifdef _DEBUG
void CMFCDataControl0519Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMFCDataControl0519Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

