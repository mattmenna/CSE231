#include <iostream>
#include "gomoku.h"
using namespace std;


gomoku::gomoku()
{ }


gomoku::gomoku(int dim)
{
	vector <int> tmp(dim,0);

	for(int i=0; i<dim; i++)
	{
		board.push_back(tmp);
	}

}

bool gomoku::isWinner(int row, int col)
{return false;}

bool gomoku::place(int player, int row, int col)
{

	if(player ==1)
		board[row][col]=1;
	else if(player ==0)
		board[row][col]=2;
	
	return false;
}

void gomoku::draw(void)
{

cout << "Rows/Cols" << endl;
cout << endl;

	for(int i=0; i<board.size(); i++)
	{
		if(i==0)
		{
			cout<<setw(5)<< " ";
			cout<<setw(5)<< i;
		}

		else
			cout<<setw(5)<< i;
	}

cout<< endl;

	for(int i=0; i<board.size(); i++)
	{
		cout << setw(5) << i;
		for(int j=0; j<board.size(); j++)
		{
				cout << setw(5) << board[i][j];

		}
		cout << endl;

	}
}