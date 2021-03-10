#include <string>

class Player
{
    private:
        std::string _nomJoueur;
        int _score0;
        int _score1;
        int _score2;
        int _score3;
        int _score4;
        int _scoreTotal;
        int _moyenneScore;

    public:
        std::string getNom();
        int getScore0();
        int getScore1();
        int getScore2();
        int getScore3();
        int getScore4();
        int afficheScoreTotal();
        int afficheMoyenneScore();
        int afficheMeilleurChanson();
        Player();
        Player(std::string name, int score_0, int score_1, int score_2, int score_3, int score_4);
};