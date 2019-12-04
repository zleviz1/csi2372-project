
#ifndef PROJECTED_DISCARDPILE_H
#define PROJECTED_DISCARDPILE_H
#include "gemstones.h"
#include "CardFactory.h"
#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::cout;
using std::string;
class DiscardPile {
    vector <const Card*> playercards;
public:
    DiscardPile();
    DiscardPile(std::istream&, CardFactory* );
    DiscardPile& operator+=( Card* );
    Card* pickUp();
    Card* top() const;
    void print(std::ostream&)const;
    friend std::ostream& operator<<(std::ostream& a, const DiscardPile& b) {
        if (!playercards.size()==0) {
            a << *b.top();}
        return a;
    };
};

#endif //PROJECTED_DISCARDPILE_H
