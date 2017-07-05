#include <iostream>
#include "mennamat.h"
#include "dummy.h"
#ifndef MOVE_
#define MOVE_
enum Move {Cooperate, Defect};
#endif
using namespace std;

main()
{
ostream & operator<<(ostream&, Move &m);

int rounds;
int player1Year =0;
int player2Year =0;

mennamatPlayer Player1;
dummyPlayer Player2;

Move move1=Cooperate;
Move move2=Cooperate;

	cout << "How many rounds?" << endl;
	cin >> rounds;
	cout<<endl;
	cout<<endl;

		while(rounds >0)
		{
			move1 = Player1.move(move2);
			move2 = Player2.move(move1);
			cout << "First (1) Prisoner Chooses to: " << move1;
			cout << "Second (2) Prisoner Chooses to: " << move2;

			if(move1==move2)
			{
				if(move1 == Cooperate)
				{
					player1Year+=1;
					player2Year+=1;
				}
				else if(move2 == Defect)
				{
					player1Year+=2;
					player2Year+=2;
				}
			}//end outer if
			else if(move1!=move2)
			{
				if(move1 == Cooperate)
					player1Year+=3;
				if(move2 == Cooperate)
					player2Year+=3;
			}//end outer if

			rounds--;
			cout<<endl;

		} // end of while loop

		cout<<"Player One got "<<player1Year<<" years in jail!"<<endl;
		cout<<"Player Two got "<<player2Year<<" years in jail!"<<endl;
}

ostream & operator<<(ostream &out, Move &m)
{
if(m==0)
cout<<"Cooperate"<<endl;
if(m==1)
cout<<"Defect"<<endl;

return out;
}