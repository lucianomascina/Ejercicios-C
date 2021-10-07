#include <stdio.h>
#include <stdlib.h>
#define max 255
int main ()
{
    char pal[max];
    int i=0;

    printf("ingrese palabra o frase \n");
    gets(pal);
    while(pal[i]!='0')
    {
        if(pal[i]=='a' || pal[i]=='e'|| pal[i]=='i' || pal[i]=='o' || pal[i]=='u')
            pal[i]=' ';
            i++;
    }
    printf("cadena sin vocales: %s\n",pal);
    system("pause");
}
