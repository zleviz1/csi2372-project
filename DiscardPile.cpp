#include "DiscardPile.h"

DiscardPile::DiscardPile() {}
const DiscardPile& DiscardPile::operator+=(const Card* card) {
   playercards.push_back(card);
    return *this;
}
Card* DiscardPile::pickUp() {
    if (playercards.size() != 0) {
        Card *topCard = playercards.back();
        playercards.pop_back();
    }
    else{
       return nullptr;
         }
    return topCard;
}
Card* DiscardPile::top() const {
    if (playercards.size() != 0) {
        return playercards.back();
    }
    return nullptr;
    }
void DiscardPile::print(std::ostream& a) const {
    for (auto& card : playercards) {
        a << card->getName() << " ";
    }
}


