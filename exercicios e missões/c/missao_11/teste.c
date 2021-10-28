#include <stdio.h>
#include <stdlib.h>

int main(void){
    int matriz [3][3][3] = {0}, i, j,k;

    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%d \n",matriz [i][j][k]);
            }
        }
    }
    

}