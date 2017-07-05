/*
Project 10 - Song.h
Matthew Menna
Section 10 (Tues 3:00)
A33948969
*/
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;
#ifndef SONG_H 
#define SONG_H 

class Song
{

private: 

	vector <string> sg;

public:

	friend class Collection;
	Song(void);
	Song(string sp);
	Song(const Song& ss);
	friend ostream & operator<<(ostream&, Song &sp);
	Song &operator=(Song sp);
	bool operator==(Song sg);
	vector <string> sparse(string sm, string sp);

};
#endif 