#include <iostream>
#include <string>
#include "gomoku.h"


using namespace std;

main()
{
	int dim;
	int row =0;
	int col =0;
	int player = 1;

	cout << "Enter the size of the square board: " << endl;
	cin >> dim;
	gomoku game(dim);

	player = 0;

		while(game.isWinner(row, col) == false)
		{
			cout<< "Enter -1 to quit \n Enter row and column (space separated) to place a stone \n A win is five in a row: vertical, horizontal, or diagonal " << endl;
			
			if(player==0)
			{
				cout << "blacks turn.....Enter row and column (space separated): " <<endl;
				cin >> row >> col;
			}

			else if(player==1)
			{
				cout << "whites turn.....Enter row and column (space separated): " <<endl;
				cin >> row >> col;
			}

			game.place(player, row, col);
			game.draw();

			if(player==1)
				player=0;
			else if(player ==0)
				player=1;

		} // end of while loop
}