#include <iostream>
#include "GoodState.h"
#include "AverageState.h"
#include "Player.h"
#include "State.h"
#include "Game.h"
#include <cstdlib>

GoodState::GoodState(Player *player){

    this->player = player;

}

int GoodState::gacha(){
    int gachaChance = rand()%100;

    if(gachaChance  <= 70)
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

float GoodState::attack(int losePoint){

    int costPoint;

        costPoint = losePoint * 1;
        lifePoint = lifePoint - losePoint;
        changeState();

    return costPoint;

    //std::cout<< "You've decided to attack that will cost you" << << "of your life points";
}

float GoodState::defend(int losePoint){

    int costPoint;

        costPoint = losePoint * 1;
        lifePoint = lifePoint - losePoint;
        changeState();

    return costPoint;

    //std::cout<< "You've attacked the enemy. Your enemy lose " << << "of his life points";

}

void GoodState::changeState(){

    if(lifePoint <= 50)
    {
        player->setState(new AverageState(player));
    }
}
