#include<iostream>
#include<string>
#include<sstream>

using namespace std;

struct Player							//Exercise 1a
{
	string name;
	int health;
	int score;
	int pos;
	int vel;
};

struct Rect								//Exercise 1b
{
	int x[4];
	int y[4];
	int color[3];
};

void makeChara()						//Exercise 2
{
	Player player;

	cout << "Input a name for Player 1: ";
	cin >> player.name;
	cout << "Now, enter their score: ";
	cin >> player.score;
	system("cls");
	cout << player.name << "'s score is " << player.score << endl;
	system("pause");

}

Player makePlayer(int name, int score)	//Exercise 3
{
	Player player;

	player.name = name;
	player.score = score;

	return player;
}

void fivePlayers()						//Exercise 4
{
	Player player[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter name for Player " << i + 1 << ": ";
		cin >> player[i].name;
		cout << "Enter score for Player " << i + 1 << ": ";
		cin >> player[i].score;
	}

	system("cls");

/*	for (int i = 0; i < 5; i++)
		cout << player[i].name << "'s score is " << player[i].score << endl;

	system("pause"); */  
	
	//Commented for transition into Exercise 5 below

	string name;
	bool found;

	cout << "Enter a player's name and I'll give you their score." << endl;
	cout << "Name: ";
	cin >> name;

	for (int i = 0; i < 5; i++)
	{
		if (name == player[i].name)
		{
			cout << player[i].name << "'s score is " << player[i].score << endl;
			found = true;
		}
		else
			found = false;
	}

	if (found == false)
		cout << "Player not found!" << endl;

	system("pause");

}

/* Exercise 6... This will take a while... */

void rpgShop()
{

}



void main()
{
	//makeChara();
	fivePlayers();
}