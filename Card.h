#include <iostream>
using namespace std;

#ifndef CARD_H
#define CARD_H

class Card {

private:
	char value[2];
	char suit[2];

public:
	Card();
	Card(char& v, char& s);
	Card(const Card& c);
	~Card();

	void printCard();

	//GETTERS AND SETTERS
	void setValue(char* v);
	char getValue();

	void setSuit(char* s);
	char getSuit();
};

#endif