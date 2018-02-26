/** Fonction ia test
    Droper

    Created by DROPER on 15/02/2018.
    Copyright © 2018 DROPER. All rights reserved.
**/


#include <stdio.h>
#include <stdlib.h>


// ********** PROTOTYPES **********
int ia_random(int carte[carte_x][carte_y], int statut); //ia qui joue aléatoirement
int mouvement_random(int carte[carte_x][carte_y]);      //fonction qui fait les mouvements random de l'ia_random
// ********** PROTOTYPES **********


int mouvement_random(carte[carte_x][carte_y])
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
  return carte[carte_x][carte_y]
}



int ia_random(int carte[carte_x][carte_y], int statut)  //le statut est un booléen qui montre si l'ia est en mode defense ou non
{
  int mouvement, attaque, choix;
  statut = 0;
  choix = rand() % 2;
  switch (choix)
  {
    case 1:
    /* carte[carte_x][carte_y] = */  mouvement_random();     // je sais pas si c'est avec ou sans le commentaire
      break;
    case 2:
      statut = 1;
      break;
    default:
      /* carte[carte_x][carte_y] = */ mouvement_random();
      break;
  }
  return (carte[carte_x][carte_y], statut)
}




int main()
{
  ia_random(int carte[carte_x][carte_y], int statut);
  return 0;
}
