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
      if (map[x+1]==-3) {return map[x][y];}
      else
      {
        map[x][y] = map[x + 1][y];
      }
      break;
    case 2:
      if (map[x-1]==-3) {return map[x][y];}
      else
      {
        map[x][y] = map[x - 1][y];
      }
      break;
    case 3:
      if (map[y+1]==-3) {return map[x][y];}
      else
      {
        map[x][y] = map[x][y + 1];
      }
      break;
    case 4:
      if (map[y-1]==0) {return map[x][y];}
      {
        map[x][y] = map[x][y - 1];
      }
      break;
  }
  return map[x][y];
}
