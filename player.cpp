#include <vector>
#include "Player.h"
using std::string;
using std::vector;
using std::cout;
using std::endl;
Player::Player(string& name)
{
    playername = name;
    playercoins = 0;
    playerhand = new Hand();
}
Player& Player::operator+=( int i) {
   playercoins += i;
    return playercoins;
}
void Player::buyThirdChain()
{
    try {
    if(playercoins >= 2) {
        playermaxChains= 3;
        playercoins -= 2;
    }
        else{
        throw new NotEnoughCoinsException();
    }
    }
    catch (NotEnoughCoinsException) {
        cout << "not enough coin" <<endl;
    }
}
void Player::printHand(std::ostream& card, bool a) {
    if (a) {
        card << playerhand;
    }
    else {
        card <<playerhand.top()->getName();
    }
}
string Player::getName(){
    return playername;
}
const vector<Chain_Base*>& Player::getChains() const{
    return chains;
}
int Player::getNumCoins(){
    return playercoins;
}

int Player::getNumChains(){
    return playercurrentChains;
}

int Player::getMaxNumChains(){
    return playermaxChains;
}

Hand* Player::getHand()  {
    return &playerhand;
}
Player::Player(std::istream& in, CardFactory* cf) {
    string s;
}
Player::Player(std::istream& a, CardFactory* f){
    string data;
    a >> playername;
    a >> playercoins;
    a >> playercurrentChains;
    a >> playerChains;
    for (int i=0; i < playercurrentChains; ++i) {
        if (playername == "Quartz") {
            Chain <Quartz> *chain = new Chain<Quartz>(a, f);
            chains.push_back(chain);
        } else if (playerename == "Hematite") {
            Chain <Hematite> *chain = new Chain<Hematite>(a, f);
            chains.push_back(chain);
        } else if (playerename == "Obsidian") {
            Chain <Obsidian> *chain = new Chain<Obsidian>(a, f);
            chains.push_back(chain);
        } else if (playerename == "Malachite") {
            Chain <Malachite> *chain = new Chain<Malachite>(a, f);
            chains.push_back(chain);
        } else if (playerename == "Turquoise") {
            Chain <Turquoise> *chain = new Chain<Turquoise>(a, f);
            chains.push_back(chain);
        } else if (playerename == "Ruby") {
            Chain <Ruby> *chain = new Chain<Ruby>(a, f);
            chains.push_back(chain);
        } else if (playerename == "Amethyst") {
            Chain <Amethyst> *chain = new Chain<Amethyst>(a, f);
            chains.push_back(chain);
        } else if (playerename == "Emerald") {
            Chain <Emerald> *chain = new Chain<Emerald>(a, f);
            chains.push_back(chain);
        }
    }
    playerhand = new hand(a, f);

}
