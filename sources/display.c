#include "../headers/constant.h"

void display_map(SDL_Surface *screen, int **map)
{
    int i, j;
    SDL_Rect position;
    SDL_Surface *ground = NULL, *wall = NULL, *bombe = NULL, *explosion = NULL; // Sprites

    Uint32 colorkey = SDL_MapRGB(screen->format, 0, 225, 0);


    ground = SDL_LoadBMP("images/ground.bmp");
    wall = SDL_LoadBMP("images/wall.bmp");
    bombe = SDL_LoadBMP("images/bombe.bmp");
    explosion = SDL_LoadBMP("images/explosion.bmp");

    SDL_SetColorKey(bombe, SDL_SRCCOLORKEY, colorkey);
    SDL_SetColorKey(explosion, SDL_SRCCOLORKEY, colorkey);

    for(i = 0; i < NBR_BLOCK_Y; i++)
    {
        for(j = 0; j < NBR_BLOCK_X; j++)
        {
            position.x = j * BLOCK_SIZE;
            position.y = i * BLOCK_SIZE;

            switch(map[i][j])
            {
                case EMPTY:
                    SDL_BlitSurface(ground, NULL, screen, &position);
                    break;
                case WALL:
                    SDL_BlitSurface(wall, NULL, screen, &position);
                    break;
                case BOMBE:
                    SDL_BlitSurface(bombe, NULL, screen, &position);
                    break;
                case EXPLOSION:
                    SDL_BlitSurface(explosion, NULL, screen, &position);
                    break;

            }
        }
    }

    SDL_Flip(screen);

    SDL_FreeSurface(ground);
    SDL_FreeSurface(wall);
}
