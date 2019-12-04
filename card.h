
#ifndef PROJECTED_CARD_H
#define PROJECTED_CARD_H
#include <iostream>
class Card {
public:
    virtual ~Card() {};

    virtual int getCoinsPerCard(const int numCards)const =0;

    virtual std::string getName(pname) ;

    virtual void print(std::ostream &out) const=0;
};
#endif //PROJECTED_CARD_H
