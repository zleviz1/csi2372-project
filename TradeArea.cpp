
#include "TradeArea.h"
TradeArea::TradeArea() {}
TradeArea& TradeArea::operator+=( Card* a){
    listofcard.push_back(a);
    return *this;
}
bool TradeArea::legal(const Card * a) {
    list<Card*>::iterator b = listofcard.begin();
    int x = listofcard.size();
    for (int i=0;i < x;i++) {
        if (b->getName() == a->getName()) {
            return true;
        }
    }
    return false;
}
std::list<const Card*> TradeArea::getCards() {
    return  listofcard;
}
int TradeArea::numCards() const{
    return (int)listofcard.size();
}
const Card* TradeArea:: trade( std::string recard){
    list<Card*>::iterator it = tradeList.begin();
    const Card* card = nullptr;
    for(auto it=d_cards.begin(); it!=d_cards.end(); ++it){
        ++it;
        if( (*it)->getName()==recard){
            tradeList.erase(it);
            card=*it;
            return card;
        }
    }
    return nullptr;
}