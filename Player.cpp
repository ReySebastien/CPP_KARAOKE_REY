#include "Player.h"
#include <string>
#include <iostream>

Player::Player() : _nomJoueur("François"), _score0 (), _score1 (), _score2 (), _score3 (), _score4 ()
{

}

Player::Player (std::string nom, int score_0, int score_1, int score_2, int score_3, int score_4) : _nomJoueur(nom), _score0(), _score1(), _score2(), _score3(), _score4()
{

}
std:: string Player:: getNom()
{
    return _nomJoueur;
}