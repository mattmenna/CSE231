#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class gomoku{

private:

	vector <vector <int> > board;

public:

	gomoku(void);
	gomoku(int dim);
	bool isWinner(int row, int col);
	bool place(int player, int row, int col);
	void draw(void);

};