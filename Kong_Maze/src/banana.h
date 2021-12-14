#ifndef BANANA_H
#define BANANA_H
#include "Entity.h"
class Banana: public Entity{
  public:
    Banana():Entity(){}
	Banana(int x, int y):Entity(x,y){}


};



#endif