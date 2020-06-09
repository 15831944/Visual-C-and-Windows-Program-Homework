
// Mfc_Stu_Photo_Big_ShowSet.cpp : CMfc_Stu_Photo_Big_ShowSet 类的实现
//

#include "stdafx.h"
#include "Mfc_Stu_Photo_Big_Show.h"
#include "Mfc_Stu_Photo_Big_ShowSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMfc_Stu_Photo_Big_ShowSet 实现

// 代码生成在 2020年5月23日, 17:25

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
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
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
// CMfc_Stu_Photo_Big_ShowSet 诊断

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

