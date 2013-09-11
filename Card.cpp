#include "Card.h"
#include <iostream>

using namespace std;

Card::Card() {
	
}
Card::Card(char& v, char& s) {
	*value = v;
	*suit = s;
}
Card::Card(const Card& c) {
	*value = *c.value;
	*suit = *c.suit;
}
Card::~Card() {

}
//Card& Card::operator=(Card c)

void Card::printCard() {

	cout << value << " " << suit << endl;

}

//GETTERS AND SETTERS
void Card::setValue(char* v) {
	strcpy(value, v);
}
char Card::getValue() {
	return *value;
}

void Card::setSuit(char* s) {
	strcpy(suit, s);
}
char Card::getSuit() {
	return *suit;
}


