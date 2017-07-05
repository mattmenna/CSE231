/*
Project 3 - proj03.cpp
Matthew Menna
Section 10 (Tues 3:00)
A33948969
*/

#include <iostream> // needed for cin and cout operations
#include <iomanip>

using namespace std; //selects a name space required to recognize cin and cout

main()
{

	const int sun=0;
	const int mon=1;
	const int tue=2;
	const int wed=3;
	const int thu=4;
	const int fri=5;
	const int sat=6;

	const int jan=1;
	const int feb=2;
	const int mar=3;
	const int apr=4;
	const int may=5;

	const int daysJan = 31;
	const int daysFeb = 28;
	const int daysMar = 31;
	const int daysApr = 30;
	const int daysMay = 31;

	int day;
	int numDays;
	int monthInput;

for(;;)
{

	cout << "Please choose a month to display (1 to 5, 0 to quit): ";
	cin >> monthInput;
	cout << "\n\n";

	if(cin.fail())
	{
		cin.clear();
		cin.ignore(100,'\n');
		cout<<"Incorrect input. Please try again. \n\n";
	}

	else if(monthInput == 0)
	{
		cout << "Quitting...";
		break;
	}

	else if(monthInput == 1)
	{
		cout << setw(35) << "January 2006\n";
		numDays = 7;
	}

	else if(monthInput == 2)
	{
		cout << setw(35) << "February 2006\n";
		numDays = daysJan +1;
	}

		cout << setw(35) << "--------------------------------------------------------\n";
		cout << setw(7)<< "Sun" << setw(7) << "Mon" << setw(7) << "Tue" << setw(7) << "Wed" << setw(7) << "Thu" << setw(7) << "Fri" << setw(7) << "Sat" << setw(7)<< "\n";

	for(day=1; day<=numDays; day++)
	{
			if(day ==1)
			{
				cout << setw( numDays%7 * 7) << day;
			}
			else if(day >1)
			{
				cout << setw(7) << day;
			}

	}

	cout << "\n";
}

}