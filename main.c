#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <unistd.h>

static const int large = 800;
static const int haut = 600;

int main()//int argc, char *argv[])
{
  //char *str = NULL;
  //SDL_Surface *ecran = NULL;
  SDL_Window *window;
  SDL_Renderer *render;
  
  SDL_Init(SDL_INIT_VIDEO);

  window = SDL_CreateWindow("Bombe", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, large, haut, -1);
  render = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

  // while(1){
  //   scanf("str");


    

    
  // }
  

  SDL_SetRenderDrawColor(render, 0, 255, 0, 255);
    SDL_Delay(6000);
  

  SDL_RenderClear(render);
  SDL_RenderPresent(render);

  SDL_DestroyRenderer(render);
  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;

}
