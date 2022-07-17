#include "particle.h"

void Particle::createParticle(SDL_Renderer* renderer)
{

    //Set offsets
    partX = 20 +  (rand() % 740) ;
    partY = 20 +  (rand() % 540) ;
    fillRect = {partX,partY,10,10};

    //Initialize animation
    frame = rand() % 50;

    //Set type
    switch( rand() % 8 )
    {
        case 0: SDL_SetRenderDrawColor( renderer, 0xFF, 0x00, 0x00, 0xFF );renderColor=0; break;//red
        case 1: SDL_SetRenderDrawColor( renderer, 0x00, 0xFF, 0x00, 0xFF );renderColor=1; break;//green
        case 2: SDL_SetRenderDrawColor( renderer, 0x00, 0x00, 0xFF, 0xFF );renderColor=2; break;//blue
        case 3: SDL_SetRenderDrawColor( renderer, 0xFF, 0xFF, 0x00, 0xFF );renderColor=3; break;//yellow
        case 4: SDL_SetRenderDrawColor( renderer, 0x00, 0x00, 0x00, 0xFF );renderColor=4; break;//black
        case 5: SDL_SetRenderDrawColor( renderer, 0xFF, 0xFF, 0xFF, 0xFF );renderColor=5; break;//white
        case 6: SDL_SetRenderDrawColor( renderer, 0xFF, 0x00, 0xFF, 0xFF );renderColor=6; break;//lavender
        case 7: SDL_SetRenderDrawColor( renderer, 0x00, 0xFF, 0xFF, 0xFF );renderColor=7; break;//teal

    }
}

void Particle::render(SDL_Renderer* renderer, int renderColor)
{
    //Show image
    switch( renderColor )
    {
        case 0: SDL_SetRenderDrawColor( renderer, 0xFF, 0x00, 0x00, 0xFF ); break;//red
        case 1: SDL_SetRenderDrawColor( renderer, 0x00, 0xFF, 0x00, 0xFF ); break;//green
        case 2: SDL_SetRenderDrawColor( renderer, 0x00, 0x00, 0xFF, 0xFF ); break;//blue
        case 3: SDL_SetRenderDrawColor( renderer, 0xFF, 0xFF, 0x00, 0xFF ); break;//yellow
        case 4: SDL_SetRenderDrawColor( renderer, 0x00, 0x00, 0x00, 0xFF ); break;//black
        case 5: SDL_SetRenderDrawColor( renderer, 0xFF, 0xFF, 0xFF, 0xFF ); break;//white
        case 6: SDL_SetRenderDrawColor( renderer, 0xFF, 0x00, 0xFF, 0xFF ); break;//lavender
        case 7: SDL_SetRenderDrawColor( renderer, 0x00, 0xFF, 0xFF, 0xFF ); break;//Teal
    }

    SDL_RenderFillRect( renderer, &fillRect );
    //Animate
    frame++;
}

bool Particle::isDead()
{
    return frame > 60;
}

