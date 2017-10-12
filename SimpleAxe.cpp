/* File: CommonSpear.cpp
 * Author: Zachary Timmerman
 * Created 10/12/17
 */

 #include "SimpleAxe.h"

 double SimpleAxe::hit (double armor) {
   double damage;
   if (armor > 0 && armor < 20) {
     return hitPoints;
   }  else  {
     damage = hitPoints - armor;
     if (damage < 0)  {
       return 0;
     } else {
       return damage;
     }
   }
 }
