#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <random>
#include <utility>
#include "SDL.h"
#include "controller.h"
#include "renderer.h"
#include "kong.h"
#include "banana.h"
class Game {
 public:

  Game(int start_x,int start_y,int goal_x,int goal_y,std::size_t grid_width);
  Game(std::size_t grid_width);
  
  ~Game();
  void Run( Renderer &renderer, Controller &controller,
           std::size_t target_frame_duration);
  

  
 private:
  Kong kong1;
  Banana banana;
  int  maze[9][9]=  
 {
 {1,1,1,1,1,1,1,1,1},
 {0,0,0,0,0,0,0,0,1},
 {1,1,1,0,1,1,1,1,1},
 {1,0,1,0,0,0,0,0,1},
 {1,0,1,1,1,1,1,0,1},
 {1,0,0,0,0,0,1,0,1},
 {1,1,1,1,1,0,1,0,1},
 {1,0,0,0,0,0,0,0,1},
 {1,1,1,1,1,1,1,1,1}};  
  std::vector<std::pair<int, int> > maze_vec; //store the pair occupied by rocks

};

#endif