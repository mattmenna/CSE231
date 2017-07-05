/*
Project 9 - Dictionary.h
Matthew Menna
Section 10 (Tues 3:00)
A33948969
*/


#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

class Dictionary{

private:

	vector <string> sx;

public:

	Dictionary();
	Dictionary(const Dictionary &d);
	void read(string Dictionary);
	bool retrieve(string word);
	friend ostream & operator<<(ostream&, Dictionary &d);
	Dictionary operator=(Dictionary& d);
	Dictionary operator+(string word);
	Dictionary  operator+(const Dictionary& d);
	Dictionary operator-(string word);
	Dictionary operator-(const Dictionary& d);
	bool operator==(Dictionary& d);





};