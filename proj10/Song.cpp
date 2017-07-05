/*
Project 10 - Song.cpp
Matthew Menna
Section 10 (Tues 3:00)
A33948969
*/


#include "Song.h"

Song::Song(void)
{}

Song::Song(string ss)
{
sg=sparse(ss,"\x09\x0A\x0C\x0D"); 
}

Song::Song(const Song& sp) 
{ 
	for (unsigned int i=0; i<(sp.sg).size(); i++) 
		sg.push_back((sp.sg).at(i)); 
} 

ostream & operator<<(ostream &os, Song& sp)
{
	int end=0;
	for(unsigned int i=0;i<(sp.sg).size();i++)
	{
			os<<"\""<<(sp.sg).at(i)<<"\""<<",";
	}
  return os;
}

Song &Song::operator =(Song sp)
{
	sg = sp.sg;
	return (*this);
}

bool Song::operator==(Song sp)
{

return (sp.sg[0]==sg[0]);

}

vector <string> Song::sparse(string sm, string sp)
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