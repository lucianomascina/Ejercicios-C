#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,y,aux;
    printf("ingrese un numero: \n");
    scanf("%d",&i);
    fflush(stdin);
    if(i==0)
        printf("el factorial es 1 \n");
    else
    {
        aux=i;
        y=i;
        do{
            if(i-1==0)
                i=0;
            else
                aux*=(i-1);
            i--;
        }while(i>0);
       printf("el factorial es %d \n",aux);
    }
    system("pause");
}
