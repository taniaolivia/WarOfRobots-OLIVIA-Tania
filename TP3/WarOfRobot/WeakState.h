#ifndef WEAKSTATE_H
#define WEAKSTATE_H
#include "State.h"
#include "Player.h"

class WeakState : public State{

private :
    int lifePoint;
    Player *player;

public:
    WeakState(Player *);
    int gacha() override;
    float attack(int losePoint) override;
    float defend(int) override;
    void changeState();
};

#endif // WEAK_H
