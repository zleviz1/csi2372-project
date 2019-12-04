#include <string>
#include <iostream>
#include "player.h"
#include "discardPile.h"
#include "tradeArea.h"
#include "cardFactory.h"
#ifndef PROJECTED_TABLE_H
#define PROJECTED_TABLE_H
using std::string;
class Table {
    Player *fp;
    Player *sp;
    Deck *deck;
    DiscardPile *discardPile;
    TradeArea *tradeArea;
public:
    Table(const Table &other) = delete;

    Table &operator=(const Table &other) = delete;

    Table(Player *fp, Player *sp, Deck *deck, DiscardPile *discardPile, TradeArea *tradeArea);

    bool win(string &winner);

    void print(std::ostream &o);
};
#endif //PROJECTED_TABLE_H
