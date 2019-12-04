
#ifndef PROJECTED_GAMESTONE_H
#define PROJECTED_GAMESTONE_H
#include <iostream>
#include <string>

#include "Card.h"
class Quartz : public Card {
    Quartz();
public:
    static Quartz* create();
    virtual std::string getName() const override;
    virtual int getCoinsPerCard(const int numCards) const override;
};


class Hematite : public Card {
    Hematite();
public:
    static Hematite* create();
    virtual std::string getName() const override;
    virtual int getCoinsPerCard(const int numCards) const override;
};
class Malachite : public Card {
    Malachite();
public:
    static Malachite* create();
    virtual std::string getName() const override;
    virtual int getCoinsPerCard(const int numCards) const override;
};
class Obsidian : public Card {
    Obsidian();
public:
    static Obsidian* create();
    virtual std::string getName() const override;
    virtual int getCoinsPerCard(const int numCards) const override;
};
class Emerald : public Card {
    Emerald();
public:
    static Amethyst* create();
    virtual std::string getName() const override;
    virtual int getCoinsPerCard(const int numCards) const override;
};
class Turquoise : public Card {
    Turquoise();
public:
    static Turquoise* create();
    virtual std::string getName() const override;
    virtual int getCoinsPerCard(const int numCards) const override;
};
class Emerald : public Card {
    Emerald();
public:
    static Amethyst* create();
    virtual std::string getName() const override;
    virtual int getCoinsPerCard(const int numCards) const override;
};
class Ruby : public Card {
    Ruby();
public:
    static Ruby* create();
    virtual std::string getName() const override;
    virtual int getCoinsPerCard(const int numCards) const override;
};


#endif //PROJECTED_GAMESTONE_H
