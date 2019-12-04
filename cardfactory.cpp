#include <iostream>
#include "CardFactory.h"

using std::string;
CardFactory::CardFactory() {}
CardFactory* CardFactory::getFactory() {
    static CardFactory instance;
    return &instance;
}
Deck CardFactory::getDeck() {
    Deck deck;
    for(int i=0;i<16;i++) {
        Card* cards = new Quartz();
        deck.push_back(card);
    }
    for (int i=0;i<18;i++) {
        Card* cards = new Hematite();
        deck.push_back(card);
    }
    for(int i=0;i<16;i++) {
        Card* cards = new Obsidian();
        deck.push_back(card);
    }
    for(int i=0;i<14;i++) {
        Card* cards = new Malachite();
        deck.push_back(card);
    }
    for(int i=0;i<12;i++) {
        Card* cards = new Turquoise();
        deck.push_back(card);
    }
    for(int i=0;i<10;i++) {
        Card* cards = new Ruby();
        deck.push_back(card);
    }
    for(int i=0;i<8;i++) {
        Card* cards = new Amethyst();
        deck.push_back(card);
    }
    for(int i=0;i<6;i++) {
        Card* cards = new Emerald();
        deck.push_back(card);
    }
    return deck;
}

