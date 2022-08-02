#include <iostream>
#include <string>
using namespace std;

class Card 
{
public:
	int face;
	int suit;
	string suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
	string faces[13] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

	explicit Card(int initFace, int initSuit) { 
		face = initFace;
		suit = initSuit;
	}

	string toString() {
		return faces[face] + " of " + suits[suit] + " ";
	}

private:


};