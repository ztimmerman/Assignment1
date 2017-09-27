
/* 
 * File:   main.cpp
 * Author: Javier <jrescobara@gmail.com> 
 *
 * Created on September 25, 2017, 3:19 PM
 */

#include <cstdlib>
#include <iostream>
#include "Weapon.h"
#include "WeaponFactory.h"

using namespace std;

void printWeapon(Weapon * weapon, double armor) {
    cout << weapon->getName() << " inflicts " << weapon->hit() << " when armor is 0" << std::endl;
    cout << weapon->getName() << " inflicts " << weapon->hit() << " when armor is " << armor << std::endl;
}

/*
 * 
 */
int main(int argc, char** argv) {

    double armor = 20;

    Weapon *weapon = WeaponFactory::getInstance()->getWeapon("sword");
    printWeapon(weapon, armor);
    delete(weapon);

    weapon = WeaponFactory::getInstance()->getWeapon("sword");
    printWeapon(weapon, armor);
    delete(weapon);


    return 0;
}

