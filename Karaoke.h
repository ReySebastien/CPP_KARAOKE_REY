#include <string>

class Karaoke
{
    private:
        std::string _nomChanson1;
        std::string _nomChanson2;
        std::string _nomChanson3;
        std::string _nomChanson4;
        std::string _nomChanson5;
        std::string _pseudoJoueur1;
        std::string _pseudoJoueur2;
        int _scoreJoueur1;
        int _scoreJoueur2;

    public:
        std::string getNomChanson1();
        std::string getNomChanson2();
        std::string getNomChanson3();
        std::string getNomChanson4();
        std::string getNomChanson5();
        std::string getNomJoueur1();
        std::string getNomJoueur2();
        int getScoreJoueur1();
        int getScoreJoueur2();
        Karaoke();
        Karaoke(std::string _nomChanson1, std::string _nomChanson2, std::string _nomChanson3, std::string _nomChanson4, std::string _nomChanson5, std::string _pseudoJoueur1, std::string _pseudoJoueur2, int _scoreJoueur1, int _scoreJoueur2);
};

//Pour ajouter ou supprimer des chansons on pourrait simplement modifier la classe karaoké de manière à ajouter de nouvelles chanson, ceci fonctionne pareil pour supprimer une chanson. Cependant il faudrait également modifier les fichiers .cpp
