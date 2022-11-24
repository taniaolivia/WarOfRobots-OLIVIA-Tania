#ifndef GAME_H
#define GAME_H
#include <list>
#include <string>
#include "Player.h"

class Game{

    std::list <Player*> * listPlayers ;

    public:
       Game(); //constructeur par défaut
       void deletePlayers(); //destructeur
       void addPlayer(Player *player);
       bool playerExist(std::string username);
       bool gameFinish();
       void getListPlayers(std::list<Player*> *list);

};

#endif // GAME_H
