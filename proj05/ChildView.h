// ChildView.h : interface of the CChildView class
//


#pragma once

#include "OpenGLWnd.h"
#include "Cylinder.h"
// CChildView window

void drawCylinder(Cylinder);
void drawAxes(void);

class CChildView : public COpenGLWnd
{
// Construction
public:
	CChildView();

// Attributes
public:

// Operations
public:

// Overrides
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementation
public:
	virtual ~CChildView();

	// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLabstuffSpin();
	double m_spinangle;
	UINT m_spintimer;
	afx_msg void OnTimer(UINT nIDEvent);
	void OnGLDraw(CDC* pdc);
	afx_msg void OnLabstuffNewthing();
};

