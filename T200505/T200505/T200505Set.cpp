
// T200505Set.cpp : CT200505Set ���ʵ��
//

#include "stdafx.h"
#include "T200505.h"
#include "T200505Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CT200505Set ʵ��

// ���������� 2020��5��5��, 15:24

IMPLEMENT_DYNAMIC(CT200505Set, CRecordset)

CT200505Set::CT200505Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	column1 = L"";
	column2 = 0.0;
	column3 = 0.0;
	column4 = 0.0;
	m_nFields = 4;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CT200505Set::GetDefaultConnect()
{
	return _T("DBQ=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\student_1.xls;DefaultDir=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1;Driver={Microsoft Excel Driver (*.xls)};DriverId=790;FIL=excel 8.0;FILEDSN=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\student_1.xls.dsn;MaxBufferSize=2048;MaxScanRows=8;PageTimeout=5;ReadOnly=0;SafeTransactions=0;Threads=3;UID=admin;UserCommitSync=Yes;");
}

CString CT200505Set::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void CT200505Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Double(pFX, _T("[ѧ��]"), column2);
	RFX_Double(pFX, _T("[����]"), column3);
	RFX_Double(pFX, _T("[�绰]"), column4);

}
/////////////////////////////////////////////////////////////////////////////
// CT200505Set ���

#ifdef _DEBUG
void CT200505Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CT200505Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

