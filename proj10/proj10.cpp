/*
	ITunes project 10 working with files and classes
	CSE231 Spring 2006
	This file has all the lines of code commented out to 
	Allow for simple compilation. After creating the class Song
	and the class Collection enable the commented lines one at a time
	until the project is completed.
	You must add the class for song and the class for collection


Project 10 - proj10.cpp
Matthew Menna
Section 10 (Tues 3:00)
A33948969
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>
#include "Collection.h"
#include "Song.h"
using namespace std;


using namespace std;
vector <string> parse(string sm, string sp);
void menu();

int main()
{
	int i;
	ofstream fout;
	string stmp;
	string sfin="";
	string sfout="";
	string mystit="";
	Song spaste;
	Collection myc;

	char cx=' ';
	while(cx!='q')
	{
		menu();
		cin>>cx;
		cout<<endl;
		switch(cx)
		{
			case 'r':
				cout<<"enter name of source file ";
				cin.ignore(1);
				getline(cin,sfin);
				cout<<endl;
				myc.readf(sfin);
				break;

			case 'w':
				cout<<"enter name of output file ";
				cin.ignore(1);
				getline(cin,sfout);
				cout<<endl;
				fout.open(sfout.c_str());
				if(fout==NULL)
				{
					cout<<"problem with file "<<sfout<<endl;
					break;
				}
				fout<<myc;
				fout.close();
				break;

			case 'd':
				cout<<"enter song name ";
				cin.ignore(1);
				getline(cin, mystit);
				Song(mystit+"\x09"); //produces a song with only 1 field
				myc-Song(mystit+"\x09"); 
				break;

			case 'c':
				myc.clear();
				break;

			case 'p':
				myc+spaste;
				break;

			case 'g':
				cout<<"enter song name ";
				cin.ignore(1);
				getline(cin,mystit);
				cout<<endl;
				Song(mystit+"\x09");// produces a song with only 1 field
				i=myc.find(mystit+"\x09"); //get the number of the song
				spaste=myc.get(i);
				cout<<myc.get(i);
				break;

			case 'q':
				break;

		}// end switch

	} // end while

	system("pause");

}


void menu()
{
	cout<<"r- read a ITunes song collection file in \n";
	cout<<"w- write a ITunes song collection file as a CSV file \n";
	cout<<"g- get a song from the collection \n";
	cout<<"p- paste a song to the collection \n";
	cout<<"c- clear a song collection \n";
	cout<<"d- delete a song from the collection \n";
	cout<<"q- quit program \n";
	cout<<"enter command ";
}

// routine will accept a string consisting of many words or fields
// The string is passed as sm
// routine will accept a string that contain parse characters
// parse characters are thrown away but trigger the saving of a field
// if the temporary field stemp has characters 
// or the field termination character of tab \x09 then the field is saved
// Any invalid characters are thrown away.  In this case any character with a code
// less than 1
vector <string> parse(string sm, string sp)
{
	vector <string> srpar; // hold all the fields parsed from the string
	string stemp=""; // holds the individual field
	int i; // general loop variable
	int ip1=0; //location of parse character

	for(i=0;i<sm.length();i++) // for all the character in sm see if they are a parse code
	{
		//cout<<i<<" "<<(int)sm[i]<<" "<<sm[i]<<" ";
		if(sm[i]<1) continue;// skip over invalid characters
		ip1=sp.find(sm[i],0); // see if current character is a parse character
		if(ip1==string::npos)
			stemp=stemp+sm[i];  // not a parse code add to string
		else // was a parse code add entry or throw away
		{
			if(stemp.length()>0||sm[i]=='\x09') // the parsed string has characters or is tab 
			{srpar.push_back(stemp);stemp="";} 
		}
	}// end of for every character
	if(stemp.length()>0 || sm[i]=='\x09') srpar.push_back(stemp); //Check for one left at end
	return srpar; // return the string parsed into fields as the array srpar
}

