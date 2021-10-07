#include <stdio.h>
#include <stdlib.h>

void convertir(int segundos);
int main()
{
    int segundos;

    printf("ingrese segundos: \n");
    scanf("%d",&segundos);
    convertir(segundos);
    system("pause");
}
void convertir(int segundos)
{
    printf("hora: %d\n",(segundos/3600));
    printf("minutos: %d\n",(segundos%3600)/60);
    printf("segundos: %d\n",();
}
