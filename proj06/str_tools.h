// str_tools.h
// define a class called str_tools
// this class should have a single private string variable
// this class should have all the methods specified as public
// Make sure to use the correct class name str_tools
/*
Project 6 - proj06.cpp
Matthew Menna
Section 10 (Tues 3:00)
A33948969
*/
#include <iostream>
#include <string>

using namespace std;

class str_tools{

private:
//only private data member needed
	string myString;

public:

str_tools(); // default constructor

string rand_swap(int count); // return a copy of the class variable with count number of swaps from randomly chosen character locations among the string

string reverse(); // return a copy of the class variable with characters in reverse order

string rand_scram(); // return a copy of the class variable in which all characters not the first or last of a word are replaced with a randomly picked character a-z.  Do not change spaces and punctuation.  

int diff(string sx); // count the number of differences in characters between the class variable and the string passed up to the shorter of the two strings involved
	
int find(string sx);  // find the location of string sx in the class variable.  Return the location or if not found -1

string insert(int loc, string sx); // insert the string sx into the class variable at location specified by the int loc. 
	
string get();  // return the class variable
	
void set(string sx); // set the class variable
	
int countWords(); // count how many word in the class variable

};