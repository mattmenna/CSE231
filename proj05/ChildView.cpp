// ChildView.cpp : implementation of the CChildView class
//

#include "stdafx.h"
#include "Robot.h"
#include "ChildView.h"
#include "Resource.h"
#include <cmath>
#include ".\childview.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CChildView

CChildView::CChildView()
: m_spinangle(0)
, m_spintimer(0)
{
}

CChildView::~CChildView()
{
}


BEGIN_MESSAGE_MAP(CChildView, COpenGLWnd)
	ON_WM_PAINT()
	ON_COMMAND(ID_LABSTUFF_SPIN, OnLabstuffSpin)
	ON_WM_TIMER()
END_MESSAGE_MAP()



// CChildView message handlers

BOOL CChildView::PreCreateWindow(CREATESTRUCT& cs) 
{
	if (!COpenGLWnd::PreCreateWindow(cs))
		return FALSE;

	cs.dwExStyle |= WS_EX_CLIENTEDGE;
	cs.style &= ~WS_BORDER;
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW|CS_VREDRAW|CS_DBLCLKS, 
		::LoadCursor(NULL, IDC_ARROW), reinterpret_cast<HBRUSH>(COLOR_WINDOW+1), NULL);

	return TRUE;
}


void CChildView::OnLabstuffSpin(){
	if(m_spintimer){
		KillTimer(m_spintimer);
		m_spintimer = 0;
	}
	else{
		m_spintimer = SetTimer(1, 30, NULL);
	}	
}

void CChildView::OnTimer(UINT nIDEvent)
{
	m_spinangle += 3.0;
	Invalidate();
	COpenGLWnd::OnTimer(nIDEvent);
}

void drawAxes(void){
  glBegin(GL_LINES);
  glVertex3d(0.0,0.0,0.0);
  glVertex3d(10.0, 0.0, 0.0);
  glEnd();
  glBegin(GL_LINES);
  glVertex3d(0.0,0.0,0.0);
  glVertex3d(0.0,10.0,0.0);
  glEnd();
  glBegin(GL_LINES);
  glVertex3d(0.0,0.0,0.0);
  glVertex3d(0.0,0.0,10.0);
  glEnd();
}

void drawCylinder(Cylinder c){
	GLUquadricObj *quadric;
	quadric=gluNewQuadric();			
	gluQuadricNormals(quadric, GLU_SMOOTH);
	gluQuadricDrawStyle(quadric, GLU_FILL);

	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslated(0.0,c.getTransY(),c.getTransX());
	if (c.getAngle() != 0.0)
		glRotated(-c.getAngle(),1.0, 0.0, 0.0);
	glColor3d(c.getRed(), c.getGreen(), c.getBlue());
	gluCylinder(quadric,
		c.getRadius(),
		c.getRadius(),
		c.getHeight(),
		20,
		20
	);
	glPopMatrix();
}



void CChildView::OnGLDraw(CDC* pDC)
{
	int width, height;
	Robot bot;
    GetSize(width, height);

	glClearColor(0.0f, 0.0f, 0.0f, 0.0f) ;
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Simple rectangle example
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
  /*
   glOrtho(-20.0,   // left
           20.0,   // right
           -20.0,   // bottom
           20.0,   // top
           1.0,  // near
           20.0);  // far
		   */
   gluPerspective(60.0, 1.0, 1.0, 100.0);
		   
   double a2r=3.1415926/180.0;
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
   gluLookAt(cos(m_spinangle*a2r)*30, 5.0, sin(m_spinangle*a2r)*30,
			0.0, 0.0, 0.0,
			0.0, 1.0, 0.0);

   glColor3d(1.0, 0.0, 0.0);
   drawAxes();

	bot.initBot();
	bot.drawBot();

   glFlush();
}

