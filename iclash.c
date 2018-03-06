//
//  main.c
//  Droper
//
//  Created by DROPER on 15/02/2018.
//  Copyright © 2018 DROPER. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int aleat(int maxi);
void init_obs(int taille_x, int taille_y);
int **crea_map(int size, int players);
void play_turn(int **map, int size, int player, int turn);
void display_result(int **map, int size, int turn, int players);


int main()
{
    int choice;

    do
    {
        set_color(11, 7);
        printf("                                                 ###iClash###                                       ");

        printf("\n");
        set_color(15, 0);

        printf("\n Bienvenue dans le jeu iClash ! \nLes regles sont tres simples, il faut rester en vie le plus longtemps possible. Pour cela chaque joueur pourra se deplacer d'une à six cases par tour. En plus les joueurs pourront attaquer leurs adversaires pour leur oter la vie. A chaque tour la carte va retrecir, par consequent pour qu'un joueur soit elimine il faut soit qu'il sorte de la carte soit qu'un autre joueur le tue. \n");

        printf("1.Nouvelle Partie\n2.Resultat Derniere Partie\n3.Commande\n4. Sortie\n-> ");
        scanf("%d", &choice);

    }while((choice < 1) || (choice > 4));

    switch (choice)
    {
        case 1:
            //TODO: implementer la fonction de jeu
            //game();
            break;
        case 2:
            //TODO: implementer une fonction qui affiche une carte sauvegardé
            //load_game();
            break;
        case 3:
            //TODO: ecrire les commandes dans un fichier txt et l'afficer ici
            //dispay_help();
            break;
        case 4:
            return 0;
            break;
        default:
            printf("ERROR\n");
            break;
    }
    return 0;

}



//fct qui crée la carte
int **crea_map(int size_y, int size_x)
{
	int **map = malloc(size_y * sizeof(int*)); // map prend size * la taille d'un tableau de int (int*)
	int i,j;

	for(i = 0; i < size; i++)
	{
		map[i] = malloc(size_x * sizeof(int)); // map[i] (la ligne du tableau) prend size case de int
	}

	return map; // On renvoit la carte initialisé avec la bonne taille
}


//fct qui définie aléatoirement la position de l'obs
int aleat(int maxi) // La fonction va choisir une coordonnée de i et j au hasard
{
    return 1 + (rand() % maxi);
}


//fct qui place les obs sur la carte
void init_obs(int size_x, int size_y)
{
     int k;
     int nbr_obs = 40;

     for(k = 1; k <= nombre_obs; k++)// On distribu les obstacles dans le tableau aléatoirement
     {
         i = aleat(taille_x);
         j = aleat(taille_y);
         if(tableau[i][j] != -3) // La valeur -3 représente l'obstacle
         {
             tableau[i][j] = -3;
         }
         else
         {
             k--;
         }
     }
 }


 //fct qui définie un tour type
 void play_turn(int **map, int size, int player, int turn)
 {
     printf("Tour n°%d \nJoueur %d", turn, player);

     play_ia(); //tour du joueur, attention le joueur doit prendre en compte le résultat du dee pour son déplacement TODO: Toto

     display_map(map, size); //fct afficher la carte TODO: Juliette
     printf("Fin du tour %d pour le joueur %d", turn, player);

 }


 //fct qui affiche les résultats finaux
 void display_result(int **map, int size, int turn, int players)
 {
     int i,j = players, rank = 1;

     printf("                                ##########CARTE FINALE##########                                \n");
     display_map(map,size);

     printf("En %d tours, c'est le joueur %d qui gagne\n");

     printf("                                ###CLASSEMENT DES JOUEURS###                                \n");

     for(i = 0 ; i <= players*2 ; i++)
     {
         if( i % 2 == 0)
         {
             printf("________________________");
         }
         if( i % 2 != 0)
         {
             printf("| ");

             switch (rank)
             {
                 case 1:
                     set_color(14, 0);
                     printf("place %2d", rank);
                     set_color(15, 0);
                     break;
                 case 2:
                     set_color(8, 0);
                     printf("place %2d", rank);
                     set_color(15, 0);
                     break;
                 case 3:
                     set_color(4, 0);
                     printf("place %2d", rank);
                     set_color(15, 0);
                     break;
                 default :
                     printf("place %2d", rank);
                     break;
             }

             printf(" | player %2d |", score[j]); //Le tableau score doit etre initialise dans la fonction de jeu

             j--;
             rank++;
         }

         printf("\n");
     }

 }
