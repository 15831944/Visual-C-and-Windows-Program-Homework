
// MFCCFileDialog_2Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCCFileDialog_2.h"
#include "MFCCFileDialog_2Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


#include <fstream>
#include<string>
#include <cstring>
#include<iostream>
using namespace std;

// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCCFileDialog_2Dlg 对话框



CMFCCFileDialog_2Dlg::CMFCCFileDialog_2Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MFCCFILEDIALOG_2_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCCFileDialog_2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFCCFileDialog_2Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
END_MESSAGE_MAP()


// CMFCCFileDialog_2Dlg 消息处理程序

BOOL CMFCCFileDialog_2Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMFCCFileDialog_2Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。





/*

CString *SplitString(CString str, char split, int& iSubStrs)
{
	int iPos = 0; //分割符位置
	int iNums = 0; //分割符的总数
	CString strTemp = str;
	CString strRight;
	//先计算子字符串的数量
	while (iPos != -1)
	{
		iPos = strTemp.Find(split);
		if (iPos == -1)
		{
			break;
		}
		strRight = strTemp.Mid(iPos + 1, str.GetLength());
		strTemp = strRight;
		iNums++;
	}
	if (iNums == 0) //没有找到分割符
	{
		//子字符串数就是字符串本身
		iSubStrs = 1;
		return NULL;
	}
	//子字符串数组
	iSubStrs = iNums + 1; //子串的数量 = 分割符数量 + 1
	CString* pStrSplit;
	pStrSplit = new CString[iSubStrs];
	strTemp = str;
	CString strLeft;
	for (int i = 0; i <= iNums; i++)
	{
		iPos = strTemp.Find(split);
		//左子串
		strLeft = strTemp.Left(iPos);
		//右子串
		strRight = strTemp.Mid(iPos + 1, strTemp.GetLength());
		strTemp = strRight;
		pStrSplit[i] = strLeft;
	}
	pStrSplit[iNums] = strTemp;
	return pStrSplit;
}


*/







void CMFCCFileDialog_2Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
	CClientDC dc(this);
	fstream t;
	char buf[100];
	t.open("D:\\Data\\学习文件\\Visual C++与Windows应用开发\\其他\\abc.txt", ios::out | ios::in);
	if (t)
	{

		//while (!t.eof())
		{
			t.getline(buf, sizeof(buf));
			cout << buf << endl;
			CString str(buf);
			pic = CString(buf);
			CString s = _T("\\");
			CString ss = _T("\\\\");
			pic.Replace(s, ss);
			CImage img;
			img.Load(pic);
			CDC* pDC = GetDlgItem(IDC_show)->GetDC();
			CRect rect;
			GetDlgItem(IDC_show)->GetClientRect(&rect);
			SetStretchBltMode(pDC->m_hDC, STRETCH_HALFTONE);//不失真显示
			img.Draw(pDC->m_hDC, rect);
			dc.TextOutW(50,550,pic);
			}


	}


}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMFCCFileDialog_2Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

