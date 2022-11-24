#include <iostream>
#include <string>
#include "Player.h"
#include "State.h"
#include "StrongState.h"

Player::Player(std::string username){

    this->lifePoint = 100;
    this->username = username;
    this->hisState = new StrongState(this);
}

float Player::attack(int lifePoint){

    return this->hisState->attack(lifePoint);
}

float Player::defend(int lifePoint){

    return this->lifePoint -= this->hisState->defend(lifePoint);

}

void Player::gacha(){

   this->lifePoint += this->hisState->gacha();

}

void Player::setState(State *state){

    this->hisState = state;

}

std::string Player::getUsername(){

    return this->username;
}

float Player::getLifePoint(){

    return lifePoint;
}

bool Player::playerAlive(){

    if(this->lifePoint <= 0)
    {
        return false;
    }

    return true;
}
