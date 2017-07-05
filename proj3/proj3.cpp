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

	int monthInput;
	int count;
	int days;
	int start;
	int x;
	int satYet;

	for(;;)
	{
		satYet = 0;
		cout<<"Please choose a month to display (1 to 5, 0 to quit): ";
		cin>>monthInput;
		cout<<"\n\n";

		if(cin.fail()) //if something other than numbers are inputed prompts
		{
			cin.clear();
			cin.ignore(100,'\n');
			cout<<"Incorrect input. Valid input is 0-5. \n\n";
			continue;
		}
		if(monthInput >=6) //restricts input to 0-5
		{
			cout<<"Incorrect input. Valid input is 0-5. \n\n";
			continue;
		}

//Quits program
		else if(monthInput == 0)
		{
			cout << "Quitting...\n";
			break;
		}

//Months 1-5
//Days are known and set to "days"
//"start" determines starting day based on remainder division
//"satYet" keeps track of new line placement

		else if(monthInput == 1)
		{
			cout << setw(35) << "January  2006\n";
			days = 31;
			start = 1;
			satYet = start;
		}

		else if(monthInput == 2)
		{
			cout << setw(35) << "February  2006\n";
			days = 28;
			start = 31%7 +1;
			satYet = start;
		}

		else if(monthInput == 3)
		{
			cout << setw(35) << "March  2006\n";
			days = 31;
			start = 59%7 +1;
			satYet = start;
		}

		else if(monthInput == 4)
		{
			cout << setw(35) << "April  2006\n";
			days = 30;
			start = 90%7 +1;
			satYet = start;
		}

		else if(monthInput == 5)
		{
			cout << setw(35) << "May  2006\n";
			days = 31;
			start = 120%7 +1;
			satYet = start;
		}

//Formatting for every month

		cout << setw(35) << "--------------------------------------------------------\n";
		cout << setw(7)<< "Sun" << setw(7) << "Mon" << setw(7) << "Tue" << setw(7) << "Wed" << setw(7) << "Thu" << setw(7) << "Fri" << setw(7) << "Sat" << setw(7)<< "\n";

//for loop to count and print days of the month
//increments day count stops when the number of days in the month is reached
//if statement to send next day to new line when its saturday

		for(count=1; count<=days; count++)
		{
			cout << setw(start * 7) << count;
		
			if(satYet%7 == 0)
				cout << "\n";

			start = 1;
			satYet++;
		}
//returns to top of forever loop

	cout << "\n\n"; //spaces
	}

}