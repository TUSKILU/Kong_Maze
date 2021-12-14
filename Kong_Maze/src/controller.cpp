#include "controller.h"
#include "kong.h"

#include <iostream>
#include "SDL.h"

bool Controller::Check_Collide(int x, int y,int step,int (&map)[9][9]){
	 return  map[y/step][x/step]==1? true: false; 
}

bool Controller::End_Selection(bool& end_flag,bool& restart_flag,bool &running){
  SDL_Event e;
  while (SDL_PollEvent(&e)) {
    if (e.type == SDL_QUIT) {
      end_flag = false;
      running = false;
    } else if (e.type == SDL_KEYDOWN) {
      switch (e.key.keysym.sym) {
        case SDLK_ESCAPE:
          std::cout<< "The end game is selected" << std::endl;
          end_flag = false;
          running = false;
          break;

        case SDLK_r:
          std::cout<< "Restart is pressed" << std::endl;
          end_flag = false;
          restart_flag=true;
          break;
      }
    }
  }
  }

void Controller::HandleInput(bool &running, Kong &kong, int (&map)[9][9]){
  SDL_Event e;
  int step_size = kong.get_step();
  while (SDL_PollEvent(&e)) {
    if (e.type == SDL_QUIT) {
      running = false;
    } else if (e.type == SDL_KEYDOWN) {
      switch (e.key.keysym.sym) {
        case SDLK_w:
          if(Check_Collide(kong.get_x(),kong.get_y()-1,step_size,map)){}
          else{kong.move(Kong::Direct::Up);}
          break;

        case SDLK_s:
          if(Check_Collide(kong.get_x(),kong.get_y()+step_size,step_size,map)){}
          else{kong.move(Kong::Direct::Down); }
          break;

        case SDLK_a:
          if(Check_Collide(kong.get_x()-step_size,kong.get_y(),step_size,map)){}
          else{kong.move(Kong::Direct::Left);}
          break;

        case SDLK_d:
          if(Check_Collide(kong.get_x()+step_size,kong.get_y(),step_size,map)){}
          else{kong.move(Kong::Direct::Right);}
          break;
      }
    }
  }
}

bool Controller::Goal_reach(Banana& banana, int x,int y ){
	return (banana.get_x()==x && banana.get_y() == y) ? true: false; 


}


