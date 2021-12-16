#include "game.h"
#include <iostream>
#include "SDL.h"
#include "controller.h" 
#include "renderer.h"



//instantize Load images kong  
Game::Game(int start_x,int start_y,int goal_x,int goal_y,std::size_t grid_width):kong1(start_x,start_y,grid_width),banana(goal_x,goal_y){
for(int j =0;j<9;j++){
  for(int i=0;i<9;i++){
   
   if(maze[j][i]==1){maze_vec.emplace_back(std::pair<int,int>(i,j));}
  }
}

}

Game::~Game(){

}

void Game::Run( Renderer &renderer, Controller &controller,
               std::size_t target_frame_duration) {
  std::cout << "Game Start to Run!\n";
  Uint32 title_timestamp = SDL_GetTicks();
  Uint32 frame_start;
  Uint32 frame_end;
  Uint32 frame_duration;
  int frame_count = 0;
  bool running = true;
  bool end_flag = false;//true=> 
  bool restart_flag=false;
  // Load kong image 
  char* kong_path = "../src/img/kong";
  if(! (renderer.Load("kong", kong_path))){
    std::cout<< "Load image error" << std::endl;
    return;}else{
     std::cout<< "Load image successfully" << std::endl;

  }
  //Load rock image
  char* rock_path = "../src/img/rock";
  if(! (renderer.Load("rock", rock_path))){
    std::cout<< "Load image error" << std::endl;
    return;}else{
     std::cout<< "Load image successfully" << std::endl;}
  
    //Load banana image
  char* banana_path = "../src/img/banana";
  if(! (renderer.Load("banana", banana_path))){
    std::cout<< "Load image error" << std::endl;
    return;}else{
     std::cout<< "Load image successfully" << std::endl;}
   
     //Load EndGame image
  char* End_path = "../src/img/Endgame";
  if(! (renderer.Load("end",End_path ))){
    std::cout<< "Load image error" << std::endl;
    return;}else{
     std::cout<< "Load image successfully" << std::endl;

  }

  
  while (running) {
    if(restart_flag){
    kong1.Reset();
    restart_flag = false;
    }
    frame_start = SDL_GetTicks();
    // Input, Update, Render - the main game loop.
	controller.HandleInput(running, kong1, maze); 
    renderer.Clear_win();
	renderer.Draw("banana",banana.get_x(),banana.get_y(),50,50 );
    renderer.Draw("kong",kong1.get_x(),kong1.get_y(),50,50 );
	renderer.Draw_maze("rock",maze_vec,50,50);
    
    if(controller.Goal_reach(banana,kong1.get_x(),kong1.get_y())){
      end_flag = true;
      renderer.Draw("end",160,160,320,100);
    }
    
    renderer.Present_win();
    frame_end = SDL_GetTicks();



    // Keep track of how long each loop through the input/update/render cycle
    // takes.
    frame_count++;
    frame_duration = frame_end - frame_start;

    // After every second, update the window title.
    if (frame_end - title_timestamp >= 1000) {
      //renderer.UpdateWindowTitle(score, frame_count);
      frame_count = 0;
      title_timestamp = frame_end;
    }

    // If the time for this frame is too small (i.e. frame_duration is
    // smaller than the target ms_per_frame), delay the loop to
    // achieve the correct frame rate.
    if (frame_duration < target_frame_duration) {
      SDL_Delay(target_frame_duration - frame_duration);
    }
    while(end_flag ){ 
    
        controller.End_Selection(end_flag, restart_flag,running); 
    }

  }    
  }


