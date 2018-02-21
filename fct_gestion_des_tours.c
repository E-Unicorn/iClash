// Focntion gestion des tours
//  Droper
//
//  Created by DROPER on 15/02/2018.
//  Copyright © 2018 DROPER. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void play_turn(int **map, int size, int player, int turn);
void set_color(int text_color,int background_color);
void display_result(int **map, int size, int turn, int players);



void set_color(int text_color,int background_color)
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,background_color*16+text_color);
}



void play_turn(int **map, int size, int player, int turn)
{
    int dee = 0;

    printf("Tour n°%d \nJoueur %d", turn, player);

    dee = rand()%6+1;
    play_ia(); //tour du joueur, attention le joueur doit prendre en compte le résultat du dee pour son déplacement TODO: Toto

    display_map(map, size); //fct afficher la carte TODO: Juliette
    printf("Fin du tour %d pour le joueur %d", turn, player);

}



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
