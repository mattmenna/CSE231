/*
Project 5 - Robot.cpp
Matthew Menna
Section 10 (Tues 3:00)
A33948969
*/

#include "stdafx.h"
#include "Robot.h"

using namespace std;

// definitions of Robot member functions
// go after this
// this member function is used to set each of the cylinder variables using 
// setAngle, setTransX etc


void Robot::initBot() //needed to create unique cylinders
{
makeTorso();	//seven total
makeRightArm();
makeLeftArm();
makeNeck();
makeLeftLeg();
makeRightLeg();
makeHead();
}

// this member function will call the draw routine that will put 
// each cylinder on the screen  one call for each cylinder
// drawCylinder(neck); for example to draw the neck

void Robot::drawBot() //draws cylinder using set get functions specific to part
{
	drawCylinder(Torso);	//One for each part
	drawCylinder(RightArm);	//Seven total
	drawCylinder(LeftArm);
	drawCylinder(Neck);
	drawCylinder(Head);	
	drawCylinder(RightLeg);
	drawCylinder(LeftLeg);

}

void Robot::makeTorso()	// create a Cylinder and assign it to the torso
{
Torso.setAngle(90); //angle *use full 360 degrees
Torso.setTransX(0); //translation in x direction
Torso.setTransY(0); //translation in y direction
Torso.setRadius(2); //radius of cylinder
Torso.setHeight(5); //height of cylinder
Torso.setRed(1.0); //sets color can mix for different colors than RGB ex white = 1 1 1
Torso.setGreen(0); 
Torso.setBlue(0); 
}

void Robot::makeRightArm()	// create a Cylinder and assign it to the right arm
{
RightArm.setAngle(35); 
RightArm.setTransX(1.5); 
RightArm.setTransY(3); 
RightArm.setRadius(1); 
RightArm.setHeight(4); 
RightArm.setRed(0); 
RightArm.setGreen(1); 
RightArm.setBlue(0); 
}

void Robot::makeLeftArm()	// create a Cylinder and assign it to the left arm
{
LeftArm.setAngle(145); 
LeftArm.setTransX(-1.5); 
LeftArm.setTransY(3); 
LeftArm.setRadius(1); 
LeftArm.setHeight(4); 
LeftArm.setRed(0); 
LeftArm.setGreen(1); 
LeftArm.setBlue(0); 
}

void Robot::makeNeck()	// create a Cylinder and assign it to the neck
{
Neck.setAngle(90); 
Neck.setTransX(0); 
Neck.setTransY(5); 
Neck.setRadius(.5); 
Neck.setHeight(1); 
Neck.setRed(1); 
Neck.setGreen(0); 
Neck.setBlue(0); 
}

void Robot::makeHead()	// create a Cylinder and assign it to the head
{
Head.setAngle(90); 
Head.setTransX(0); 
Head.setTransY(6); 
Head.setRadius(1); 
Head.setHeight(1.5); 
Head.setRed(1); 
Head.setGreen(1); 
Head.setBlue(1); 
}

void Robot::makeLeftLeg()	// create a Cylinder and assign it to the left leg
{
LeftLeg.setAngle(255); 
LeftLeg.setTransX(-1); 
LeftLeg.setTransY(0); 
LeftLeg.setRadius(1); 
LeftLeg.setHeight(6); 
LeftLeg.setRed(0); 
LeftLeg.setGreen(0); 
LeftLeg.setBlue(1); 
}

void Robot::makeRightLeg()	// create a Cylinder and assign it to the right leg
{
RightLeg.setAngle(285); 
RightLeg.setTransX(1); 
RightLeg.setTransY(0); 
RightLeg.setRadius(1); 
RightLeg.setHeight(6); 
RightLeg.setRed(0); 
RightLeg.setGreen(0); 
RightLeg.setBlue(1); 
}