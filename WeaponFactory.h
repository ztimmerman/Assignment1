/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   WeaponFactory.h
 * Author: Javier <jrescobara@gmail.com>
 *
 * Created on September 25, 2017, 3:25 PM
 */
#include "Weapon.h"

#ifndef WEAPONFACTORY_H
#define WEAPONFACTORY_H

class WeaponFactory{
public:    
    Weapon *getWeapon(std::string name);
    static WeaponFactory* getInstance();    
    ~WeaponFactory(){}    
private:
    static WeaponFactory *instance;
    WeaponFactory(){};

}; 

#endif /* WEAPONFACTORY_H */

