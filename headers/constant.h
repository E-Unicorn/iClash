#ifndef CONSTANT
    #define CONSTANT

    #include <stdlib.h>
    #include <stdio.h>
    #include <SDL/SDL.h>
    #include <time.h>

    // Map items
    #define EMPTY 0
    #define WALL 1
    #define BOMBE 2
    #define EXPLOSION 3
    #define CHARACTER 4

    // others
    #define BOMBE_RANGE 10

    // Size of the Map
    #define BLOCK_SIZE 32
    #define NBR_BLOCK_X 30
    #define NBR_BLOCK_Y 30
    #define SCREEN_WIDTH NBR_BLOCK_X * BLOCK_SIZE
    #define SCREEN_HEIGHT NBR_BLOCK_Y * BLOCK_SIZE


#endif
