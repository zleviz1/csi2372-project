
#ifndef PROJECTED_TRADEAREA_H
#define PROJECTED_TRADEAREA_H
#include <list>
#include <string>
#include "gemstones.h"
#include "CardFactory.h"
using std::string;
class TradeArea {
    std::list<const Card*> listofcard;
public:
    TradeArea();
    TradeArea& TradeArea::operator+=( Card* a);
    bool TradeArea::legal(const Card * a);
    const Card* TradeArea:: trade( std::string recard);
    std::list<const Card*> getCards();
};

#endif
