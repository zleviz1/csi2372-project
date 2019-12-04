#include <iostream>
#include <vector>
#include <string>
#include "gemstones.h"
#include "cardfactory.h"

using std::vector;
using std::string;
#ifndef PROJECTED_CHAIN_H
#define PROJECTED_CHAIN_H
class Chain_Base {
private:
    string cardtype;
public:
    Chain_Base(string a) :cardtypr(a) {};
    string getGemType();
    void print(std::ostream&);
};
template<class T> class Chain : public Chain_Base {
    vector<T*> playerchain;
public:
    Chain(T* t) :
            Chain_Base(t->getName()) {
        playerchain.push_back(t);
    };
    virtual ~Chain() {
       playerchain.erase(playerchain.begin(), playerchain.end());
    }
    virtual Chain<T>& operator+=(T* game) {
        player.push_back(game);
        return *this;
    }};
#endif //PROJECTED_CHAIN_H
