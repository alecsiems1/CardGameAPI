#include <iostream>
#include "Card.h"
#include "Deck.h"

using namespace std;

int main() {
	
	Deck d;

	for (int i = 0; i < 52; i++) {
		d.getCards()[i].printCard();
	}

	return 0;
}