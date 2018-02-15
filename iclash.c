//
//  main.c
//  Droper
//
//  Created by DROPER on 15/02/2018.
//  Copyright © 2018 DROPER. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[22][22];
    int i,j;

    for(i = 0 ; i <= 22 ; i++)
    {
        for(j = 0 ; j <= 22 ; j++)
        {
            if( i == 0 || i == 22)
            {
                a[i][j] = '_';
            }
            if( j == 0 || j == 22)
            {
                a[i][j] = '/';
            }
        }
        printf("\n");
    }
    printf(a);
    return 0;

}
