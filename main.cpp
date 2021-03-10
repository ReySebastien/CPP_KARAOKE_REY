#include "Player.cpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
Player Francois = Player("François", 1, 2, 3, 1, 1);
Player Amanda = Player("Amanda", 1, 0, 0, 0, 0);
Player Julien = Player("Julien", 0, 0, 0, 0, 0);
Player Arnaud = Player("Arnaud", 0, 0, 0, 0, 0);
Player Sylvestre = Player("Sylvestre", 0, 0, 0, 0, 0);

Francois.afficheScoreTotal();
Amanda.afficheScoreTotal();


return 0;
}
