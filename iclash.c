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
        printf("                            ###iClash###                                \n");
        set_color(15, 0);
    }while((choice =! 1) || (choice =! 2));


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

// void init_obs(int taille_x, int taille_y)
// {
//     int k;
//     for(k=1; k<=nombre_mines; k++)              //On distribu les obstacles dans le tableau aléatoirement
//     {
//         i=aleat(taille_x); j=aleat(taille_y);
//         if(tableau[i][j] != -3)                 //La valeur -3 représente l'obstacle
//         {
//             tableau[i][j] = -3;
//         }
//         else
//         {
//             k--;
//         }
//     }
// }
