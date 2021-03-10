#include "Player.cpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
Player Francois = Player("François", 66, 75, 88, 95, 50);
Player Amanda = Player("Amanda", 55, 75, 59, 82, 74);
Player Julien = Player("Julien", 55, 69, 50, 75, 100);
Player Arnaud = Player("Arnaud", 98, 85, 69, 78, 51);
Player Sylvestre = Player("Sylvestre", 78, 88, 99, 55, 67);

Francois.afficheScoreTotal();
Amanda.afficheScoreTotal();
Julien.afficheScoreTotal();
Arnaud.afficheScoreTotal();
Sylvestre.afficheScoreTotal();
Francois.afficheMoyenneScore();
Amanda.afficheMoyenneScore();
Julien.afficheMoyenneScore();
Arnaud.afficheMoyenneScore();
Sylvestre.afficheMoyenneScore();


return 0;
}
