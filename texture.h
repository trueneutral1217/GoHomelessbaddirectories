#ifndef TEXTURE_H
#define TEXTURE_H

#include "SDL.h"
#include <SDL_ttf.h>
#include "string"
#include "stdio.h"
#include "sstream"
#include "SDL_image.h"
#include <cmath>


class Texture
{
	public:
		//Initializes variables
		Texture();

		//Deallocates memory
		~Texture();

        //Loads individual image as texture
        SDL_Texture* loadTexture( std::string path,SDL_Renderer* renderer);

		bool initTexture(int SCREEN_WIDTH,int SCREEN_HEIGHT, SDL_Window* window,SDL_Renderer* renderer);

		//Loads image at specified path
		bool loadFromFile( std::string path, SDL_Renderer* renderer);

		#if defined(SDL_TTF_MAJOR_VERSION)
		//Creates image from font string
		bool loadFromRenderedText( std::string textureText, SDL_Color textColor,TTF_Font* font,SDL_Renderer* renderer );
		#endif

		//Deallocates texture
		void free();

		//Set color modulation
		void setColor( Uint8 red, Uint8 green, Uint8 blue );

		//Set blending
		void setBlendMode( SDL_BlendMode blending );

		//Set alpha modulation
		void setAlpha( Uint8 alpha );

		//Renders texture at given point
		void render( int x, int y, SDL_Rect* clip = NULL, double angle = 0.0, SDL_Point* center = NULL, SDL_RendererFlip flip = SDL_FLIP_NONE,SDL_Renderer* renderer=NULL );

		//Gets image dimensions
		int getWidth();
		int getHeight();

		std::stringstream scriptString;

	private:
		//The actual hardware texture
		SDL_Texture* texture;

		//Image dimensions
		int width;
		int height;
};

#endif // TEXTURE_H
