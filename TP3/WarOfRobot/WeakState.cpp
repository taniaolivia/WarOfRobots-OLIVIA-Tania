#include <iostream>
#include "WeakState.h"
#include "DieState.h"
#include "Player.h"
#include "State.h"
#include "Game.h"
#include <cstdlib>

WeakState::WeakState(Player *player){

    this->player = player;
}

int WeakState::gacha(){
    int gachaChance = rand()%100;

    if(gachaChance <= 10)
    {
        return this->lifePoint += 20;
        std::cout<< "Congratulation! You win 20 life points."<<std::endl;
    }

    else if(gachaChance > 10 && gachaChance <= 20)
    {
        return this->lifePoint += 10;
        std::cout<< "Congratulation! You win 10 life points."<<std::endl;
    }

    else if(gachaChance <= 30 && gachaChance > 20)
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

float WeakState::attack(int losePoint){

    int costPoint;

        costPoint = losePoint * 1;
        lifePoint = lifePoint - losePoint;
        changeState();

    return costPoint;

    //std::cout<< "You've decided to attack that will cost you" <<  << "of your life points";
}

float WeakState::defend(int losePoint){

    int costPoint;

        costPoint = losePoint * 1.5;
        lifePoint = lifePoint - losePoint;
        changeState();

    return costPoint;

    //std::cout<< "You've attacked the enemy. Your enemy lose " <<  << "of his life points";


}

void WeakState::changeState(){

    if(lifePoint == 0)
    {
        player->setState(new DieState(player));
    }
}
