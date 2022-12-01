
// MFC BTVNDlg.h : header file
//

#pragma once


// CMFCBTVNDlg dialog
class CMFCBTVNDlg : public CDialogEx
{
// Construction
public:
	CMFCBTVNDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_BTVN_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
		CEdit edit_hotenph;
	CEdit edit_namsinhph;
	CEdit edit_diachiph;
	CButton btn_signin;
	CListBox list_sv;
public:
	afx_msg void OnBnClickedBtnSignin();
protected:
	CEdit edit_tenph;
public:
	afx_msg void OnBnClickedSplit1();
protected:
	CListBox list_sv_tensv;
	CListBox list_sv_namsinhsv;
	CListBox list_sv_diemsv;
	CListBox list_sv_diachisv;
	CListBox list_sv_xeploaisv;
	CListBox list_sv_nhanxet;
	CListBox list_ph_tenph;
	CListBox list_ph_namsinhph;
	CListBox list_ph_diachiph;
};
