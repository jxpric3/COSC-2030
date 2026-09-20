#ifndef PLAYER_H
#define PLAYER_H

#include <string> 
#include "Weapon.h"

using namespace std;

class Player 
{
    private: 
    string playerName; 
    string playerDungeonClass; 
    int playerBaseAttackPower; 
    Weapon equippedWeapon; 

    public:
    
    Player();
    Player(string charName, string dungeonClass, int baseAttack, const Weapon &weapon);

    string getName() const; 
    string getDungeonClass() const; 
    int getBaseAttackPower() const; 

    int totalAttackPower() const; 

    int getWeaponDamage() const; 
    string getWeaponDamageType() const; 
    string getWeaponName() const; 


    

    
};

#endif