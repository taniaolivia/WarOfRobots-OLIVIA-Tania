#include <iostream>
#include "State.h"
#include "StrongState.h"
#include "WeakState.h"
#include "GoodState.h"
#include "DieState.h"
#include "AverageState.h"
#include "Player.h"
#include "Game.h"
#include <list>
#include <string>


using namespace std;

int main()
{
    int players=0;
    std::string username;
    std::string start;
    std::string answer;

    Game * aGame = new Game();

    Player *aPlayer = new Player(username);

    //State * state;


    std::cout<< "-----------------------------------";
    std::cout<< "           WAR OF ROBOTS           ";
    std::cout<< "-----------------------------------";
    std::cout<< std::endl;
    std::cout<< std::endl;

    std::cout<< " Welcome to ""War of Robots"", players! "<<std::endl;
    std::cout<< " To start the game write start in the box below"<<std::endl;
    std::cout<< "----------------------";
    std::cin>> start;
    std::cout<< "----------------------";

    std::cout<< std::endl;
    std::cout<< std::endl;

    std::cout << "How many players will be playing in this game? (3-10 players)";
        std::cin>> players;

        if(players >= 3 && players <= 10)
        {
            for(int i=1; i < players; i++)
            {
                //aPlayer->setState(state);

                std::cout<< "Enter your username (Player " << i << ") : " << std::endl;

                aGame->addPlayer(aPlayer);
            }
        }

        else
        {
            std::cout<< "The number of players you entered are insufficient. Try again! (3-10 players)" << std::endl;
        }

       // aPlayer->setState(state);

        std::cout<< "Do you want to attack? (Yes/No)" << std::endl;
        std::cin>> answer;

        if (answer == "Yes" or answer == "yes")
        {
            aPlayer->attack(aPlayer->getLifePoint());
        }

        else {

        }

        std::cout<< "You're being attack by another players! Do you want to defend the attack? (Yes/No)" << std::endl;
        std::cin>> answer;

        if(answer == "Yes" || answer == "yes")
        {
            aPlayer->defend(aPlayer->getLifePoint());
        }

        else {

        }

        std::cout<< "Do you want to play gacha to get more life points? (Yes/No)" << std::endl;
        std::cin>> answer;

        if(answer == "Yes" || answer == "yes")
        {
            aPlayer->gacha();
        }

        else {

        }


        aPlayer->playerAlive();



        aGame->playerExist(username);



        std::cout<< "You want to quit the game? (Yes/No)";
        if(answer == "Yes" || answer == "yes")
        {
            aGame->deletePlayers();
        }

}


