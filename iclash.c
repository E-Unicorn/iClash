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

void set_color(int text_color,int background_color);

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


    //
    // int a[22][22];
    // int i,j;
    //
    // for(i = 0 ; i <= 21 ; i++)
    // {
    //     for(j = 0 ; j <= 21 ; j++)
    //     {
    //         if( i == 0 || i == 21)
    //         {
    //             a[i][j] = '_';
    //         }
    //         if( j == 0 || j == 21)
    //         {
    //             a[i][j] = '|';
    //         }
    //     }
    //     printf("\n");
    // }
    // printf(a); // attention on ne peut pas afficher un tableau
    return 0;

}


void set_color(int text_color,int background_color)
{
        HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,background_color*16+text_color);
}

