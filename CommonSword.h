/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CommonSword.h
 * Author: Javier <jrescobara@gmail.com>
 *
 * Created on September 25, 2017, 3:31 PM
 */

#include <string>
#include "Weapon.h"

#ifndef COMMONSWORD_H
#define COMMONSWORD_H

class CommonSword : public Weapon {
public:

    CommonSword() : Weapon("CommonSword", 50.0) {
    }
    virtual ~CommonSword() {}; 
    virtual double hit(double armor);

};

#endif /* COMMONSWORD_H */

