
#ifndef PROJECTED_CARDFACTORY_H
#define PROJECTED_CARDFACTORY_H

#include <iostream>
#include <vector>
#include <string>
#include "gemstones.h"
using std::vector;
using std::string;
class CardFactory {
    CardFactory *instance;
    vector<Card *> cards;

    CardFactory();

public:
    Deck getDeck();

    Card *getCard(string);

    CardFactory *::getFactory();

};
#endif //PROJECTED_CARDFACTORY_H
