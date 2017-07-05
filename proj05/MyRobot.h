// MyRobot.h : main header file for the MyRobot application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CMyRobotApp:
// See MyRobot.cpp for the implementation of this class
//

class CMyRobotApp : public CWinApp
{
public:
	CMyRobotApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMyRobotApp theApp;