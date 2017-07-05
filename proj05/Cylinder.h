/*
Project 5 - Cylinder.h
Matthew Menna
Section 10 (Tues 3:00)
A33948969
*/

#pragma once
#include "stdafx.h"

class Cylinder{

private:
	// data members here
		double angle;
		double transX;
		double transY;
		double radius;
		double height;
		double red;
		double green;
		double blue;
	
public:
	Cylinder::Cylinder();

// accessor/mutators here

	void setAngle(double);	
	double getAngle(void);	// get and set the angle

	void setTransX(double);	
	double getTransX(void);	// get and set the x translation

	void setTransY(double);
	double getTransY(void);	// get and set the y translation

	void setRadius(double);	
	double getRadius(void);	// get and set the radius

	void setHeight(double);
	double getHeight(void);	// get and set the height

	void setRed(double);		
	double getRed(void);	// get and set red value

	void setGreen(double);	
	double getGreen(void);	// get and set green value

	void setBlue(double);		
	double getBlue(void);	// get and set blue value

};
