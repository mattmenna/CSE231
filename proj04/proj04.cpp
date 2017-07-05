/*
Project 3 - proj04.cpp
Matthew Menna
Section 10 (Tues 3:00)
A33948969
*/
#include <iostream> // needed for cin and cout operations
using namespace std; //selects a name space required to recognize cin and cout

int main()
{
	int lower;
	int upper;
	int count;
	int a;
	int b;
	int c;
	int d;
	int tries;
	char again = 'n';
	int firstTime;
	int bad;

for(;;)
{
	cout << "Please enter two numbers (space separated)," << "\n" << "the start number and end number of the range: ";
	cin >> lower >> upper;

		if(cin.fail()) //if something other than numbers are inputed prompts
		{
			cin.clear();
			cin.ignore(100,'\n');
			cout<<"Incorrect input. Valid input is integers greater than 0!. \n\n";
			continue;
		}//end of cinfail

		else if(lower <1)
		{
			cout<<"Incorrect input. Valid input is integers greater than 0!. \n\n";
			continue;
		}

		else if(upper <1)
		{
			cout<<"Incorrect input. Valid input is integers greater than 0!. \n\n";
			continue;
		}

		else if(lower>upper)
		{
			cout<<"Bad range!\n\n";
			continue;
		}

for (lower; lower <= upper; lower++) 
{
	tries =0;
	cout << "\n\n";

			for(a=0; a<=upper; a++)
			{
				for(b=0; b<=a; b++)
				{
					for(c=0; c<=b; c++)
					{
						for(d=0; d<=c; d++)
						{
							if(a*a + b*b + c*c + d*d == lower)
							{
								tries ++;
								cout << a << "*" << a << " + ";
								cout << b << "*" << b << " + " << " ";
								cout << c << "*" << c << " + " << " ";
								cout << d << "*" << d << " ";
								cout << "\n";

							}//output line
						}//final nested loop
					}//third nested loop
				}//second nested for loop
			}//first nested for loop

			cout << "-----------------------------------\n";
			cout << "For " << lower<< " there are " << tries << " solutions!\n";
}//outermost loop 

		cout << "\n" << "Would you like to do another range? (y/n): \n";
		cin >> again;

		if(cin.fail()) //if something other than numbers are inputed prompts
		{
			cin.clear();
			cin.ignore(1000,'\n');
			cout << "Incorrect input. Quitting... \n\n";
		}//end of if
		else if(again =='y')
			continue;
		else if(again =='Y')
			continue;
		else if(again=='n')
			break;
		else if(again=='N')
			break;
		else if(again>=0)
			break;
		else if(again<0)
			break;
	}//forever loop
}//end of main