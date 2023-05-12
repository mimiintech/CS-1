#include <iostream>
#include <vector>
using namespace std; 
struct weapon{
string name;
int damage;
int cost;
void info() {
    cout << name << " damage: up to" 
    << damage << " cost: " << cost 
    << " health points.\n";
}
};
struct Badguy {
    string name;
    int health = 100;
};
struct Hero {
    string name;
    int health = 100;
    weapon weapons[3];
    void attack(weapon w, Badguy &bg) {
        int attack_damage = (rand()%w.damage) +1;
        cout << "attack power: " << attack_damage << endl;
        bg.health -= attack_damage;
        health -= w.cost;
    }
};
weapon createWeapon(string wName, int wDamage, int wCost) {
   weapon temp;
   temp.name = wName;
   temp.damage = wDamage;
   temp.cost = wCost;
   return temp;
}
int main() {
    cout << "______________CS 135 HERO_____________\n" << "Enter hero name\n";
    Hero h1;
    string heroName;
    getline(cin, heroName);
    h1.name = heroName;
    int index = 0;
    do {
        cout << "Enter weapon name:\n";
        string weaponName;
        getline(cin, weaponName);
        cout << "Max Damage will affect weapon cost" << endl;
        int weaponDamage;
        cin >> weaponDamage;
        h1.weapons[index] = createWeapon(weaponName, weaponDamage, weaponDamage/3);
        index++;
        cin.clear();
        cin.ignore(256, '\n');
    } while (index < 3);
    cout << "Done!\n" << endl;
    Badguy b1;
    string bgName;
    getline(cin, bgName);
    b1.name = bgName;
    do {
        cout << h1.name << "Health: " << h1.health << "\t\t\t\t\t\t" << b1.name << "Health: " << b1.health << endl;
        cout << "Select a weapon:\n";
        for(int i = 0; i < 3; i++) {
            cout << i + 1;
            h1.weapons[i].info();
        }
    int selection;
    cin >> selection;
    h1.attack(h1.weapons[selection-1], b1);
    cout << "Bad guy attack , -5\n";
    h1.health -= 5;
    } while (h1.health > 0 && b1.health > 0);
    cout << "GAME OVER" << endl;
    cout << h1.name << "Health: " << h1.health << "\t\t\t\t\t\t" << b1.name << "Health: " << b1.health << endl;
if (h1.health <= 0) {
    cout << "REST IN PEACE BRO" << h1.name << endl;
} else {
    cout << h1.name << "saved the day!\n";
}
    return 0;
}