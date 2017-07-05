#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

#ifndef MOVE_
#define MOVE_
enum Move {Cooperate, Defect};
#endif

class mennamatPlayer{
private:
	Move previousMove;
	int angry;
public:
	mennamatPlayer(void);
	Move move(Move opMove);
	void output( ostream& Out ) const;
};