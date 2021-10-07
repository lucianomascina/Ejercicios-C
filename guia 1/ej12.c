#include <stdio.h>
#include <stdlib.h>
void main()
{
    float cant=0;
    float val,in;
    val=0;
    do{
        printf("ingrese un numero\n");
        scanf("%f",&in);
        fflush(stdin);
        if(in>0)
        {
            val+=in;
            cant++;
        }
    }while(in !=0);
    if(cant>0)
        printf("el promedio es %3.2f\n",(val/cant));
    system("pause");
}
