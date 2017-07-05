/*
Project 9 - proj09.cpp
Matthew Menna
Section 10 (Tues 3:00)
A33948969
*/


#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "dictionary.h"
using namespace std;

void dumpfile();

int main()
{
	dumpfile();

	Dictionary dic1;
	dic1.read("dictionary.txt");
	cout << "Dictionary 1 is:\n" << dic1 << endl << endl;

	Dictionary dic2(dic1);
	cout <<"Dictionary 2 is:\n"<< dic2 << endl << endl;

	if(dic1==dic2) cout << "The dictionary 1 is the same with dictionary 2" << endl << endl;

	dic2 = dic2 + "zipper";
	dic2 = dic2 + "help";
	cout<< "Dictionary 2 + " << "zipper =:"<< endl << dic2 << endl << endl;

	Dictionary dic3;
	dic3 = dic1 + dic2;
	cout << "Dictionary 3 is \n" << dic3 << endl << endl;
	cout << "Dictionary 1 is \n" << dic1 << endl << endl;
	cout << "Dictionary 2 is \n" << dic2 << endl << endl;


	cout << "Dictionary 1 + Dictionary 2 = \n"<< dic3 << endl << endl;
	cout << "Dictionary 1 - Jack = \n"<< (dic3-"Jack") << endl << endl;

    
//	dic3.add("zebra");
	dic3=dic3+"zebra";
	cout<<"Dictionary 3 + zebra \n"<<dic3<<endl<<endl;

	cout<<"Dictionary 3 - Dictionary 2 \n"<<(dic3-dic2)<<endl<<endl;

	if(dic3.retrieve("zebra")) cout << "zebra is added to dictionary 3" << endl << endl;

	if(dic1==dic2) cout << "The dictionary 1 is the same with dictionary 2" << endl << endl;
	else
		cout <<  "The dictionary 1 is not the same with dictionary 2" << endl << endl;

	if(dic1==dic3) cout << "The dictionary 1 is the same with dictionary 3" << endl << endl;
	else
		cout <<  "The dictionary 1 is not the same with dictionary 3" << endl << endl;

	system("pause");
	return 0;
}

// sample file open and read single strings from file
//
void dumpfile()
{
	ifstream fin; // file stream for input 
	string stemp; // temp to hold each word
	fin.open("dictionary.txt");
	if(fin==NULL) // check to make sure file was found
	{
		cout<< "open failed "<<endl;
		return;
	}
	while(!fin.eof()) // keep reading until end of file
	{
		fin>>stemp; // get word
		cout<<stemp<<endl; // send word to the screen
	}
	fin.close();// clean up
	cout<<endl; 
}// end of dump file contents