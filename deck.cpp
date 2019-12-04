#include "Deck.h"

using std::istream;
using std::cout;
using std::endl;
using std::string;
using std::getline;
Card* Deck::draw() {
    if (size() > 0) {
        Card* card = this.begin();
        erase(begin());
        return card;
    }
    else {
        return nullptr;
    }
}
void Deck::print() {
    for (auto& i : *this) {
        std::cout << *i;
    }
}
Deck::Deck(istream& a, CardFactory* f) {
    string card;
    while ((in >> card)) {
        if (card == "--") {
            break;
        }
        Card * add;
        if (cards == 'Hematite') {
            string name{"Hematite"};
            add = f->getCard(Hematite);
        }
        if (cards == 'Amethyst') {
            string name{"Amethyst"};
            add = f->getCard(Amethyst);
        }
        if (cards == 'Obsidian') {
            string name{"Obsidian"};
            add = f->getCard(Obsidian);
        }
        if (cards == 'Malachite') {
            string name{"Malachite"};
            add = f->getCard(Malachite);
        }
        if (cards == 'Turquoise') {
            string name{"Turquoise"};
            add = f->getCard(Turquoise);
        }
        if (cards == 'Ruby') {
            string name{"Ruby"};
            add = f->getCard(Ruby);
        }
        if (cards == 'Quartz') {
            string name{"Quartz"};
            add = f->getCard(Quartz);
        }
        if (cards == 'Emerald') {
            string name{"Emerald"};
            add = f->getCard(Emerald);
        }
        this->push_back(add);
    }
}

