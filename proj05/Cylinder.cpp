/*
Project 5 - Cylinder.cpp
Matthew Menna
Section 10 (Tues 3:00)
A33948969
*/


#include "stdafx.h"
#include "Cylinder.h"

using namespace std;

// Cylinder constructor for defaults
// Good hint for what the member functions
// names should be

Cylinder::Cylinder(){ //defaults
	transX = 0.0;
	transY = 0.0;
	red = 0.0;
	green = 1.0;
	blue = 1.0;
	radius = 2.0;
	height = 3.0;
	angle = 0.0;
}
//definitions
//get functions 
double Cylinder::getAngle(void)
{return angle;}
double Cylinder::getTransX(void)
{return transX;}
double Cylinder::getTransY(void)
{return transY;}
double Cylinder::getRadius(void)
{return radius;}
double Cylinder::getHeight(void)
{return height;}
double Cylinder::getRed(void)
{return red;}
double Cylinder::getGreen(void)
{return green;}
double Cylinder::getBlue(void)
{return blue;}

//set functions
void Cylinder::setAngle(double tangle)
{angle = tangle;}
void Cylinder::setTransX(double tx)
{transX = tx;}
void Cylinder::setTransY(double ty)
{transY = ty;}
void Cylinder::setRadius(double tr)
{radius=tr;}
void Cylinder::setHeight(double th)
{height=th;}
void Cylinder::setRed(double tR)
{red=tR;}
void Cylinder::setGreen(double tG)
{green=tG;}
void Cylinder::setBlue(double tB)
{blue = tB;}