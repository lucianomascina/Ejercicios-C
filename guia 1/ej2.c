#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a;
    printf("ingrese un numero\n");
    scanf("%d",&a);
    fflush(stdin);
    if((a<1)||(a>7))
        printf("ha ingresado un numero incorrecto\n");
    else
    {
        switch(a)
        {
            case
                1:printf("lunes\n");
                break;
            case
                2:printf("martes\n");
                break;
            case
                3:printf("miercoles\n");
                break;
            case
                4:printf("jueves\n");
                break;
            case
                5:printf("viernes\n");
                break;
            case
                6:printf("sabado\n");
                break;
            case
                7:printf("domingo\n");
                break;
            default:break;
        }
    }
    system("pause");
}
