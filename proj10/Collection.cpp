/*
Project 10 - Collection.cpp
Matthew Menna
Section 10 (Tues 3:00)
A33948969
*/

#include "Collection.h"

Collection::Collection() 
{} 

ostream & operator<<(ostream & out, Collection myc)
{
	int end=0;
	for(unsigned int i=0;i<(myc.collection).size();i++)
	{
			out<<"\""<<(myc.collection).at(i)<<"\""<<",";
	}
  return out;
}

void Collection::operator +(Song ss)
{		
	if(find(ss)!= (-1))
	{	
		collection.push_back(ss);
	}
	else
		cout<<"Not Added!"<<endl;
}

void Collection::operator -(Song ss)
{		
	Song temp( "" );
	if(find(ss)!=-1)
	{	
		int i=find(ss);
		collection.at(i) = temp;
	}
	else
		cout<<"Not Removed!"<<endl;
}

Song Collection::get(int j) 
{ 

Song temp( "" ); 

	if(j==(-1))
		cout<<"Not Found"<<endl;
	else
		temp = collection.at(j);

return temp; 
} 

bool Collection::readf(string sfin)
{
	ifstream fin; // file stream for input 
	string stemp; // temp to hold each word
	fin.open(sfin.c_str());
	if(fin==NULL) // check to make sure file was found
	{
		cout<< "open failed "<<endl;
		return 0;
	}
	while(!fin.eof()) // keep reading until end of file
	{
		getline(fin, stemp);
		collection.push_back(Song(stemp)); 
	}

	fin.close();// clean up
	cout<<endl; 
	return 1;
}

int Collection::find(Song ss)
{
	int j=0;

	for(unsigned int i=0; i<collection.size(); i++) 
	{
		if(collection.at(i) == ss)
		{
			j=1;
			break;
		}
	}

	if(j==1)
		return i;
	else 
		return (-1);
}

void Collection::clear()
{
collection.clear();
}