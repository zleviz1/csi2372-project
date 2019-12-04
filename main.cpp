#include <iostream>
#include <string>
#include <vector>
#include "Card.h"
#include "CardFactory.h"
#include "chain.h"
#include "Hand.h"
#include "gemstones.h"
#include "Player.h"
#include "Table.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;
using std::cout;
using std::cin;
int main() {
            string p1_name;
            string p2_name;
            cout << "Player 1 ";
            getline(cin, p1_name);
            cout << "Player 2 ";
            getline(cin, p2_name);
            cout << endl;
            Player player_1{p1_name};
            Player player_2{p2_name};}


