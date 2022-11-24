#ifndef STRONGSTATE_H
#define STRONGSTATE_H
#include "State.h"


class StrongState : public State{

private :
    int lifePoint;
    Player *player;

public:
    StrongState(Player *);
    int gacha() override;
    float attack(int losePoint) override;
    float defend(int) override;
    void changeState();
};

#endif // STRONG_H
