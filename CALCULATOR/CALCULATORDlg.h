
// CALCULATORDlg.h : 头文件
//

#pragma once


// CCALCULATORDlg 对话框
class CCALCULATORDlg : public CDialogEx
{
// 构造
public:
	CCALCULATORDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_CALCULATOR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString m_str;
	double temp;
	int flag,flag2;
	afx_msg void OnBnClicked1();
	afx_msg void OnBnClicked2();
	afx_msg void OnBnClicked3();
	afx_msg void OnBnClicked0();
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedMinus();
	afx_msg void OnBnClickedMul();
	afx_msg void OnBnClickedDivision();
	afx_msg void OnBnClickedEqual();
	afx_msg void OnBnClickedDot();
	afx_msg void OnBnClickedClear();
	afx_msg void OnBnClicked4();
	afx_msg void OnBnClicked5();
	afx_msg void OnBnClicked6();
	afx_msg void OnBnClicked7();
	afx_msg void OnBnClicked8();
	afx_msg void OnBnClicked9();
	afx_msg void OnBnClickedBack();
	afx_msg void OnBnClickedSquare();
	afx_msg void OnBnClickedGuanyu();
	afx_msg void OnBnClickedPlusorminus();
	afx_msg void OnBnClickedEvolution();
	afx_msg void OnBnClickedDenominator();
	afx_msg void OnBnClickedPercent();
//	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	double x,y;
	int m_h;
	int m_m;
	int m_s;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBnClickedCloc();
};
