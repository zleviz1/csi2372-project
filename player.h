
#ifndef PROJECTED_PLAYER_H
#define PROJECTED_PLAYER_H
class NotEnoughCoinsException{
    exception() throw();
    exception(const exception& rhs) throw();
    exception& operator=(const exception& rhs) throw();
    virtual ~exception() throw();
    virtual const char *what() const throw();
};

class Player {
    string playername;
    int playercoins;
    int playermaxChains = 2;
    int playercurrentChains = 0;
    Hand *playerhand;
    vector<Chain_Base *> chains;
public:
    Player(string &plname);

    Player(std::istream &o, CardFactory *factory);

    string getName();

    int getNumCoins();

    int getMaxNumChains();

    int getNumChains();

    void buyThirdChain();

    Hand *getHand();

    vector<Chain_Base *> *getChains() {
        return &chains;
    }

    void printHand(std::ostream &, bool completeList);

    Player &operator+=(int coins);

    Chain_Base &operator[](int i);
};
#endif //PROJECTED_PLAYER_H
