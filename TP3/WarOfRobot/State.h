#ifndef STATE_H
#define STATE_H
#include "Player.h"

class State{

public:
    State();
    virtual float attack(int losePoint) = 0;
    virtual float defend(int) = 0;
    virtual int gacha() = 0;
};

#endif // STATE_H
