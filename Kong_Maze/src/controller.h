#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "banana.h"
#include "kong.h"
class Controller {
 public:
  void HandleInput(bool &running,Kong &kong,int (&map)[9][9]);
  bool Check_Collide(int x, int y,int step, int (&map)[9][9]);
  bool End_Selection(bool& end_flag,bool& restart_flag,bool &running);
  bool Goal_reach(Banana& banana, int x,int y );
 private:

};

#endif