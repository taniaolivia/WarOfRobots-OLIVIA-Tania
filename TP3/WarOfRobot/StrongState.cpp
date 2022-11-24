#include <iostream>
#include "StrongState.h"
#include "GoodState.h"
#include "Player.h"
#include "State.h"
#include "Game.h"
#include <cstdlib>

StrongState::StrongState(Player *player){

    this->player = player;

}

int StrongState::gacha(){
    int gachaChance = rand()%100;

    if(gachaChance  <= 20)
    {
        return this->lifePoint += 10;
        std::cout<< "Congratulation! You win 10 life points."<<std::endl;
    }

    else if(gachaChance  <= 60 && gachaChance > 20)
    {
        return this->lifePoint += 5;
        std::cout<< "Congratulation! You win 5 life points."<<std::endl;
    }

    else
    {
        std::cout<< "Better next time!"<<std::endl;
    }
    return 0;
}

float StrongState::attack(int losePoint){

    int costPoint;

        costPoint = losePoint * 1.5;
        lifePoint = lifePoint - losePoint;
        changeState();

    return costPoint;
}

float StrongState::defend(int losePoint){

    int costPoint;

        costPoint = losePoint * 0.75;
        lifePoint = lifePoint - losePoint;
        changeState();

    return costPoint;

}

void StrongState::changeState(){

    if(lifePoint <= 80)
    {
        player->setState(new GoodState(player));
    }
}
