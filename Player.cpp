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

int Player:: getScore0()
{
    return _score0;
}

int Player:: getScore1()
{
    return _score1;
}

int Player:: getScore2()
{
    return _score2;
}

int Player:: getScore3()
{
    return _score3;
}

int Player:: getScore4()
{
    return _score4;
}

int Player :: afficheScoreTotal()
{


}

int Player :: afficheMoyenneScore()
{

}

int Player :: afficheMeilleurChanson()
{

}
