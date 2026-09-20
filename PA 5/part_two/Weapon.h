#ifndef WEAPON_H
#define WEAPON_H

#include <string>
using namespace std;

class Weapon
{
    private: 
        string weaponType; 
        string weaponName; 
        string weaponDamageType; 
        int weaponAttackBonus;
        int weaponDamage; 

    public: 
        
        Weapon(); 
        Weapon(string type, string name, string damageType, int attackBonus, int damage); 

        string getWeaponType() const; 
        string getWeaponName() const; 
        string getDamageType() const; 
        int getAttackBonus() const; 
        int getDamage() const; 


};

#endif