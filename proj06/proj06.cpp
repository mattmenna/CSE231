// Project 06 using strings and switch statements
// CSE231 Spring 06
//
/*
Project 6 - proj06.cpp
Matthew Menna
Section 10 (Tues 3:00)
A33948969
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <ctime>
#include "str_tools.h"


using namespace std;
void menu();


int main()
{
	srand( (unsigned)time( NULL ) );
	string sx=" ";
	char cx=' ';
	int iselect=1;
	int count;
	str_tools str_A;
	str_tools str_B;


	while(sx!="")
	{
		menu(); // display the menu
		getline(cin,sx); // get the command
		if(sx.length()==1) // if it is a single character then process
		{
			cx=toupper(sx[0]); // make upper case 
			switch(cx) // sort through the command characters
			{
			case 'A': // set str_A as active
				iselect=1;
				cout<<"now A is selected"<<endl;
				break;

			case 'B': // set str_B as active
				iselect=0;
				cout<<"now B is selected"<<endl;
				break;

			case 'S': // get a line of text and set the correct string variable
					cout<<"enter the line of text to work on ";
					getline(cin,sx);
					cout<<endl;
				if(iselect)
					str_A.set(sx);
				else 
					str_B.set(sx);
				break;

			case 'D': // get a line of text and set the correct string variable
					cout<<"enter the line of text to compare ";
					getline(cin,sx);
					cout<<endl;
				if(iselect)
					cout<<" there are "<<str_A.diff(sx)<<" differences between the strings"<<endl;
				else 
					cout<<" there are "<<str_B.diff(sx)<<" differences between the strings"<<endl;
				break;


			case 'G': // display the selected string variable
				if(iselect)
					cout<<"A "<<str_A.get()<<endl;
				else 
					cout<<"B "<<str_B.get()<<endl;
				break;


			case 'I':// insert some text starting at a location
				cout<<"enter the location ";
				getline(cin,sx);
				cout<<endl;
				count=atoi(sx.c_str());

				cout<<"enter the string to insert ";
				getline(cin,sx);
				cout<<endl;
				if(iselect)
					cout<<"inserted in A at  "<<str_A.insert(count,sx)<<endl;
				else
					cout<<"inserted in B at   "<<str_B.insert(count,sx)<<endl;
				break;

			case 'F': // given some text see if it is found in the string
				cout<<"enter the string to find ";
				getline(cin,sx);
				cout<<endl;
				if(iselect)
					cout<<"found in A at  "<<str_A.find(sx)<<endl;
				else
					cout<<"found in B at   "<<str_B.find(sx)<<endl;
				break;


			case 'X': // randomly do x number of random swaps in the line of text
				cout<<"enter number of character swaps to do ";
				getline(cin,sx);
				cout<<endl;
				count=atoi(sx.c_str());
				if(iselect)
					cout<<"Randson swap of A "<<str_A.rand_swap(count)<<endl;
				else
					cout<<"Randson swap of B "<<str_B.rand_swap(count)<<endl;
				break;

			case 'M': // randomly mix up letters in word but not first or last or spaces
				if(iselect)
					cout<<"Randson swap of A "<<str_A.rand_scram()<<endl;
				else
					cout<<"Randson swap of B "<<str_B.rand_scram()<<endl;
				break;		

			case 'C': //count words   MODIFIED BY ME
					if(iselect)
					cout<<"Words in A "<<str_A.countWords()<<endl;
				else
					cout<<"Words in B "<<str_B.countWords()<<endl;
				break;

			case 'R': //reverse string   MODIFIED BY ME
				
				if(iselect)
					cout<<"Reverse String A  "<<str_A.reverse()<<endl;
				else
					cout<<"Reverse String B  "<<str_B.reverse()<<endl;
				break;

			case 'Q': // all done lets quit
				return 0;
				break;


			
			}//end of switch
		} //check for valid command
	}// keep repeating until a blank line is entered
	system("pause ");
}//end main



void menu()
{
	cout<<"\n\n\n";
	cout<<"A or B select string A or B "<<endl;
	cout<<"S to set the string "<<endl;
	cout<<"G to get the string "<<endl;
	cout<<"D to count the differences "<<endl;
	cout<<"C to count the words "<<endl;
	cout<<"F to find a string location "<<endl;
	cout<<"R to reverse the string "<<endl;
	cout<<"I to insert a string "<<endl;
	cout<<"X to random swap characters in the string "<<endl;
	cout<<"M to mix up characters in the string "<<endl;
	cout<<"Q to quit "<<endl;
	cout<<endl;

}
