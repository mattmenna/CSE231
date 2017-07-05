/*
Project 2 - proj02.cpp
Matthew Menna
Section 10 (Tues 3:00)
A33948969
*/

#include <iostream> // needed for cin and cout operations
#include <ctime>  // needed to create a random seed 

using namespace std; //selects a name space required to recognize cin and cout

main()
{

double numGuess; //initializing user's guess
double tryCount = 0; //initializing number of guesses at 0


srand(time(NULL)); // seed a random number based on time
int inum2guess=(rand() %100)+1; // gets the number to guess 1 to 100

//Beginning of instructions
cout << "Welcome to the game high-low. \n";
cout << "The computer has choosen a number between 1 and 100 (inclusive). \n";
cout << "You are to try and guess the chosen number.\n";
cout << "The computer will tell you if your guess is low or high. \n";
cout << "If you guess the chosen number, the computer will congratulate you, \n";
cout << "and tell you how many guesses it took. \n";
cout << "If you wish to quit early, enter -1. \n \n";
//End of instructions

/************************************************

This game can be beaten quickly if the user quesses a logical number. 
For example with a range of numbers from 1-100 (inclusive) a good starting point is a guess of 50 approximately halving the possible numbers
that the correct answer could be.  Lets say it responded with too high the remaning possiblities are from 1-49 since if 50 was the correct answer
it would of resonded "Great Job".  Another guess to halve the remaing possibilities would be 24.  The guessing can continue to half possibilities until 
the answer is reached.  Ideally the number of guesses could be as low as 6 with a little luck, but not usually more than 8. 

*************************************************/

//beginning loop forever until "break" is reached

for(;;)
	{
		cout << "Enter your guess (enter -1 to quit): "; // prompt for user to guess then recieve the guess
		cin >> numGuess;

        if( numGuess == -1 ) // check to see if guess < 1 and if so, quit;
          {
			  cout << "What a loser you are giving up after only " << tryCount << " tries! \n \n"; // output a message
				  break; //Ends program if -1 is entered
          }

		  tryCount += 1; // increase trycount by 1

	  if( numGuess == inum2guess )
	  { 
		  cout << "\nGreat job! You guessed " << inum2guess << " after " << tryCount << " tries. ";
		  break; //Ends program if correctly guessed
	  }
	  
	  if( numGuess <= inum2guess )
	  {
		  cout << "Your guess is too low \n";
	  }

	  if( numGuess >= inum2guess )
	  {
		  cout << "Your guess is too high \n";
	  }

	} // End of forerver loop
} // End of main()