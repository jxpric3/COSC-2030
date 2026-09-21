#include <string> 
#include "Weapon.h"


using namespace std; 

Weapon::Weapon()
{
    weaponAttackBonus = 0; 
    weaponDamage = 0;
}

Weapon::Weapon(string type, string name, string damageType, int attackBonus, int damage)
{
    weaponType = type; 
    weaponName = name; 
    weaponDamageType = damageType; 
    weaponAttackBonus = attackBonus; 
    weaponDamage = damage; 
}

string Weapon::getWeaponType() const
{
    return weaponType; 
}

string Weapon::getWeaponName() const
{
    return weaponName;
}

string Weapon::getDamageType() const 
{   
    return weaponDamageType;
}

int Weapon::getAttackBonus() const
{
    return weaponAttackBonus; 
}

int Weapon::getDamage() const
{
    return weaponDamage; 
}