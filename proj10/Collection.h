/*
Project 10 - Collection.h
Matthew Menna
Section 10 (Tues 3:00)
A33948969
*/
#include "Song.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>

using namespace std;


class Collection{

private:

	vector <Song> collection;

public:

	Collection();
	friend ostream & operator<<(ostream & out, Collection myc);
	void operator+(Song sg);
	void operator-(Song sg);
	Song get(int j);
	bool readf(string sfin);
	int find(Song sg);
	void clear();

};