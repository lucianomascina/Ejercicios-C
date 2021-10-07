#include <stdio.h>
#include <stdlib.h>
#define tope 5
int main()
{
    int vec[tope],i,max,min,prom;
    prom=0;

    for(i=0;i<tope;i++)
    {
        printf("ingrese un numero\n");
        scanf("%d",&vec[i]);
        fflush(stdin);
    }
    for(i=0;i<tope;i++)
    {
        if(i==0)
        {
            max=vec[0];
            min=vec[0];
        }
        if(vec[i]>max)
            max=vec[i];
        if(vec[i]<min)
        min=vec[i];
        prom+=vec[i];
    }
    printf("el maximo es %d\n",max);
    printf("el minimo es %d\n",min);
    printf("el promedio es %3.2f\n",(float)prom/tope);
    system("pause");
}
