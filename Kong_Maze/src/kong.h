#ifndef KONG_H
#define KONG_H
#include "Entity.h"
#include "MovableEntity.h"
class Kong: public MovableEntity{
public:
	Kong():MovableEntity(){};
  	Kong(std::size_t s):MovableEntity(s){};
    Kong(int e_x, int e_y,std::size_t s):MovableEntity(e_x*s, e_y*s,s), reset_x(e_x*s), reset_y(e_y*s){}
    void Reset(){
      set_x(reset_x);
      set_y(reset_y);
    }
  	//void update();
private: 
  	int reset_x;
  	int reset_y;  
};


#endif