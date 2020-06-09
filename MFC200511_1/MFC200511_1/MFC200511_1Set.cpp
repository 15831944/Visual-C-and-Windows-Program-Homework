
// MFC200511_1Set.cpp : CMFC200511_1Set 类的实现
//

#include "stdafx.h"
#include "MFC200511_1.h"
#include "MFC200511_1Set.h"
#include "Dlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC200511_1Set 实现

// 代码生成在 2020年5月11日, 14:56

IMPLEMENT_DYNAMIC(CMFC200511_1Set, CRecordset)

CMFC200511_1Set::CMFC200511_1Set(CDatabase* pdb)
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
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString CMFC200511_1Set::GetDefaultConnect()
{
	return _T("DBQ=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\student_0511.xls;DefaultDir=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1;Driver={Microsoft Excel Driver (*.xls)};DriverId=790;FIL=excel 8.0;FILEDSN=D:\\Data\\\x5b66\x4e60\x6587\x4ef6\\Visual C++\x4e0eWindows\x5e94\x7528\x5f00\x53d1\\student_0511.xls.dsn;MaxBufferSize=2048;MaxScanRows=8;PageTimeout=5;ReadOnly=0;SafeTransactions=0;Threads=3;UID=admin;UserCommitSync=Yes;");
}

CString CMFC200511_1Set::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void CMFC200511_1Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Text(pFX, _T("[姓名]"), column1);
	RFX_Double(pFX, _T("[学号]"), column2);
	RFX_Double(pFX, _T("[年龄]"), column3);
	RFX_Double(pFX, _T("[电话]"), column4);
	RFX_Text(pFX, _T("[照片]"), column5);

}
/////////////////////////////////////////////////////////////////////////////
// CMFC200511_1Set 诊断

#ifdef _DEBUG
void CMFC200511_1Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMFC200511_1Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

