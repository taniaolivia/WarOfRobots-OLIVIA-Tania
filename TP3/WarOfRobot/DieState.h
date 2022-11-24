#ifndef DIESTATE_H
#define DIESTATE_H
#include "State.h"
#include "Player.h"

class DieState : public State{

private :
    Player *player;

public:
    DieState(Player *);
    float attack(int) override;
    float defend(int) override;
    int gacha() override;
};

class Die
{
public:
    Die();
};

#endif // DIE_H
