// AUTHOR 1 Ian Hogan hoganic@bu.edu

#include <iostream>
#include <ctime>

using namespace std;

//game main file
void hari_game()
{
	int x;
	cout << "think a number between 1 and 20" << endl;
	cout <<"add your number with 1" << endl;
	cout << "multiply your number with 2" << endl;
	cout << "add 4 " << endl;
	cout << "divide with 2 " << endl;
	cout << "subtract with 4 " << endl;
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
		}
		else if(game == 2){
			//run game 2 (Hari's)
			hari_game();
		}
		else
		cout << "Invalid response" << endl;
	}
}
 
