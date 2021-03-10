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

    public:
        std::string getNom();
        int _getScore0();
        int _getScore1();
        int _getScore2();
        int _getScore3();
        int _getScore4();
        Player();
        Player(std::string name, int score_0, int score_1, int score_2, int score_3, int score_4);
};