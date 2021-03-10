#include "Player.h"
#include <string>
#include <iostream>
#include <vector>
#include "Karaoke.h"

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
        int tableauScore[_score0, _score1, _score2, _score3, _score4];
//je voulais ici faire une fonction qui compare les valeurs de chaque score et retourne le score le plus bas, cependant je n'ai pas eu le temps de la rendre fonctionnelle.
    }
    return _pireScore;
}

std::string Player :: afficheMeilleureChanson()
{
// Ici pareil que pour la fonction du dessus, mon but aurait été de comparer les scores des différentes chansons et de retourner la valeur la plus haute.
return _meilleureChanson;
}

std::string Karaoke:: getNomChanson1()
{
    return _nomChanson1;
}

std::string Karaoke:: getNomChanson2()
{
    return _nomChanson2;
}

std::string Karaoke:: getNomChanson3()
{
    return _nomChanson3;
}

std::string Karaoke:: getNomChanson4()
{
    return _nomChanson4;
}

std::string Karaoke:: getNomChanson5()
{
    return _nomChanson5;
}