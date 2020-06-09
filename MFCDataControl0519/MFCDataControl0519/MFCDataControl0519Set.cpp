
// MFCDataControl0519Set.cpp : CMFCDataControl0519Set 类的实现
//

#include "stdafx.h"
#include "MFCDataControl0519.h"
#include "MFCDataControl0519Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCDataControl0519Set 实现

// 代码生成在 2020年5月21日, 16:53

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
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString CMFCDataControl0519Set::GetDefaultConnect()
{
	return _T("DBQ=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\\x6570\x636e\x5e93\\D0521.mdb;DefaultDir=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\\x6570\x636e\x5e93;Driver={Microsoft Access Driver (*.mdb)};DriverId=25;FIL=MS Access;FILEDSN=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\\x6570\x636e\x5e93\\D0521.mdb.dsn;MaxBufferSize=2048;MaxScanRows=8;PageTimeout=5;SafeTransactions=0;Threads=3;UID=admin;UserCommitSync=Yes;");
}

CString CMFCDataControl0519Set::GetDefaultSQL()
{
	return _T("[表1]");
}

void CMFCDataControl0519Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Long(pFX, _T("[point]"), m_point);
	RFX_Long(pFX, _T("[sno]"), m_sno);

}
/////////////////////////////////////////////////////////////////////////////
// CMFCDataControl0519Set 诊断

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

