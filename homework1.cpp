// AUTHOR 1 Ian Hogan hoganic@bu.edu
// AUTHOR 2 Hari chhari@bu.edu

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void hogan_game()
{
	//Simple Higher Lower Game
	int player_num;		//input number from the player
	int comp_guess;		//computer's guess for the player's number
	int counter = 1;
	int acceptable;		//is the player's entry acceptable
	clock_t start_clock, end_clock;
	
	//Decide what number to use
	do
	{
		cout << "Pick a number in between 1 and 1,000,000" << endl;
		cin >> player_num;
		if(player_num > 1000000 || player_num < 1){
			cout << "Invalid number, Please resubmit" << endl;
			acceptable = 0;
		}
		else{
			acceptable = 1;	
		}
	}
	while(acceptable == 0);	

	//Let's play a game 
	start_clock = clock();	//time starts now

	comp_guess = rand() % 1000000 + 1;	//pick a random number range 1 to 1000000
	while(comp_guess != player_num){
		comp_guess = rand() % 1000000 + 1;
		counter++;
	}
	
	end_clock = clock();	//time ends here
	double milliSeconds = (double)(end_clock-start_clock)/((CLOCKS_PER_SEC) / 1000);
	cout << "Your Number: " << player_num << endl;
	cout << "Computer Guess: " << comp_guess << endl;
	cout << "Number of Guesses: " << counter << endl;
	cout << "Time Elapsed (mS): " << milliSeconds << endl;
}


void hari_game()
{
	int x;
	cout << "think a number between 1 and 20" << endl;
	cout <<"add your number with 1" << endl;
	cout << "multiply your number with 2" << endl;
	cout << "add 4 " << endl;
	cout << "divide with 2 " << endl;
	cout << "subtract with 4 " << endl;
	cout << "the result is 3 " << endl;
}

int main()
{

	while(1==1){
		int game = 0;
		//ask user what game to play
		cout << "Do you want to play game 1 or 2? " << endl;
		cin >> game;
	
		if(game == 1){
			//run game 1 (Ian's)
			hogan_game();
		}
		else if(game == 2){
			//run game 2 (Hari's)
			hari_game();
		}
		else
		cout << "Invalid response" << endl;
	}
}
 
