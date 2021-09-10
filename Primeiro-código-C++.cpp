#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int tab()
{
    int cartelas;
        int i = 0;
        int j = 0;
        int equal = 0;
        int count = 0;
        int vectorA[10];

            do
            {
                srand(time(NULL));

                vectorA[i] = rand() % 100;
                equal = 0;
                for ( j=0; j<i; j++)
                {
                    if ( vectorA[j] == vectorA[i])
                        equal = 1;
                }
                if ( equal == 0)
                    i++;
            }while( i < 10);

            for (i=0; i<10; i++)
            {
                printf("%i ", vectorA[i]);
            }
            printf("\n");
    
    return 0;
}


int main()
{
    int howMany = 0 ;
    int c = 0;

    printf("ola, mundo.\n");
    printf("quantas cartelas: ");
    scanf("%i", &howMany);

    for ( c=0; c<howMany; c++)
    {
        printf("Cartela %i: ", c + 1);

        tab();
    }

    return 0;
}