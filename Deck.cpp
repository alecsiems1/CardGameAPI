#include "Card.h"
#include "Deck.h"

Deck::Deck() {
	char values[13] = {'2','3','4','5','6','7','8','9','T','J','Q','K','A'};
	char suits[4] = {'S','C','D','H'};
	cards = new Card[52];

	int cardLoc = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			Card c = Card(values[j], suits[i]);
			cards[cardLoc] = c;
			cardLoc++;
		}
	}

}
Deck::~Deck() {
	delete[] cards;
}

Card* Deck::getCards() {
	return cards;
}

