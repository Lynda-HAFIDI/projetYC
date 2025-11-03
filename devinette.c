#include <stdio.h>

int main()
{
    int n = 5;
    int d;

    printf("Devinette\n");
    printf("Veuillez taper un numéro :\n");

    scanf("%d", &d); 

    if (d == n)
        printf("Gagné !\n");
    else
    {
        if( d > n)
            printf("Perdu ! le nombre que vous avez saisi est plus grand \n");
        if( d < n)
            printf("Perdu ! le nombre que vous avez saisi est plus petit \n");
    }

    return 0;
} 
