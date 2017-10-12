/* File: CrazyRandomSword.h
 * Author: Zachary Timmerman
 * Created: 10/12/17
 */

 #include <string>
 #include <stdlib.h>
 #include <time.h>
 #include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon  {
  //default number must be given
  CrazyRandomSword : Weapon("Random sword",10.0)  {
  }
  virtual ~CrazyRandomSword() {};
  virtual double hit(double armor);
};


#endif
