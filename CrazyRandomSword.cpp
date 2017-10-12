/* File: CrazyRandomSword.cpp
 * Author: Zachary Timmerman
 * Created: 10/12/17
 */

 #include "CrazyRandomSword.h"

 double CrazyRandomSword::hit(double armor) {
   srand(time(NULL));
   double damage = rand() % 90 + 10.0 - (armor - (rand() %
    static_cast<int>(floor(armor * 0.5))));
   if (damage < 0)  {
     return 0;
   } else {
     return damage;
   }
 }
