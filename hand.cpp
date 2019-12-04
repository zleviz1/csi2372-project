#include <vector>
#include "hand.h"
Hand::Hand() {}
const Hand& Hand::operator+=(const Card *card) {
    playercard.push_back(card);
    return *this;
}
const Card* Hand::operator[](int i) {
        playercard.erase(playercard.begin() + i);
        return playercard[i];
    }

const vector<const Card*>* Hand::getHand() const {
    return playercard;
}
Hand::Hand( std::istream& a, CardFactory* f) {
    string card;
    while ((a >> card)) {
        if (card == "~") {
            break;
        }
        Card *add;
       playercard.push_back(add);
    }
}
const bool Hand::isEmpty() {
    if(playercard.size()==0){
    return true;}
    else
    {return false;}
}
int Hand::getSize() const {
    return static_cast<int>(playercard.size());
}
const Card* Hand::top() {
    return playercard.begin();
}
void Hand::print(std::ostream &a) const {
    for (auto& b : playercard) {
        a << b->getName() << " ";
    }
}