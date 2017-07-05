/*
Project 7 - message.h
Matthew Menna
Section 10 (Tues 3:00)
A33948969

EXTRA CREDIT

I LOVE PROGRAMMING LANGUAGES THAT ALLOW ME TO SOLVE COMPLEX PROBLEMS

mess1.rotate_key(9);
*/

#include <iostream>
#include <string>

using namespace std;

class message{

private:
	string key;   //only private data member needed

public:

message(void);     // default constructor sets the key to blank string
message(string s); // sets the key to the string supplied as s
~message(void);    // default destructor
void rotate_key(int r);
string message::encrypt(string s);
string decrypt(string s);
void set_key(string s);
bool check_key();
string get_key();
};