#include <vector>
#include "hand.h"
#ifndef PROJECTED_HAND_H
#define PROJECTED_HAND_H
#ifndef CSI2372PROJECT_HAND_H
#define CSI2372PROJECT_HAND_H

#include "Card.h"
#include "gemstones.h"
#include <list>
#include <queue>
#include "CardFactory.h"
#include <iostream>

using std::string;
class Hand {
    vector<const Card*> playercard;
public:
    const Hand& operator+=(const Card* cardToAdd);
    const Card* operator[](int);
    Hand();
    Hand(std::istream& stream, CardFactory* cardFactory);
    const Card* play();
    const Card* top();
    void print(std::ostream& a) const;
    const vector<const Card*>* getHand() const;
    const bool isEmpty();
    int getSize() const;
};

#endif
#endif //PROJECTED_HAND_H
