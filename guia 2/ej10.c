#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tope 10
int main()
{
    int mat[tope][tope],i,z,prim,x;
    srand(time(NULL));

    for(i=0;i<tope;i++)
    {
        for(z=0;z<tope;z++)
        {
            mat[i][z]=rand()%101;
        }
    }
    for(i=0;i<tope;i++)
    {
        for(z=0;z<tope;z++)
        {
            printf("%d \t",mat[i][z]);
        }
        printf("\n");
    }
    printf("matriz de numeros primos \n\n\t");
    for(i=0;i<tope;i++)
    {
        for(z=0;z<tope;z++)
        {
            prim=0;
            for(x=1;x<=mat[i][z];x++)
            {
                if(mat[i][z]%x==0)
                    prim++;
            }
            if(prim==2)
                printf("%d \t",mat[i][z]);
            else
                printf("--\t");
        }
        printf("\n");
    }
    system("pause");
}
