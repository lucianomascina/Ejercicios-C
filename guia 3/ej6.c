#include <stdio.h>
#include <stdlib.h>
#define max 5

void ordenar(int vec[max]);

int main()
{
    int vec[max],i;

    for(i=0;i<max;i++)
    {
        printf("ingrese un numero: \n");
        scanf("%d",&vec[i]);
        fflush(stdin);
    }
    ordenar(vec);
    system("pause");
}
void ordenar(int vec[max])
{
    int i,j,aux;

    for(i=1;i<max;i++)
    {
        for(j=0;j<max-1;j++)
        {
            if(vec[j]>vec[j+1])
            {
                aux=vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=aux;
            }
        }
    }
    for(i=0;i<max;i++)
        printf("%d\t",vec[i]);
}
