#include "Player.h"
#include <string>
#include <iostream>
#include <vector>

Player::Player() : _nomJoueur("François"), _score0 (), _score1 (), _score2 (), _score3 (), _score4 ()
{

}

Player::Player (std::string nom, int score_0, int score_1, int score_2, int score_3, int score_4) : _nomJoueur(nom), _score0(score_0), _score1(score_1), _score2(score_2), _score3(score_3), _score4(score_4)
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
     _scoreTotal = (_score0 + _score1 + _score2 + _score3 + _score4);
    
    std :: cout << "Le score total du joueur " << _nomJoueur << " est : " << _scoreTotal << std :: endl;
    return _scoreTotal;
}

int Player :: afficheMoyenneScore()
{
    _moyenneScore = (_score0 + _score1 + _score2 + _score3 + _score4)/5;

    std :: cout << "La moyenne des scores du joueur " << _nomJoueur << " est : " << _moyenneScore << std :: endl;
    return _moyenneScore;
}

int Player :: affichePireScore()
{
    for (int i=0; i<_pireScore; i++)
    {
        int tableauScore[_score0, _score1, _score2, _score3, _score4]
        
    }
    return _pireScore;
}

std::string Player :: afficheMeilleureChanson()
{

return _meilleureChanson;
}
