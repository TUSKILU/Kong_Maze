#include "renderer.h"
#include <iostream>
#include <string>

Renderer::Renderer(const std::size_t screen_width,
                   const std::size_t screen_height,
                   const std::size_t grid_width, const std::size_t grid_height)
    : screen_width(screen_width),
      screen_height(screen_height),
      grid_width(grid_width),
      grid_height(grid_height) {
  // Initialize SDL
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    std::cerr << "SDL could not initialize.\n";
    std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
  }

  // Create Window
  sdl_window = SDL_CreateWindow("Feed Kong!!!!", SDL_WINDOWPOS_CENTERED,
                                SDL_WINDOWPOS_CENTERED, screen_width,
                                screen_height, SDL_WINDOW_SHOWN);

  if (nullptr == sdl_window) {
    std::cerr << "Window could not be created.\n";
    std::cerr << " SDL_Error: " << SDL_GetError() << "\n";
  }

  // Create renderer
  sdl_renderer = SDL_CreateRenderer(sdl_window, -1, SDL_RENDERER_ACCELERATED);
  if (nullptr == sdl_renderer) {
    std::cerr << "Renderer could not be created.\n";
    std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
  }
        
  SDL_SetRenderDrawColor(sdl_renderer, 0x1E, 0x1E, 0x1E, 0xFF);
  SDL_RenderClear(sdl_renderer);
   
  SDL_RenderPresent(sdl_renderer);
}

Renderer::~Renderer() {
  CleanMap();
  SDL_DestroyWindow(sdl_window);
  SDL_Quit();
}

bool Renderer::Load(std::string id, char* filename){
  SDL_Surface* surface = SDL_LoadBMP(filename);
  if(surface == nullptr){
   	std::cout<<"Fail to load surface:"<<filename<<" "<<SDL_GetError()<< std::endl; 
    return false;
  }
  
  SDL_Texture* texture = SDL_CreateTextureFromSurface(sdl_renderer,surface);
 if(texture == nullptr){
   	std::cout<<"Fail to load texture:"<<filename<<" "<<SDL_GetError()<< std::endl; 
   return false;
  }
  m_TextureMap[id] = texture;
  return true;
  
  

}
void Renderer::Clear_win(){
  SDL_SetRenderDrawColor(sdl_renderer, 0x1E, 0x1E, 0x1E, 0xFF);
  SDL_RenderClear(sdl_renderer);
}

void Renderer::Draw(std::string id,int x, int y, int width, int height ){

  SDL_Rect srcRect = {0,0,width, height};
  SDL_Rect dstRect = {x,y, width, height};
  SDL_RenderCopy(sdl_renderer, m_TextureMap[id],&srcRect,&dstRect);

}
void Renderer::Draw_maze(std::string id,std::vector<std::pair<int, int> > &points, int width, int height ){

  for(std::pair<int, int>& p: points){
  SDL_Rect srcRect = {0,0,width, height};
  SDL_Rect dstRect = {p.first*grid_width,p.second*grid_width, width, height};
  SDL_RenderCopy(sdl_renderer, m_TextureMap[id],&srcRect,&dstRect);
  }

}
void Renderer::Present_win(){
   SDL_RenderPresent(sdl_renderer);
}
void Renderer::CleanMap(){
 

  for(auto & it : m_TextureMap){
  SDL_DestroyTexture(it.second);
  }
  
  m_TextureMap.clear();
  std::cout << "The texture map is cleaned"<<std::endl;
  
}