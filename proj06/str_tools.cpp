/*
Project 6 - proj06.cpp
Matthew Menna
Section 10 (Tues 3:00)
A33948969
*/

#include "str_tools.h"
;
// constructor that will set the private variable to a ""
str_tools::str_tools()
{
myString = " ";
}





// do the simple set and get accessor methods
string str_tools::get(void)
{return myString;}




void str_tools::set(string sx)
{myString = sx;}





// countWords
// use isalnum to classify each character of the private variable
// return a count of how many words are in the private variable
// all characters that are not isalnum are delimiters and should not be counted

int str_tools::countWords()
{

	//initializing variables
int k=0;
int l;
int i;
	for ( i=0;i<myString.length();i++ )
	{
		if (isalnum (myString.at(i))) 
		{
			l=1;
			continue;
		}//end if
		else
		{	k = k+1;
			l=0;
			continue;
		}//end else
	}//end for
		if(l==1)
		{k = k+1;}

		else if(l ==0)
		{k =k-1;}
	return k;
}//end count






// rand_swap  
// make a copy of the private variable then 
// given an integer count perform that many swaps between two  
// random chosen characters that are in the copy of the string

string str_tools::rand_swap(int count)
{
	//initializing variables
	int i1 = 0;
	int ic = 0;
	int i;
	string swapString;
	swapString = myString;
	for(;count>0;count--)
	{
	i = myString.length()-1;
	ic = rand()%i;
	i1 = rand()%i; 
	swap(swapString.at(i1),swapString.at(ic)); 
	}//end for

	return swapString;
}//end swap






// insert
// given a starting location in the private variable represented by a integer
// insert the string passed at that location
// use .begin() and .end to get the proper iterators for the private variable and 
// the string to insert

string str_tools::insert(int loc, string sx)
{
	myString.insert(loc,sx);
	return myString;
}//end insert

// given a string see if it is present in the private variable
// return the location as an integer where it is found
// if not found return string::npos
int str_tools::find(string sx){ 

int find=myString.find(sx,0);

  return find; 
} //end find





// return a copy of the private variable that has the characters reversed
// use two integers one that is the first character index and a second one
// that is the last character index
// while the first index is less than the second index swap the characters
// then increment the first index and decrement the second index

string str_tools::reverse(){
	//initializing variables
int end;
int i=0;
int j;
string reverse;
string sx;

end = myString.length()-1;
j= end;
while(j>=0)
{
sx = myString.at(j);
reverse.insert(i, sx);
i++;
j--;
}//end while loop

return reverse;
}//reverse





// rand_scram
// make a copy of the original private variable 
// do not change the first character of a word
// do not change the last character of a word
// do not change any delimiters (spaces, etc)
// for all other letters replace them with a randomly selected
// letter from the range a-z
string str_tools::rand_scram(){
/*

Attempted to complete this



string finalString;   <<<<<<<<coy of class variable
string alsoString;<<<<<<<<coy of class variable
int q=0;
for(q;q<finalString.length();q++)     <<<<<<   step through the string one element at time
{


if (q != finalString.length()) 
{ 
swap(finalString.at(q),alsoString.at(q)); 
swap(finalString.at(q-1),alsoString.at(q-1)); 
swap(finalString.at(q+1),alsoString.at(q+1)); 
q = q+1; 
} //end if
else
{
char ichar4swap = (rand()%26+97); 
swap(finalString.at(q),ichar4swap); 
}//end else
}*/

return myString;
} //end swap





// diff
// given a string count the number of differences between the 
// given string and the private variable
// only check the number of characters in the smaller of the two
// string variables
// return the count of differences  Dogs diff Bogs is 1

int str_tools::diff(string sx){

int i = 0;
int count = 0;

while( i<myString.length() && i<sx.length())
{
	if(myString.at(i) != sx.at(i))
	{
		count++;
	}
	i++;
}//end while
	return count;
}// end diff
