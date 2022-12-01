
// MFC BTVNDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "MFC BTVN.h"
#include "MFC BTVNDlg.h"
#include "afxdialogex.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
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


// CMFCBTVNDlg dialog



CMFCBTVNDlg::CMFCBTVNDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFC_BTVN_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCBTVNDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_TENPH, edit_tenph);
	DDX_Control(pDX, IDC_EDIT_NAMSINHPH, edit_namsinhph);
	DDX_Control(pDX, IDC_EDIT_DIACHIPH, edit_diachiph);
	DDX_Control(pDX, IDC_BTN_SIGNIN, btn_signin);
	DDX_Control(pDX, IDC_LIST_SV_TENSV, list_sv_tensv);
	DDX_Control(pDX, IDC_LIST_SV_NAMSINHSV, list_sv_namsinhsv);
	DDX_Control(pDX, IDC_LIST_SV_DIEMSV, list_sv_diemsv);
	DDX_Control(pDX, IDC_LIST_SV_DIACHISV, list_sv_diachisv);
	DDX_Control(pDX, IDC_LIST_SV_XEPLOAISV, list_sv_xeploaisv);
	DDX_Control(pDX, IDC_LIST_SV_NHANXET, list_sv_nhanxet);
	DDX_Control(pDX, IDC_LIST_PH_TENPH, list_ph_tenph);
	DDX_Control(pDX, IDC_LIST_PH_NAMSINHPH, list_ph_namsinhph);
	DDX_Control(pDX, IDC_LIST_PH_DIACHIPH, list_ph_diachiph);
}

BEGIN_MESSAGE_MAP(CMFCBTVNDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BTN_SIGNIN, &CMFCBTVNDlg::OnBnClickedBtnSignin)
	
END_MESSAGE_MAP()


// CMFCBTVNDlg message handlers

BOOL CMFCBTVNDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
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

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMFCBTVNDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFCBTVNDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCBTVNDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


//chay khi nhan vao nut

class nguyenthanh
{
public:
	
	
	nguyenthanh();
	~nguyenthanh();
	void CMFCBTVNDlg();
private:

};

nguyenthanh::nguyenthanh()
{
}

nguyenthanh::~nguyenthanh()
{
}

void CMFCBTVNDlg::OnBnClickedBtnSignin()
{
	UpdateData(TRUE);

	CString str_list_sv_tensv;
	str_list_sv_tensv =_T("Pham Ngoc Hoang Nam"); 
	list_sv_tensv.AddString(str_list_sv_tensv);

	CString str_list_sv_namsinhsv;
	str_list_sv_namsinhsv = _T("23/06/2002");
	list_sv_namsinhsv.AddString(str_list_sv_namsinhsv);

	CString str_list_sv_diemsv;
	str_list_sv_diemsv = _T("10 diem");
	list_sv_diemsv.AddString(str_list_sv_diemsv);

	CString str_list_sv_diachisv;
	edit_diachiph.GetWindowText(str_list_sv_diachisv);//lay bien diachiph gan cho diachisv show ra 
	list_sv_diachisv.AddString(str_list_sv_diachisv);

	CString str_list_sv_xeploaisv;
	str_list_sv_xeploaisv = _T("Xuat sac");
	list_sv_xeploaisv.AddString(str_list_sv_xeploaisv);
	
	CString str_list_sv_nhanxet;
	str_list_sv_nhanxet = _T("Cham ngoan hoc gioi");
	list_sv_nhanxet.AddString(str_list_sv_nhanxet);

	CString str_list_ph_tenph;                          
	edit_tenph.GetWindowText(str_list_ph_tenph);//lay bien tenph nhap vao gan cho bien moi show ra
	
	CString str_list_ph_namsinhph;
	edit_namsinhph.GetWindowText(str_list_ph_namsinhph);

	CString str_list_ph_diachiph;
	edit_diachiph.GetWindowText(str_list_ph_diachiph); //lay bien diachiphuhuynh gan cho bien moi show ra

	list_ph_tenph.AddString(str_list_ph_tenph);
	list_ph_namsinhph.AddString(str_list_ph_namsinhph);
	list_ph_diachiph.AddString(str_list_ph_diachiph);
	UpdateData(FALSE);
}
class hoangnam: public nguyenthanh
{

};