#include <vector>
#include <iostream>
#include "gemstones.h"
#include "CardFactory.h"
class CardFactory;
using std::vector;
#ifndef PROJECTED_DECK_H
#define PROJECTED_DECK_H
class Deck : public vector<Card*> {
    class CardFactory;
public:
    Deck(){};
    Card* draw();
    Deck(std::istream&, CardFactory*);
};
#endif //PROJECTED_DECK_H
