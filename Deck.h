#include "Card.h"

#ifndef DECK_H
#define DECK_H

class Deck {
private:
	Card* cards;

public:
	Deck();
	~Deck();

	void shuffleDeck();
	void drawCard();


	//
	Card* getCards();

};

#endif