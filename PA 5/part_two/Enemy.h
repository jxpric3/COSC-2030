#ifndef ENEMY_H
#define ENEMY_H

#include <string>
using namespace std;

class Enemy
{
    private: 
        string enemyName; 
        string enemyType; 
        string resistanceType; 
        int enemyDefense; 
        int enemyResistValue; 

    public: 
        Enemy(); 
        Enemy(string eName, string eType, string rType, int defValue, int rValue);

        string getName() const; 
        string getEnemyType() const; 
        string getResistanceType() const; 
        
        int getDefensiveValue() const; 
        int getResistanceValue() const; 

        int resistanceDamage(int rawDamage, string damageType) const; 



};

#endif 