/** Fonction ia test
    Droper

    Created by DROPER on 15/02/2018.
    Copyright © 2018 DROPER. All rights reserved.
**/


#include <stdio.h>
#include <stdlib.h>


// ********** PROTOTYPES **********
int ia_random(int carte[][], int carte_x, int carte_y); //ia qui joue aleatoirement
int mouvement_random(int carte[][], int carte_x, int carte_y);      //fonction qui fait les mouvements random de l'ia_random
// ********** PROTOTYPES **********


int mouvement_random(int carte[][], int carte_x, int carte_y)
{
  int choix;
  choix = rand() %;
  switch(choix)
  {
    case 1:
      carte[carte_x][carte_y] = carte[carte_x + 1][carte_y];
      break;
    case 2:
      carte[carte_x][carte_y] = carte[carte_x - 1][carte_y];
      break;
    case 3:
      carte[carte_x][carte_y] = carte[carte_x][carte_y + 1];
      break;
    case 4:
      carte[carte_x][carte_y] = carte[carte_x][carte_y - 1];
      break;
  }
  return carte[carte_x][carte_y];
}



int ia_random(int carte[][], int carte_x, int carte_y)  //le statut est un booleen qui montre si l'ia est en mode defense ou non
{
  int mouvement, attaque, choix;
  mouvement_random(int carte[][], int carte_x, int carte_y);
  return (carte[carte_x][carte_y]);
}




int main()
{
  ia_random(int carte[][], int carte_x, int carte_y);
  return 0;
}
