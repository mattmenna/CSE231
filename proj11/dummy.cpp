#include <iostream>
#include "dummy.h"
using namespace std;

#ifndef MOVE_
#define MOVE_
enum Move {Cooperate, Defect};
#endif

dummyPlayer::dummyPlayer(void) 
{angry=0;}

Move dummyPlayer::move(Move opMove)
{
	Move thisMove;
	previousMove = opMove;
	thisMove = Defect;
	return thisMove;
}

