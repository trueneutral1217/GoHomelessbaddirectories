#ifndef CHAPTER_H
#define CHAPTER_H

#include "Texture.h"

//number of dialog lines for chapter 1.
const int TOTAL_SCRIPTS = 8;
//number of dialog pages for chapter 1.
const int TOTAL_PAGES = 8;

class chapter
{
    public:
        //constructor
        chapter();
        //destructor
        ~chapter();

        //Texture scriptTexture[TOTAL_PAGES][TOTAL_SCRIPTS];

        std::stringstream scriptString[TOTAL_PAGES][TOTAL_SCRIPTS];

        //Load Strings
        bool loadStrings();

    private:

};

#endif // CHAPTER_H
