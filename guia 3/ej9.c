#include <stdio.h>
#include <stdlib.h>

void verifica(char caracter);
int main()
{
    char car;

    printf("ingrese caracter: \n");
    scanf("%c",&car);
    fflush(stdin);
    verifica(car);
    system("pause");
}
void verifica(char caracter)
{
    if((caracter>=48)&&(caracter<=57))
        printf("es un numero \n");
    else
        printf("no es un numero \n");
}
