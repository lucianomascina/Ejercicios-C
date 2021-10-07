#include <stdio.h>
#define tope 5

int main()
{
    int veca[tope],vecb[tope],vecc[tope],i;

    for(i=0;i<tope;i++)
    {
        printf("ingrese un numero\n");
        scanf("%d",&veca[i]);
        fflush(stdin);
    }
    printf("\n");
    for(i=0;i<tope;i++)
    {
        printf("ingrese un numero\n");
        scanf("%d",&vecb[i]);
        fflush(stdin);
    }
    printf("\n");
    for(i=0;i<tope;i++)
    {
        vecc[i]=(veca[i]+vecb[i]);
    }
    printf("\n");
    for(i=0;i<tope;i++)
    {
        printf("%d\n",vecc[i]);
    }
    system("pause");
}
