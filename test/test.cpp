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
	int firstRow;
	int satYet = 0;

	for(;;)
	{
		cout<<"Please choose a month to display (1 to 5, 0 to quit): ";
		cin>>monthInput;
		cout<<"\n\n";

		if(cin.fail())
		{
			cin.clear();
			cin.ignore(100,'\n');
			cout<<"Incorrect input. Please try again. \n\n";
		}

		switch(monthInput)
		{
		case 0:
			cout << "Quitting...\n";
			break;

		case 1:
			cout << setw(35) << "January  2006\n";
			days = 31;
			start = 1;
			firstRow = 7;
			break;

		case 2:
			cout << setw(35) << "February  2006\n";
			days = 28;
			start = 31%7 +1;
			firstRow = 7 - start;
			break;

		case 3:
			cout << setw(35) << "March  2006\n";
			days = 31;
			start = 59%7 +1;
			firstRow = 7 - start;
			break;

		case 4:
			cout << setw(35) << "April  2006\n";
			days = 30;
			start = 90%7 +1;
			firstRow = 7 - start;
			break;

		case 5:
			cout << setw(35) << "May  2006\n";
			days = 31;
			start = 120%7 +1;
			firstRow = 7 - start;
			break;

		default:
			break;
		}

		cout << setw(35) << "--------------------------------------------------------\n";
		cout << setw(7)<< "Sun" << setw(7) << "Mon" << setw(7) << "Tue" << setw(7) << "Wed" << setw(7) << "Thu" << setw(7) << "Fri" << setw(7) << "Sat" << setw(7)<< "\n";

		satYet = 0;

		for(count=1; count<=days; count++)
		{
			cout << setw(start * 7) << count;
			satYet++;
			if(satYet == firstRow)
			{
				cout << "\n";
			}
			else if(satYet%7 == 0)
			{
				cout << "\n";
			}
			start = 1;
		}

	cout << "\n\n";
	}

}