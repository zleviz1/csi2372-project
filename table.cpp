#include "table.h"
using std::endl;
using std::string;
Table::Table(Player* player1, Player* player2, Deck* deck, DiscardPile* discardPile, TradeArea* tradeArea) :
        fp(player1), sp(player2), deck(deck), discardPile(discardPile), tradeArea(tradeArea){}
bool Table::win(string& w) {
    int onecoins = fp->getNumCoins();
    int twocoins = sp->getNumCoins();
    bool a = true;
    if (onecoins == twocoins)
    { a = false; }
    if(onecoins>twocoins)
    {
        fp->getName();
    }
    else
    {sp->getName();}
    return a;
}
void Table::print(std::ostream& o){
    int p1c = fp->getNumChains();
    int p1m = fp->getMaxNumChains();
    int p2c = sp->getNumChains();
    int p2m = sp->getMaxNumChains();

}


