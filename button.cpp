#include "button.h"

button::button()
{
	mPosition.x = 0;
	mPosition.y = 0;
    buttonName = "";
    //buttonTexture = NULL;

}

button::~button()
{
    buttonTexture.free();
}

void button::setPosition( int x, int y )
{
	mPosition.x = x;
	mPosition.y = y;
}

int button::getPositionX()
{
    return mPosition.x;
}
int button::getPositionY()
{
    return mPosition.y;
}

int button::handleEvent(int gameState, std::string buttonName, SDL_Event* e )
{
	//If mouse event happened
	if( e->type == SDL_MOUSEMOTION || e->type == SDL_MOUSEBUTTONDOWN || e->type == SDL_MOUSEBUTTONUP )
	{
		//Get mouse position
		int x, y;
		SDL_GetMouseState( &x, &y );

		//Check if mouse is in button
		bool inside = true;

		//Mouse is left of the button
		if( x < mPosition.x )
		{
			inside = false;
		}
		//Mouse is right of the button
		else if( x > mPosition.x + title_button_width )
		{
			inside = false;
		}
		//Mouse above the button
		else if( y < mPosition.y )
		{
			inside = false;
		}
		//Mouse below the button
		else if( y > mPosition.y + title_button_height )
		{
			inside = false;
		}

		//Mouse is outside button
		if( !inside )
		{
			//mCurrentSprite = BUTTON_SPRITE_MOUSE_OUT;
		}
		//Mouse is inside button
		else
		{
            //std::cout << "button name: " << buttonName;

                switch( e->type )
                {
                    case SDL_MOUSEBUTTONDOWN:
                        if(buttonName=="new" && gameState==0){
                            printf("\n new game button pressed \n");
                            gameState = 1;
                        }
                        else if(buttonName=="load" && gameState==0){
                                printf("\n load game button pressed \n");
                            gameState = 2; //Note, this will need to be changed once saving game implemented
                        }
                        else if(buttonName=="credits" && gameState==0){
                            printf("\n credits button pressed \n");
                            gameState = 4;
                        }
                        else if(buttonName=="options" && gameState==0){
                            printf("\n options button pressed \n");
                            gameState = 3;
                        }
                        else if(buttonName=="back"){
                            printf("\n back button pressed \n");
                            gameState = 0;
                        }
                        else if(buttonName=="chapter1" && gameState==1){
                            printf("\n chapter 1 button pressed \n");
                            gameState = 5;
                        }
                        else if(buttonName=="chapter1" && gameState==2){
                            printf("\n chapter 1 button pressed \n");
                            gameState = 5;
                        }
                    break;
                }

		}
	}
	return gameState;
}
/*
void button::render(texture gButtonTexture,SDL_Renderer* gRenderer)
{
	//Show current button sprite
	buttonTexture = gButtonTexture;
	buttonTexture.render( mPosition.x, mPosition.y,NULL,0.0,NULL,SDL_FLIP_NONE,gRenderer );
}
*/
