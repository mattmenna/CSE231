/*
Project 9 - Dictionary.cpp
Matthew Menna
Section 10 (Tues 3:00)
A33948969
*/


#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include "Dictionary.h"
using namespace std;

Dictionary::Dictionary()
{
		vector <string> tmp(0,"");
		sx=tmp;
}

Dictionary::Dictionary(const Dictionary& d) 
{ 
	for (int i=0; i<(d.sx).size(); i++) 
		sx.push_back((d.sx).at(i)); 
} 

ostream &operator<<(ostream &os, Dictionary &d)
{
	int end=0;
	for(int i=0;i<(d.sx).size();i++)
	{
			cout<<setw(10)<<(d.sx).at(i)<<" ";
			end++;
			if(end%5==0)
				cout<< endl;
	}
  return os;
}

void Dictionary::read(string Dictionary)
{
	ifstream fin; // file stream for input 
	string stemp; // temp to hold each word
	fin.open(Dictionary.c_str());
	if(fin==NULL) // check to make sure file was found
	{
		cout<< "open failed "<<endl;
		return;
	}
	while(!fin.eof()) // keep reading until end of file
	{
		fin>>stemp; // get word
		cout<<stemp<<endl; // send word to the screen
		sx.push_back(stemp);
	}
	fin.close();// clean up
	cout<<endl; 
}// end of dump file contents

bool Dictionary::retrieve(string word)
{

	for (int i=0; i<sx.size(); i++) 
	{
		if(sx.at(i) == word) 
			return 1;
	}

return 0;
}

Dictionary Dictionary::operator=(Dictionary& d)
{
	(*this).sx = d.sx;
	return (*this);
}

bool Dictionary::operator==(Dictionary& d)
{
	for (int i=0; i<sx.size(); i++) 
	{
	if(((*this).sx).at(i) != (d.sx).at(i))
		return 0;
	}

	return 1;
}

Dictionary Dictionary::operator+(string word)
{		
	bool b=false;

	for (int i=0; i<sx.size(); i++) 
	{
		if(sx.at(i) == word) 
			b=true;

		if(b==false)
		{
			sx.push_back(word);
			break;
		}
	}
	return (*this);
}

Dictionary Dictionary::operator-(string word)
	{
	Dictionary temp;
	Dictionary temp2;
	for(int i=0; i<sx.size(); i++)
		{
		if (sx.at(i) != word)
			(temp.sx).push_back(sx.at(i));
		}
	for(int i=0; i < (temp.sx).size(); i++)
		{
		(temp2.sx).push_back((temp.sx).at(i));
		}
	return temp2;
	}

Dictionary Dictionary::operator+(const Dictionary& d)
{
	Dictionary tmp;
	Dictionary temp;

	for(int i=0; i<(d.sx).size(); i++)
		{
			(temp.sx).push_back((d.sx).at(i));
		}

	for (int i=0; i < (temp.sx).size()-1; i++)
		{
			if((temp.sx).at(i) != (temp.sx).at(i+1))
				(tmp.sx).push_back((temp.sx).at(i));

		}
		(tmp.sx).push_back((temp.sx).at(i));

		sort(  (tmp.sx).begin(), (tmp.sx).end() );
	return tmp;
	}

Dictionary Dictionary::operator-(const Dictionary& d)
{
	Dictionary tmp;
	int n=0;
	for(int i=0; i<sx.size(); i++)
	{
		for(int j=0; j<(d.sx).size(); j++)
		{
			if(sx.at(i) == (d.sx).at(j))
				n = 1;

		}
		if (n == 0)
			(tmp.sx).push_back(sx.at(i));

		n = 0;
	}

	return tmp;
}
