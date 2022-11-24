#include <iostream>
#include "WeakState.h"
#include "AverageState.h"
#include "Player.h"
#include "State.h"
#include "Game.h"
#include <cstdlib>

AverageState::AverageState(Player *player){

    this->player = player;
}

int AverageState::gacha(){
    int gachaChance = rand()%100;

    if(gachaChance  <= 30)
    {
        return this->lifePoint += 10;
        std::cout<< "Congratulation! You win 10 life points."<<std::endl;
    }

    else if(gachaChance  > 30 && gachaChance <= 60)
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

float AverageState::attack(int losePoint){

    int costPoint;

        costPoint = losePoint * 1;
        lifePoint = lifePoint - losePoint;
        changeState();

    return costPoint;
}

float AverageState::defend(int losePoint){

    int costPoint;

        costPoint = losePoint * 1;
        lifePoint = lifePoint - losePoint;
        changeState();

    return costPoint;
}

void AverageState::changeState(){

    if(lifePoint <= 30)
    {
        player->setState(new WeakState(player));
    }
}

