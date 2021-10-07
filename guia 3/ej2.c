#include <stdio.h>
#include <stdlib.h>
#define tope 5

void contador(int vec[tope],int num);

int main()
{
    int vector[tope],z,i;

    for(i=0;i<tope;i++)
    {
        printf("ingrese un numero: \n");
        scanf("%d",&vector[i]);
        fflush(stdin);
    }
    printf("ingrese numero a contar: \n");
    scanf("%d",&z);
    fflush(stdin);
    contador(vector,z);
    system("pause");
}
void contador(int vec[tope],int num)
{
    int i,cont=0;

    for(i=0;i<tope;i++)
    {
        if(vec[i]==num)
            cont++;
    }
    printf("el numero aparece %d veces \n",cont);
}
