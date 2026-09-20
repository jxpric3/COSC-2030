#include <iostream> 
#include <cstdlib> 
#include "Scenario.h"

using namespace std; 

int main()
{   
    srand(7); 

    Weapon testWeapon("acid laced whip", "Pain and Strife", "acid", 6, 8);
    Player testPlayer("Grogu", "Warrior", 9, testWeapon);

    Enemy fireStinky("Fire Stinky", "Goblin", "fire", 9, 4);
    Enemy shankySparkles("Shanky Sparkles", "Micro Fairy", "acid", 6, 2);
    Enemy gloopy("Gloopy", "Dungeon Ooze", "acid", 12, 22);
    Enemy pebbles("Pebbles", "Rock Golum", "none", 36, 0);

    Scenario fight1(testPlayer, fireStinky); 

    cout << "----------------------------------------" << endl;
    cout << "Fight Results" << endl; 
    cout << fight1.getPlayerName() << " swings " << fight1.getWeaponName() << " at " << fight1.getEnemyName() << endl; 
    cout << "The Roll Came out: " << fight1.getDiceRoll() << endl; 
    cout << "Does the attack hit or miss: " << fight1.getHitResult() << endl; 
    cout << "Attack swung for " << fight1.getRawDamage() << endl; 
    cout << "Resistance Calculated final damage: " << fight1.getActualDamage() << endl; 
    
    Scenario fight2(testPlayer, shankySparkles);

    cout << "----------------------------------------" << endl;
    cout << "Fight Results" << endl;
    cout << fight2.getPlayerName() << " swings " << fight2.getWeaponName() << " at " << fight2.getEnemyName() << endl;
    cout << "The Roll Came out: " << fight2.getDiceRoll() << endl;
    cout << "Does the attack hit or miss: " << fight2.getHitResult() << endl;
    cout << "Attack swung for " << fight2.getRawDamage() << endl;
    cout << "Resistance Calculated final damage: " << fight2.getActualDamage() << endl;

    Scenario fight3(testPlayer, gloopy);

    cout << "----------------------------------------" << endl;
    cout << "Fight Results" << endl;
    cout << fight3.getPlayerName() << " swings " << fight3.getWeaponName() << " at " << fight3.getEnemyName() << endl;
    cout << "The Roll Came out: " << fight3.getDiceRoll() << endl;
    cout << "Does the attack hit or miss: " << fight3.getHitResult() << endl;
    cout << "Attack swung for " << fight3.getRawDamage() << endl;
    cout << "Resistance Calculated final damage: " << fight3.getActualDamage() << endl;

    Scenario fight4(testPlayer, pebbles);

    cout << "----------------------------------------" << endl;
    cout << "Fight Results" << endl;
    cout << fight4.getPlayerName() << " swings " << fight4.getWeaponName() << " at " << fight4.getEnemyName() << endl;
    cout << "The Roll Came out: " << fight4.getDiceRoll() << endl;
    cout << "Does the attack hit or miss: " << fight4.getHitResult() << endl;
    cout << "Attack swung for " << fight4.getRawDamage() << endl;
    cout << "Resistance Calculated final damage: " << fight4.getActualDamage() << endl;

    
    
    return 0; 
}