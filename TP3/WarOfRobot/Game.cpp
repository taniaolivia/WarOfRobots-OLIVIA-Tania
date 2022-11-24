#include <iostream>
#include "Game.h"
#include "Player.h"
#include <list>
#include <string>

Game::Game(){

    listPlayers = new std::list<Player*>(); //lister les joueurs qui vont jouer dans le jeu

};

void Game::addPlayer(Player* aPlayer){

    listPlayers->push_back((aPlayer));
}

void Game::deletePlayers(){

    for(Player *player : *listPlayers)
    {
         delete(player);
     }
     delete(listPlayers); //supprimer la liste des joueurs quand ils ont quitté le jeu
     delete(this);
}

void Game::getListPlayers(std::list<Player*> *list){

    for(Player *player : *listPlayers)
    {
        list->push_back(player);
    }
}

bool Game::playerExist(std::string username){

    for(Player *player : *listPlayers)
    {
        if(player->getUsername() == username)
        {
            return true;
        }
    }

    return false;
}
