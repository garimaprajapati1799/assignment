#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	up:
	srand(time(0));
	int randomNumber = rand() % 100 + 1;
	cout<<"\nWelcome to the number guessing game!\n";
	cout<<"\nYou have 5 attempt to guess a number!";
	cout<<"\nLet's Begin,All the best!\n";
	cout<<"\nGuess a number between 1 to 100\n";
	int attempt=5;
	char playAgain;
	while(attempt>0)
	{
		int guessedNumber;
		cout<<"\nGuess!!"<<endl;
		cin>>guessedNumber;
	    if(guessedNumber <1 || guessedNumber>100)
		{
			cout<<"\nPlease guess a number between 1 to 100";
		}
        if(guessedNumber>randomNumber)
		{
			cout<<"\nGuess is too high!";
		}
		else if(guessedNumber<randomNumber)
		{
			cout<<"\nGuess is too low!";
		}
	
		else if(guessedNumber==randomNumber)
		{
			cout<<"\nCongratulations!! You have guessed a correct number.";
			cout<<"\n Do you want to play again?\n Press Y to play and N to quit!";
			cin>>playAgain;
			if(playAgain=='Y' || playAgain=='y')
			{
				goto up;
			}
			return 0;
		}
		attempt--;
		cout<<"\n"<<attempt<<" number of attempts are left";
	}
	
	cout<<"\nBetter Luck next time :-)";
	cout<<"\n Do you want to play again?\n Press Y to play and N to quit!";
	cin>>playAgain;
	if(playAgain=='Y' || playAgain=='y')
	{
		goto up;
	}
	
	return 0;
	
}
