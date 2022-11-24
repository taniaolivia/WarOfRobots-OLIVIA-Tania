#ifndef AVERAGESTATE_H
#define AVERAGESTATE_H
#include "State.h"
#include "Player.h"

class AverageState : public State{

private :
    int lifePoint;
    Player *player;

public:
    AverageState(Player *);
    int gacha() override;
    float attack(int losePoint) override;
    float defend(int) override;
    void changeState();
};

#endif // AVERAGE_H
