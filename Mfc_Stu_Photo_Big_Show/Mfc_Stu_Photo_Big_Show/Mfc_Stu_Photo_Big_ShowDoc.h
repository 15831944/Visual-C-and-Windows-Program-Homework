
// Mfc_Stu_Photo_Big_ShowDoc.h : CMfc_Stu_Photo_Big_ShowDoc 类的接口
//


#pragma once
#include "Mfc_Stu_Photo_Big_ShowSet.h"


class CMfc_Stu_Photo_Big_ShowDoc : public CDocument
{
protected: // 仅从序列化创建
	CMfc_Stu_Photo_Big_ShowDoc();
	DECLARE_DYNCREATE(CMfc_Stu_Photo_Big_ShowDoc)

// 特性
public:
	CMfc_Stu_Photo_Big_ShowSet m_Mfc_Stu_Photo_Big_ShowSet;

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~CMfc_Stu_Photo_Big_ShowDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
