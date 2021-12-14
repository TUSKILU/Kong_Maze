#ifndef RENDERER_H
#define RENDERER_H

#include <vector>
#include <map>
#include "SDL.h"
#include "kong.h"

class Renderer {
 public:
  Renderer(const std::size_t screen_width, const std::size_t screen_height,
           const std::size_t grid_width, const std::size_t grid_height);
  ~Renderer();

  //Load texture
  bool Load(std::string id, char* filename);
  // functions for SDL renderer to clear windows and present 
  void Clear_win();
  void Present_win();
  // Draw texture as a Rect 
  void Draw(std::string id, int x, int y, int width, int height );
  //Draw maze
  void Draw_maze(std::string id,std::vector<std::pair<int, int> > &points, int width, int height );
  //void Drop(std::string id);
  void CleanMap();

 private:
  SDL_Window *sdl_window;
  SDL_Renderer *sdl_renderer;
  std::map<std::string, SDL_Texture*> m_TextureMap;
  
  const std::size_t screen_width;
  const std::size_t screen_height;
  const std::size_t grid_width;
  const std::size_t grid_height;
};

#endif