#ifndef GOODSTATE_H
#define GOODSTATE_H
#include "State.h"
#include "Player.h"

class GoodState : public State{

private :
    int lifePoint;
    Player *player;

public:
    GoodState(Player *);
    int gacha() override;
    float attack(int losePoint) override;
    float defend(int) override;
    void changeState();
};


#endif // GOOD_H
