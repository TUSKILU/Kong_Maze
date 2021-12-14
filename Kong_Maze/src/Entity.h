#ifndef ENTITY_H
#define ENTITY_H


class Entity{
public:
  Entity():x(0),y(0){}
  Entity(int e_x, int e_y):x(e_x),y(e_y){}

  void set_x(int new_x){x = new_x; return;}
  void set_y(int new_y){y = new_y; return;}
  
  int get_x(){return x;}
  int get_y(){return y;}

private:
  int x;
  int y;
  
};
#endif
