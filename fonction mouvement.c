/** Fonction mouvement
    Droper

    Created by DROPER on 15/02/2018.
    Copyright © 2018 DROPER. All rights reserved.
**/


#include <stdio.h>
#include <stdlib.h>

//fct qui définie aléatoirement la position de l'obs
int aleat(int maxi) // La fonction va choisir une coordonnée de i et j au hasard
{
    return 1 + (rand() % maxi);
}



//la fonction sera un mouvement completement random pour la demo
int mouvement_random(int **map, int x, int y)
{
  int choix, a;
  a = aleat(6);
  choix = rand() %;
  for (i=0; i<a; i++)
  {
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
        if (map[y-1]==-3) {return map[x][y];}
        {
          map[x][y] = map[x][y - 1];
        }
        break;
    }
  }
  return map[x][y];
}

int main()
{
  mouvement_random(map,x,y);
  return 0;
}
