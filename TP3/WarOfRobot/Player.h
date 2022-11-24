#ifndef PLAYER_H
#define PLAYER_H
#include "State.h"
#include <string>

class State;
class Player{

    private:
        std::string username;
        State * hisState;
        float lifePoint;

    public:
        Player(std::string username);
        float attack(int lifePoint);
        float defend(int lifePoint);
        void gacha();
        void setState(State *);
        std::string getUsername();
        float getLifePoint();
        void setLifePoint(int);
        bool playerAlive();

};

#endif // PLAYER_H
