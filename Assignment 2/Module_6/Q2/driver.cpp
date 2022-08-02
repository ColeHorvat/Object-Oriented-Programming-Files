#include <iostream>
#include "DeckOfCards.h"
using namespace std;

int main() {
	DeckOfCards deck;
	deck.Shuffle();

	while(deck.moreCards()) {

		cout << deck.dealCard().toString();
	}
}