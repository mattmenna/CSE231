/*
Project 5 - Robot.h
Matthew Menna
Section 10 (Tues 3:00)
A33948969
*/

#pragma once

#include "stdafx.h"
#include "ChildView.h"

class Robot{
private:
	// data members here
        // the names of all the cylinder variables
//allows drawCylinder(Torso); in robot.cpp etc...

Cylinder Torso;
Cylinder RightArm;
Cylinder LeftArm;
Cylinder LeftLeg;
Cylinder RightLeg;
Cylinder Head;
Cylinder Neck;

	
public:
	// member functions here
	void drawBot();  // causes the cylinders to be drawn on the screen
	void initBot(); // initialize each cylinder with properties

	void makeTorso(); //seven total parts 
	void makeRightArm();
	void makeLeftArm();
	void makeNeck();
	void makeLeftLeg();
	void makeRightLeg();
	void makeHead();
};
