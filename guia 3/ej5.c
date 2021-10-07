#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 255

void imprime(char pal[max]);

int main()
{
    char pal[max];

    printf("ingrese frase: \n");
    gets(pal);
    imprime(pal);
    system("pause");
}
void imprime(char pal[max])
{
    char pal2[max]=" ";
    int i,j,esp;
    i=0;
    esp=0;

    while(pal[i])
    {
        if(pal[i]==32)
            esp=i;
    i++;
    }
    esp++;
    for(j=0;j<i;j++)
    {
        pal2[j]=pal[esp];
        esp++;
    }
    printf("%s",pal2);
}
