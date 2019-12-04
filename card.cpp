class Card {
public:
    Card* Card::getCard(string pname) {
        Card* card = nullptr;
        if(pname == "Quartz") {
            card = new Quartz();
        }else if(pname == "Hematite") {
            card = new Hematite();
        }else if(pname == "Obsidian") {
            card = new Obsidian();
        }else if(pname == "Malachite") {
            card = new Malachite();
        }else if(pname == "Turquoise") {
            card = new Turquoise();
        }else if(pname == "Ruby") {
            card = new Ruby();
        }else if(pname == "Amethyst") {
            card = new Amethyst();
        }else if(pname == "Emerald") {
            card = new Emerald();
        }
        cards.push_back(card);
        return card;
    }
    };

