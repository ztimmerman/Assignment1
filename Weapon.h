/* 
 * File:   Weapon.h
 * Author: Javier <jrescobara@gmail.com>
 *
 * Created on September 25, 2017, 3:21 PM
 */

#include <string>

#ifndef WEAPON_H
#define WEAPON_H

class Weapon {
protected:
    std::string name;
    double hitPoints;    
public:
    Weapon(std::string name, double hitPoints) : name(name), hitPoints(hitPoints){};
    virtual ~Weapon() {};
    std::string getName();
    virtual double hit(double armor) = 0;
    double hit();
};


#endif /* WEAPON_H */

