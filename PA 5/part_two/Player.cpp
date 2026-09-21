#include <string>
#include "Player.h"

using namespace std; 

Player::Player()
{
   playerBaseAttackPower = 0; 

}

Player::Player(string charName, string dungeonClass, int baseAttack, const Weapon &weapon)
{
    playerName = charName; 
    playerDungeonClass = dungeonClass; 
    playerBaseAttackPower = baseAttack; 
    equippedWeapon = weapon; 
}

string Player::getName() const
{
    return playerName; 
}

string Player::getDungeonClass() const
{
    return playerDungeonClass; 

}

int Player::getBaseAttackPower() const
{
    return playerBaseAttackPower;
}

int Player::totalAttackPower() const
{
    return playerBaseAttackPower + equippedWeapon.getAttackBonus(); 
}

int Player::getWeaponDamage() const
{
    return equippedWeapon.getDamage();   
}

string Player::getWeaponDamageType() const 
{
    return equippedWeapon.getDamageType();
}

string Player::getWeaponName() const 
{
    return equippedWeapon.getWeaponName();
}