#include <iostream>
#include <vector>
#include <cstdlib>
#include "Card.h"

class DeckOfCards
{

public:
	vector<Card> cards;
	int currentCard = 0;

	explicit DeckOfCards() {
		for (int suit = 0; suit < 4; suit++) {
			for (int face = 0; face < 13; face++) {
				Card newCard(face, suit);
				cards.push_back(newCard);
			}
		}
	}

	void Shuffle() {
		int deckSize = cards.size();

		for (int i = 0; i < deckSize; i++) {
			Card temp(0, 0);
			int randomNum = rand() % (52);

			temp = cards.at(randomNum);
			cards.at(randomNum) = cards.at(i);
			cards.at(i) = temp; 
		}
	}

	Card dealCard() {
		Card dealCard = cards.at(currentCard);
		currentCard++;
		
		return dealCard; 
		
	}

	bool moreCards() {
		if(currentCard > 51)
			return false;
		else
			return true;
	}
};