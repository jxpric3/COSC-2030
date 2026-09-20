#include <string> 
#include "Enemy.h" 

using namespace std; 

Enemy::Enemy()
{
    enemyDefense = 0; 
    enemyResistValue = 0; 
}

Enemy::Enemy(string eName, string eType, string rType, int defValue, int rValue)
{
    enemyName = eName; 
    enemyType = eType; 
    resistanceType = rType; 
    enemyDefense = defValue; 
    enemyResistValue = rValue; 
}

string Enemy::getName() const
{
    return enemyName; 
}

string Enemy::getEnemyType() const
{
    return enemyType; 
}

string Enemy::getResistanceType() const
{
    return resistanceType;
}

int Enemy::getDefensiveValue() const
{
    return enemyDefense;
}

int Enemy::getResistanceValue() const 
{
    return enemyResistValue; 
}

int Enemy::resistanceDamage(int rawDamage, string damageType) const
{
    int result = 0; 
    if(damageType == resistanceType)
    {
        result = rawDamage - enemyResistValue; 
        if (result < 0)
        {
            result = 0;
        }
    }
    else
    {
        result = rawDamage; 
    }

    return result; 
}
