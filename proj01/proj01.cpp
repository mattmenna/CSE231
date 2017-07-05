/*
Project 1 - proj01.cpp
Matthew Menna
Section 10 (Tues 3:00)
A33948969
*/

#include <iostream>
using namespace std;

int main()
{

const double secondsInMinutes = 60;
const double minutesInHours = 60;
const double hoursInDays = 24;
	
double seconds;
double numMinutes;
double numHours;
double numDays;


cout << "Enter how many seconds to convert? ";
cin >> seconds;

numMinutes = seconds / secondsInMinutes;
numHours = numMinutes / minutesInHours;
numDays = numHours / hoursInDays;

cout << seconds;

cout.setf(ios::fixed);  //"Magic formula
cout.setf(ios::showpoint);
cout.precision(3); // Determines precision of output

cout << " seconds converts to " << numMinutes << " minutes or " << numHours << " hours or " << numDays << " days \n";

return 0;
}