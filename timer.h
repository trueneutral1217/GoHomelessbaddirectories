#ifndef TIMER_H
#define TIMER_H

#include "Texture.h"

//The application time based timer
class timer
{
    public:
		//Initializes variables
		timer();

		//The various clock actions
		void start();
		void stop();
		void pause();
		void unpause();

		//Gets the timer's time
		Uint32 getTicks();

		//adds ticks to the timer
		void setTicks(Uint32 x);

		//Checks the status of the timer
		bool isStarted();
		bool isPaused();

    private:
		//The clock time when the timer started
		Uint32 startTicks;

		//The ticks stored when the timer was paused
		Uint32 pausedTicks;

		//The timer status
		bool paused;
		bool started;
};

#endif // TIMER_H
