#ifndef MOVABLEENTITY_H
#define MOVABLEENTITY_H
#include <iostream>

class MovableEntity: public Entity{
public:
  enum Direct {Right, Left, Down,Up };
  MovableEntity():Entity(),stepsize(0){}
  MovableEntity(std::size_t s):Entity(),stepsize(s){}
  MovableEntity(int e_x, int e_y,std::size_t s):Entity(e_x, e_y),stepsize(s){}
  void set_step(std::size_t s){stepsize = s; return;}

  void move(Direct d){
    if(d==Direct::Left){
        if(get_x()>0)
        {set_x(get_x()-1*stepsize);}
    }   
    else if(d==Direct::Right){
        set_x(get_x()+1*stepsize);
    }
    else if( d== Direct::Down){
        set_y(get_y()+1*stepsize);
    }
    else if( d== Direct::Up){
        if(get_y()>0)
        {set_y(get_y()-1*stepsize);}        
    }
  }
  int get_step(){return stepsize;}
 
private:
  std::size_t stepsize;
};

#endif
