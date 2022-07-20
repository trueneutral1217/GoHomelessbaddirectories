#ifndef BUTTON_H
#define BUTTON_H

#include "Texture.h"

const int title_button_width = 160;
const int title_button_height = 120;

class button
{
    public:
		//Initializes internal variables
		button();
        ~button();
		//Sets top left position
		void setPosition( int x, int y );

		int getPositionX();
		int getPositionY();

		//Handles mouse event
		int handleEvent( int gameState, std::string buttonName, SDL_Event* e );

        Texture buttonTexture;
        //if button is clicked
        bool clicked;
		//void render(texture gButtonTexture,SDL_Renderer* gRenderer);

		std::string buttonName;

	private:
		//Top left point of button image location
		SDL_Point mPosition;

};

#endif // BUTTON_H
