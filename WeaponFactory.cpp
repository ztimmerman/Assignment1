/*
 * File:   WeaponFactory.cpp
 * Author: Javier <jrescobara@gmail.com>
 *
 */

#include <string>
#include <stddef.h>
#include "WeaponFactory.h"
#include "CommonSword.h"
#include "CommonSpear.h"
#include "SimpleAxe.h"

WeaponFactory* WeaponFactory::instance = NULL;

WeaponFactory * WeaponFactory::getInstance() {
    if (!instance) {
        instance = new WeaponFactory();
    }
    return instance;
}

Weapon * WeaponFactory::getWeapon(std::string name) {
    if (name.compare("sword") == 0) {
        return new CommonSword();
    }

    if (name.compare("spear") == 0) {
        return new CommonSpear();
    }

    if (name.compare("axe") == 0) {
      return new SimpleAxe();
    }

    throw "Invalid weapon";
}
