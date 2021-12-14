#include <iostream>

#include "game.h"
#include "renderer.h"
#include "controller.h"

int main() {
  // Game background setting
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{50};
  constexpr std::size_t kGridHeight{32};
  // Object starting position 
  constexpr int Kong_sx{0};
  constexpr int Kong_sy{1};
  constexpr int Goal_x{50};
  constexpr int Goal_y{150};
  
  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
  Controller controller;
  Game game(Kong_sx,Kong_sy,Goal_x,Goal_y ,kGridWidth);
  game.Run( renderer,controller, kMsPerFrame);
  std::cout << "Game has terminated successfully!\n";

  return 0;
}