/* File: SimpleAxe.h
 * Author: Zachary Timmerman
 * Created 10/12/17
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

/* Describes behavior of Simple Axe weapon. HP = 60. If armor > 0 && armor < 20,
 * axe ignores all armor points.
 */

class SimpleAxe : public Weapon {
  SimpleAxe : Weapon("Simple axe",60.0) {
  }
  virtual ~SimpleAxe()  {};
  virtual double hit(double armor);
};

#endif  //SIMPLEAXE_H
