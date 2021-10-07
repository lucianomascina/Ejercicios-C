#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tope 255
int strleng(char pal[tope]);

int main()
{
    char palabra[tope];

    printf("ingrese palabra: \n");
    gets(palabra);
    printf("la palabra tiene %d caracteres",strleng(palabra));
    system("pause");
}
int strleng(char pal[tope])
{
    int i=0;
    while(pal[i])
    {
        i++;
    }
    return i;
}
