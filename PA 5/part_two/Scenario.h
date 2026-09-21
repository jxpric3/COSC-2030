#ifndef SCENARIO_H
#define SCENARIO_H

#include <string> 
#include "Player.h"
#include "Enemy.h"


using namespace std;

class Scenario
{
    private: 
    Player combatPlayer;
    Enemy combatEnemy; 

    bool hitResolution; 
    int diceRoll; 
    int rawDamage; 
    int actualDamage; 

    static const int diceSize; 

    int rollDice(int sides) const; 
    void fightCalculation(); 

    public: 
    Scenario(const Player &player, const Enemy &enemy);

    int getDiceRoll() const; 
    string getHitResult() const; 
    int getRawDamage() const; 
    int getActualDamage() const; 

    string getPlayerName() const; 
    string getWeaponName() const; 
    string getEnemyName() const; 
    


};

#endif 