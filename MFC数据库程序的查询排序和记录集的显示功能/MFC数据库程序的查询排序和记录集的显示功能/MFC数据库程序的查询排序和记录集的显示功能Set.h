
// MFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set.h: CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set ��Ľӿ�
//


#pragma once

// ���������� 2020��5��25��, 15:36

class CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set : public CRecordset
{
public:
	CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CMFC���ݿ����Ĳ�ѯ����ͼ�¼������ʾ����Set)

// �ֶ�/��������

// �����ַ�������(�������)��ӳ���ݿ��ֶ�(ANSI �������͵� CStringA �� Unicode
// �������͵� CStringW)��ʵ���������͡�
//  ����Ϊ��ֹ ODBC ��������ִ�п���
// ����Ҫ��ת�������ϣ�������Խ���Щ��Ա����Ϊ
// CString ���ͣ�ODBC ��������ִ�����б�Ҫ��ת����
// (ע��: ����ʹ�� 3.5 �����߰汾�� ODBC ��������
// ��ͬʱ֧�� Unicode ����Щת��)��

	long	m_ID;
	long	column1;
	CStringW	column2;
	CStringW	column3;
	long	column4;
	CStringW	column5;
	CStringW	column6;

// ��д
	// �����ɵ��麯����д
	public:
	virtual CString GetDefaultConnect();	// Ĭ�������ַ���

	virtual CString GetDefaultSQL(); 	// ��¼����Ĭ�� SQL
	virtual void DoFieldExchange(CFieldExchange* pFX);	// RFX ֧��

// ʵ��
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

};

