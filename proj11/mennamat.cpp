#include <iostream>
#include "mennamat.h"
using namespace std;

#ifndef MOVE_
#define MOVE_
enum Move {Cooperate, Defect};
#endif

mennamatPlayer::mennamatPlayer(void) 
{angry=0;}

Move mennamatPlayer::move(Move opMove)
{
	previousMove = opMove;
	Move thisMove;

	if(previousMove == Defect)
	{
		thisMove = Defect;
		angry++;
	}
	else if(previousMove == Cooperate)
	{
		thisMove = Defect;
		angry+=3;
	}
	if(angry%2 ==0)
		thisMove = Cooperate;

	return thisMove;
}