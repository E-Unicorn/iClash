/** Fonction mouvement
    Droper

    Created by DROPER on 15/02/2018.
    Copyright © 2018 DROPER. All rights reserved.
**/


#include <stdio.h>
#include <stdlib.h>


//la fonction sera un mouvement completement random pour la demo

int mouvement_random(int **map, int x, int y)
{
  int choix;
  choix = rand() %;
  switch(choix)
  {
    case 1:
      map[x][y] = map[x + 1][y];
      break;
    case 2:
      map[x][y] = map[x - 1][y];
      break;
    case 3:
      map[x][y] = map[x][y + 1];
      break;
    case 4:
      map[x][y] = map[x][y - 1];
      break;
  }
  return map[x][y];
}
