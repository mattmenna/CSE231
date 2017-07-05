#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

#ifndef MOVE_
#define MOVE_
enum Move {Cooperate, Defect};
#endif

class dummyPlayer{
private:
	Move previousMove;
	int angry;
public:
	dummyPlayer(void);
	Move move(Move opMove);
	void output( ostream& Out ) const;
};