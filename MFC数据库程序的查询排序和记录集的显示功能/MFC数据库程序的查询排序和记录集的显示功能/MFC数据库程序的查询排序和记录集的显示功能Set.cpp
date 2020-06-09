
// MFC数据库程序的查询排序和记录集的显示功能Set.cpp : CMFC数据库程序的查询排序和记录集的显示功能Set 类的实现
//

#include "stdafx.h"
#include "MFC数据库程序的查询排序和记录集的显示功能.h"
#include "MFC数据库程序的查询排序和记录集的显示功能Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC数据库程序的查询排序和记录集的显示功能Set 实现

// 代码生成在 2020年5月25日, 15:36

IMPLEMENT_DYNAMIC(CMFC数据库程序的查询排序和记录集的显示功能Set, CRecordset)

CMFC数据库程序的查询排序和记录集的显示功能Set::CMFC数据库程序的查询排序和记录集的显示功能Set(CDatabase* pdb)
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
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString CMFC数据库程序的查询排序和记录集的显示功能Set::GetDefaultConnect()
{
	return _T("DBQ=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\\x6570\x636e\x5e93\\\x7528\x6237\x4fe1\x606f_0525.mdb;DefaultDir=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\\x6570\x636e\x5e93;Driver={Microsoft Access Driver (*.mdb, *.accdb)};DriverId=25;FIL=MS Access;FILEDSN=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\\x6570\x636e\x5e93\\\x7528\x6237\x4fe1\x606f_0525.mdb.dsn;MaxBufferSize=2048;MaxScanRows=8;PageTimeout=5;SafeTransactions=0;Threads=3;UID=admin;UserCommitSync=Yes;");
}

CString CMFC数据库程序的查询排序和记录集的显示功能Set::GetDefaultSQL()
{
	return _T("[表1]");
}

void CMFC数据库程序的查询排序和记录集的显示功能Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Long(pFX, _T("[编号]"), column1);
	RFX_Text(pFX, _T("[姓名]"), column2);
	RFX_Text(pFX, _T("[性别]"), column3);
	RFX_Long(pFX, _T("[年薪]"), column4);
	RFX_Text(pFX, _T("[图片]"), column5);
	RFX_Text(pFX, _T("[其他]"), column6);

}
/////////////////////////////////////////////////////////////////////////////
// CMFC数据库程序的查询排序和记录集的显示功能Set 诊断

#ifdef _DEBUG
void CMFC数据库程序的查询排序和记录集的显示功能Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMFC数据库程序的查询排序和记录集的显示功能Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

