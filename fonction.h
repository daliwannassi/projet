#include <stdio.h> 
#include <SDL/SDL.h> 
#include <SDL/SDL_image.h> 
#include <SDL/SDL_mixer.h> 
#define SCREEN_W 1440
#define SCREEN_H 600
#define SCREEN_W2 1440
#define SCREEN_H2 600
typedef struct { 
SDL_Surface *imgbackg;
 SDL_Rect posbackg; 
 SDL_Rect posbackg2; 
 SDL_Rect camera; 
 SDL_Rect camera2; 
 Mix_Music *sound; 
 }background;
 void initBackg (background *b);
  void initBackg2 (background *b);
   void afficheBackg (background b,SDL_Surface *ecran); 
   void afficheBackg2 (background b,SDL_Surface *ecran); 
   void scrolling (background *b,int d); 
   #endif
