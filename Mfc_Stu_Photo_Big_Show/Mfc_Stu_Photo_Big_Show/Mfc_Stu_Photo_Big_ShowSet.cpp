
// Mfc_Stu_Photo_Big_ShowSet.cpp : CMfc_Stu_Photo_Big_ShowSet ���ʵ��
//

#include "stdafx.h"
#include "Mfc_Stu_Photo_Big_Show.h"
#include "Mfc_Stu_Photo_Big_ShowSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMfc_Stu_Photo_Big_ShowSet ʵ��

// ���������� 2020��5��23��, 17:25

IMPLEMENT_DYNAMIC(CMfc_Stu_Photo_Big_ShowSet, CRecordset)

CMfc_Stu_Photo_Big_ShowSet::CMfc_Stu_Photo_Big_ShowSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	column1 = L"";
	column2 = 0.0;
	column3 = 0.0;
	column4 = 0.0;
	column5 = L"";
	m_nFields = 5;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CMfc_Stu_Photo_Big_ShowSet::GetDefaultConnect()
{
	return _T("DBQ=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\student_0511.xls;DefaultDir=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1;Driver={Microsoft Excel Driver (*.xls)};DriverId=790;FIL=excel 8.0;FILEDSN=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\student_0511.xls.dsn;MaxBufferSize=2048;MaxScanRows=8;PageTimeout=5;ReadOnly=0;SafeTransactions=0;Threads=3;UID=admin;UserCommitSync=Yes;");
}

CString CMfc_Stu_Photo_Big_ShowSet::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void CMfc_Stu_Photo_Big_ShowSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Double(pFX, _T("[ѧ��]"), column2);
	RFX_Double(pFX, _T("[����]"), column3);
	RFX_Double(pFX, _T("[�绰]"), column4);
	RFX_Text(pFX, _T("[��Ƭ]"), column5);

}
/////////////////////////////////////////////////////////////////////////////
// CMfc_Stu_Photo_Big_ShowSet ���

#ifdef _DEBUG
void CMfc_Stu_Photo_Big_ShowSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMfc_Stu_Photo_Big_ShowSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

