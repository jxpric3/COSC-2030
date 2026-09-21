#include <string> 
#include <cstdlib>
#include "Scenario.h"


using namespace std; 

const int Scenario::diceSize = 20; 

Scenario::Scenario(const Player &player, const Enemy &enemy)
{
    combatPlayer = player; 
    combatEnemy = enemy;

    fightCalculation();

}

int Scenario::rollDice(int sides) const
{
    return rand() % sides + 1; 
}

void Scenario::fightCalculation()
{
    diceRoll = rollDice(diceSize);
    hitResolution = (diceRoll + combatPlayer.totalAttackPower() >= combatEnemy.getDefensiveValue()); 

    if(hitResolution)
    {
        rawDamage = combatPlayer.getWeaponDamage(); 
        actualDamage = combatEnemy.resistanceDamage(rawDamage, combatPlayer.getWeaponDamageType()); 
    }
    else
    {
        rawDamage = 0; 
        actualDamage = 0; 
    }
}


int Scenario::getDiceRoll() const 
{
    return diceRoll; 
}


string Scenario::getHitResult() const
{
    if(hitResolution) 
    {
        return "hit";
    }
    else 
    {
        return "miss";
    }
}

int Scenario::getRawDamage() const 
{
    return rawDamage; 
}

int Scenario::getActualDamage() const
{
    return actualDamage; 
}

string Scenario::getPlayerName() const 
{
    return combatPlayer.getName(); 
}

string Scenario::getWeaponName() const
{
    return combatPlayer.getWeaponName(); 
}

string Scenario::getEnemyName() const
{
    return combatEnemy.getName();
}

