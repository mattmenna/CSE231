/*
Project 7 - message.cpp
Matthew Menna
Section 10 (Tues 3:00)
A33948969
*/

#include "message.h"


message::message()// default constructor sets the key to blank string
{key = "";}


message::message(string s)// sets the key to the string supplied as s
{key = s;}


message::~message(void)// default destructor
{;}


void message::rotate_key(int r)
{

	string last;
	string first;

	if(r>0)
		{
			last = key.substr(r, 27-r);
			first = key.substr(0, r);
			key = last + first;
		} //end if
	if(r<0)
		{		
			r*= -1;
			last = key.substr(27-r, r);
			first = key.substr(0, 27-r);
			key = last + first ;
		} //end if

}//end rotate_key


string message::encrypt(string s)
{
		int j;

	string sx;
		sx=s;

	for(int i=0; i<sx.length() ;i++)
	{
		sx.at(i)=toupper(sx.at(i));

		if(sx.at(i) == ' ')
			{
				j=26;
			}
		else if(sx.at(i) >= 'A' && sx.at(i) <= 'z')
			{
				j = sx.at(i)-'A';
			}

	sx.at(i) = key.at(j);
	}//end for
	
return sx;
}//end encrypt


string message::decrypt(string s)
{	
	int j;
	string index= "ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
	string sx;
		sx=s;

	for(int i=0; i<sx.length(); i++)
	{
		sx.at(i) = toupper(sx.at(i));

		sx.at(i) = key.find(sx.at(i),0);

		sx.at(i) = index.at(sx.at(i));
	}//end for
	
return sx;
} // end decrypt


void message::set_key(string s)
{key = s;}


bool message::check_key()
{

int bad=0;

	for(int i=0; i<key.length() ;i++)
	{
		if(key.at(i) >= 'a' && key.at(i) <= 'z')
			bad++;
		else if(key.at(i) >= '0' && key.at(i) <= '9')
			bad++;
	} // end for

if(bad!=0)
	return false;
else 
	return true;

}//end check_key


string message::get_key()
{return key;}