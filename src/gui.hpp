#pragma once

#include <stdio.h>
#include <stdarg.h>
#include <vector>
#include <string>

#include <vita2d.h>

#include "common.hpp"

namespace Gui
{
    // Load font from file
    void loadFont();

    // Enum for positioning text
    enum class Position
    {
        normal = 0,
        centered = 1,
        centeredX = 2,
        centeredY = 3,
        alignRight = 4,
        alignTop = 5,
        alignTopRight = 6
    };

    // Text drawing functions
    void drawText( int x, int y, unsigned int size, const char *text );
    void drawTextf( int x, int y, unsigned int size, const char *text, ... );
    void drawText_color( int x, int y, unsigned int size, unsigned int color, const char *text );
    void drawTextf_color( int x, int y, unsigned int size, unsigned int color, const char *text, ... );
    void drawText_position( Position p, int x, int y, unsigned int size, const char *text );
    void drawTextf_position( Position p, int x, int y, unsigned int size, const char *text, ... );
    void drawText_color_position( Position p, int x, int y, unsigned int size, unsigned int color, const char *text );
    void drawTextf_color_position( Position p, int x, int y, unsigned int size, unsigned int color, const char *text, ... );

    extern float FONT_SCALE;
    extern unsigned int MAIN_FONT_COLOR;

    // A separate font for sizes 1-99
    extern vita2d_font *mainFont[ 99 ];
}